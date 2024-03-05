#ifndef __HID_PAGE_SIMULATION_HPP_
#define __HID_PAGE_SIMULATION_HPP_

#include "hid/usage.hpp"

namespace hid::page {
enum class simulation : std::uint8_t;
template <> struct info<simulation> {
  constexpr static page_id_t page_id = 0x0002;
  constexpr static usage_id_t max_usage_id = 0x00d0;
  constexpr static const char *name = "Simulation Controls";
};
enum class simulation : std::uint8_t {
  FLIGHT_SIMULATION_DEVICE = 0x0001,
  AUTOMOBILE_SIMULATION_DEVICE = 0x0002,
  TANK_SIMULATION_DEVICE = 0x0003,
  SPACESHIP_SIMULATION_DEVICE = 0x0004,
  SUBMARINE_SIMULATION_DEVICE = 0x0005,
  SAILING_SIMULATION_DEVICE = 0x0006,
  MOTORCYCLE_SIMULATION_DEVICE = 0x0007,
  SPORTS_SIMULATION_DEVICE = 0x0008,
  AIRPLANE_SIMULATION_DEVICE = 0x0009,
  HELICOPTER_SIMULATION_DEVICE = 0x000a,
  MAGIC_CARPET_SIMULATION_DEVICE = 0x000b,
  BICYCLE_SIMULATION_DEVICE = 0x000c,
  FLIGHT_CONTROL_STICK = 0x0020,
  FLIGHT_STICK = 0x0021,
  CYCLIC_CONTROL = 0x0022,
  CYCLIC_TRIM = 0x0023,
  FLIGHT_YOKE = 0x0024,
  TRACK_CONTROL = 0x0025,
  AILERON = 0x00b0,
  AILERON_TRIM = 0x00b1,
  ANTI_TORQUE_CONTROL = 0x00b2,
  AUTOPILOT_ENABLE = 0x00b3,
  CHAFF_RELEASE = 0x00b4,
  COLLECTIVE_CONTROL = 0x00b5,
  DIVE_BRAKE = 0x00b6,
  ELECTRONIC_COUNTERMEASURES = 0x00b7,
  ELEVATOR = 0x00b8,
  ELEVATOR_TRIM = 0x00b9,
  RUDDER = 0x00ba,
  THROTTLE = 0x00bb,
  FLIGHT_COMMUNICATIONS = 0x00bc,
  FLARE_RELEASE = 0x00bd,
  LANDING_GEAR = 0x00be,
  TOE_BRAKE = 0x00bf,
  TRIGGER = 0x00c0,
  WEAPONS_ARM = 0x00c1,
  WEAPONS_SELECT = 0x00c2,
  WING_FLAPS = 0x00c3,
  ACCELERATOR = 0x00c4,
  BRAKE = 0x00c5,
  CLUTCH = 0x00c6,
  SHIFTER = 0x00c7,
  STEERING = 0x00c8,
  TURRET_DIRECTION = 0x00c9,
  BARREL_ELEVATION = 0x00ca,
  DIVE_PLANE = 0x00cb,
  BALLAST = 0x00cc,
  BICYCLE_CRANK = 0x00cd,
  HANDLE_BARS = 0x00ce,
  FRONT_BRAKE = 0x00cf,
  REAR_BRAKE = 0x00d0,
};
} // namespace hid::page

#endif // __HID_PAGE_SIMULATION_HPP_