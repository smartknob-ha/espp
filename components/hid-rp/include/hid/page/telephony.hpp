#ifndef __HID_PAGE_TELEPHONY_HPP_
#define __HID_PAGE_TELEPHONY_HPP_

#include "hid/usage.hpp"

namespace hid::page {
enum class telephony : std::uint16_t;
template <> struct info<telephony> {
  constexpr static page_id_t page_id = 0x000b;
  constexpr static usage_id_t max_usage_id = 0x014b;
  constexpr static const char *name = "Telephony Device";
};
enum class telephony : std::uint16_t {
  PHONE = 0x0001,
  ANSWERING_MACHINE = 0x0002,
  MESSAGE_CONTROLS = 0x0003,
  HANDSET = 0x0004,
  HEADSET = 0x0005,
  TELEPHONY_KEY_PAD = 0x0006,
  PROGRAMMABLE_BUTTON = 0x0007,
  HOOK_SWITCH = 0x0020,
  FLASH = 0x0021,
  FEATURE = 0x0022,
  HOLD = 0x0023,
  REDIAL = 0x0024,
  TRANSFER = 0x0025,
  DROP = 0x0026,
  PARK = 0x0027,
  FORWARD_CALLS = 0x0028,
  ALTERNATE_FUNCTION = 0x0029,
  LINE = 0x002a,
  SPEAKER_PHONE = 0x002b,
  CONFERENCE = 0x002c,
  RING_ENABLE = 0x002d,
  RING_SELECT = 0x002e,
  PHONE_MUTE = 0x002f,
  CALLER_ID = 0x0030,
  SEND = 0x0031,
  SPEED_DIAL = 0x0050,
  STORE_NUMBER = 0x0051,
  RECALL_NUMBER = 0x0052,
  PHONE_DIRECTORY = 0x0053,
  VOICE_MAIL = 0x0070,
  SCREEN_CALLS = 0x0071,
  DO_NOT_DISTURB = 0x0072,
  MESSAGE = 0x0073,
  ANSWER_ON_OFF = 0x0074,
  INSIDE_DIAL_TONE = 0x0090,
  OUTSIDE_DIAL_TONE = 0x0091,
  INSIDE_RING_TONE = 0x0092,
  OUTSIDE_RING_TONE = 0x0093,
  PRIORITY_RING_TONE = 0x0094,
  INSIDE_RINGBACK = 0x0095,
  PRIORITY_RINGBACK = 0x0096,
  LINE_BUSY_TONE = 0x0097,
  REORDER_TONE = 0x0098,
  CALL_WAITING_TONE = 0x0099,
  CONFIRMATION_TONE_1 = 0x009a,
  CONFIRMATION_TONE_2 = 0x009b,
  TONES_OFF = 0x009c,
  OUTSIDE_RINGBACK = 0x009d,
  RINGER = 0x009e,
  PHONE_KEY_0 = 0x00b0,
  PHONE_KEY_1 = 0x00b1,
  PHONE_KEY_2 = 0x00b2,
  PHONE_KEY_3 = 0x00b3,
  PHONE_KEY_4 = 0x00b4,
  PHONE_KEY_5 = 0x00b5,
  PHONE_KEY_6 = 0x00b6,
  PHONE_KEY_7 = 0x00b7,
  PHONE_KEY_8 = 0x00b8,
  PHONE_KEY_9 = 0x00b9,
  PHONE_KEY_STAR = 0x00ba,
  PHONE_KEY_POUND = 0x00bb,
  PHONE_KEY_A = 0x00bc,
  PHONE_KEY_B = 0x00bd,
  PHONE_KEY_C = 0x00be,
  PHONE_KEY_D = 0x00bf,
  PHONE_CALL_HISTORY_KEY = 0x00c0,
  PHONE_CALLER_ID_KEY = 0x00c1,
  PHONE_SETTINGS_KEY = 0x00c2,
  HOST_CONTROL = 0x00f0,
  HOST_AVAILABLE = 0x00f1,
  HOST_CALL_ACTIVE = 0x00f2,
  ACTIVATE_HANDSET_AUDIO = 0x00f3,
  RING_TYPE = 0x00f4,
  RE_DIALABLE_PHONE_NUMBER = 0x00f5,
  STOP_RING_TONE = 0x00f8,
  PSTN_RING_TONE = 0x00f9,
  HOST_RING_TONE = 0x00fa,
  ALERT_SOUND_ERROR = 0x00fb,
  ALERT_SOUND_CONFIRM = 0x00fc,
  ALERT_SOUND_NOTIFICATION = 0x00fd,
  SILENT_RING = 0x00fe,
  EMAIL_MESSAGE_WAITING = 0x0108,
  VOICEMAIL_MESSAGE_WAITING = 0x0109,
  HOST_HOLD = 0x010a,
  INCOMING_CALL_HISTORY_COUNT = 0x0110,
  OUTGOING_CALL_HISTORY_COUNT = 0x0111,
  INCOMING_CALL_HISTORY = 0x0112,
  OUTGOING_CALL_HISTORY = 0x0113,
  PHONE_LOCALE = 0x0114,
  PHONE_TIME_SECOND = 0x0140,
  PHONE_TIME_MINUTE = 0x0141,
  PHONE_TIME_HOUR = 0x0142,
  PHONE_DATE_DAY = 0x0143,
  PHONE_DATE_MONTH = 0x0144,
  PHONE_DATE_YEAR = 0x0145,
  HANDSET_NICKNAME = 0x0146,
  ADDRESS_BOOK_ID = 0x0147,
  CALL_DURATION = 0x014a,
  DUAL_MODE_PHONE = 0x014b,
};
} // namespace hid::page

#endif // __HID_PAGE_TELEPHONY_HPP_
