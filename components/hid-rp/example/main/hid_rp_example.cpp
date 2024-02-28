#include <chrono>
#include <vector>

#include "logger.hpp"

#include "hid-rp-gamepad.hpp"
#include "hid-rp.hpp"

using namespace std::chrono_literals;

extern "C" void app_main(void) {
  espp::Logger logger({.tag = "Hid RP Example", .level = espp::Logger::Verbosity::INFO});
  logger.info("Starting");

  //! [hid rp example]
  static constexpr uint8_t report_id = 1;
  static constexpr size_t num_buttons = 15;
  static constexpr int joystick_min = 0;
  static constexpr int joystick_max = 65535;
  static constexpr int trigger_min = 0;
  static constexpr int trigger_max = 1024;

  using Gamepad = espp::GamepadReport<num_buttons, joystick_min, joystick_max, trigger_min,
                                      trigger_max, report_id>;
  Gamepad gamepad_input_report;

  // Generate the report descriptor for the gamepad
  auto descriptor = gamepad_input_report.get_descriptor();

  logger.info("Report Descriptor:");
  logger.info("  Size: {}", descriptor.size());
  logger.info("  Data: {::#02x}", descriptor);

  Gamepad::Hat hat = Gamepad::Hat::UP_RIGHT;
  int button_index = 5;
  float angle = 2.0f * M_PI * button_index / num_buttons;

  gamepad_input_report.reset();
  gamepad_input_report.set_hat(hat);
  gamepad_input_report.set_button(button_index, true);
  // joystick inputs are in the range [-1, 1] float
  gamepad_input_report.set_right_joystick(cos(angle), sin(angle));
  gamepad_input_report.set_left_joystick(sin(angle), cos(angle));
  // trigger inputs are in the range [0, 1] float
  gamepad_input_report.set_accelerator(std::abs(sin(angle)));
  gamepad_input_report.set_brake(std::abs(cos(angle)));

  button_index = (button_index % num_buttons) + 1;

  // send an input report
  auto report = gamepad_input_report.get_report();
  logger.info("Input report:");
  logger.info("  Size: {}", report.size());
  logger.info("  Data: {::#02x}", report);
  //! [hid rp example]
}
