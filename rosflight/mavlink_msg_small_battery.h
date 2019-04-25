// MESSAGE SMALL_BATTERY PACKING

#define MAVLINK_MSG_ID_SMALL_BATTERY 201

typedef struct __mavlink_small_battery_t
{
 float voltage; /*< */
 float percent; /*< */
} mavlink_small_battery_t;

#define MAVLINK_MSG_ID_SMALL_BATTERY_LEN 8
#define MAVLINK_MSG_ID_201_LEN 8

#define MAVLINK_MSG_ID_SMALL_BATTERY_CRC 92
#define MAVLINK_MSG_ID_201_CRC 92



#define MAVLINK_MESSAGE_INFO_SMALL_BATTERY { \
	"SMALL_BATTERY", \
	2, \
	{  { "voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_small_battery_t, voltage) }, \
         { "percent", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_small_battery_t, percent) }, \
         } \
}


/**
 * @brief Pack a small_battery message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param voltage 
 * @param percent 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_small_battery_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float voltage, float percent)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SMALL_BATTERY_LEN];
	_mav_put_float(buf, 0, voltage);
	_mav_put_float(buf, 4, percent);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SMALL_BATTERY_LEN);
#else
	mavlink_small_battery_t packet;
	packet.voltage = voltage;
	packet.percent = percent;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SMALL_BATTERY_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SMALL_BATTERY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SMALL_BATTERY_LEN, MAVLINK_MSG_ID_SMALL_BATTERY_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SMALL_BATTERY_LEN);
#endif
}

/**
 * @brief Pack a small_battery message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param voltage 
 * @param percent 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_small_battery_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float voltage,float percent)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SMALL_BATTERY_LEN];
	_mav_put_float(buf, 0, voltage);
	_mav_put_float(buf, 4, percent);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SMALL_BATTERY_LEN);
#else
	mavlink_small_battery_t packet;
	packet.voltage = voltage;
	packet.percent = percent;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SMALL_BATTERY_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SMALL_BATTERY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SMALL_BATTERY_LEN, MAVLINK_MSG_ID_SMALL_BATTERY_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SMALL_BATTERY_LEN);
#endif
}

/**
 * @brief Encode a small_battery struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param small_battery C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_small_battery_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_small_battery_t* small_battery)
{
	return mavlink_msg_small_battery_pack(system_id, component_id, msg, small_battery->voltage, small_battery->percent);
}

/**
 * @brief Encode a small_battery struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param small_battery C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_small_battery_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_small_battery_t* small_battery)
{
	return mavlink_msg_small_battery_pack_chan(system_id, component_id, chan, msg, small_battery->voltage, small_battery->percent);
}

/**
 * @brief Send a small_battery message
 * @param chan MAVLink channel to send the message
 *
 * @param voltage 
 * @param percent 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_small_battery_send(mavlink_channel_t chan, float voltage, float percent)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SMALL_BATTERY_LEN];
	_mav_put_float(buf, 0, voltage);
	_mav_put_float(buf, 4, percent);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_BATTERY, buf, MAVLINK_MSG_ID_SMALL_BATTERY_LEN, MAVLINK_MSG_ID_SMALL_BATTERY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_BATTERY, buf, MAVLINK_MSG_ID_SMALL_BATTERY_LEN);
#endif
#else
	mavlink_small_battery_t packet;
	packet.voltage = voltage;
	packet.percent = percent;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_BATTERY, (const char *)&packet, MAVLINK_MSG_ID_SMALL_BATTERY_LEN, MAVLINK_MSG_ID_SMALL_BATTERY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_BATTERY, (const char *)&packet, MAVLINK_MSG_ID_SMALL_BATTERY_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_SMALL_BATTERY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_small_battery_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float voltage, float percent)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, voltage);
	_mav_put_float(buf, 4, percent);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_BATTERY, buf, MAVLINK_MSG_ID_SMALL_BATTERY_LEN, MAVLINK_MSG_ID_SMALL_BATTERY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_BATTERY, buf, MAVLINK_MSG_ID_SMALL_BATTERY_LEN);
#endif
#else
	mavlink_small_battery_t *packet = (mavlink_small_battery_t *)msgbuf;
	packet->voltage = voltage;
	packet->percent = percent;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_BATTERY, (const char *)packet, MAVLINK_MSG_ID_SMALL_BATTERY_LEN, MAVLINK_MSG_ID_SMALL_BATTERY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_BATTERY, (const char *)packet, MAVLINK_MSG_ID_SMALL_BATTERY_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE SMALL_BATTERY UNPACKING


/**
 * @brief Get field voltage from small_battery message
 *
 * @return 
 */
static inline float mavlink_msg_small_battery_get_voltage(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field percent from small_battery message
 *
 * @return 
 */
static inline float mavlink_msg_small_battery_get_percent(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Decode a small_battery message into a struct
 *
 * @param msg The message to decode
 * @param small_battery C-struct to decode the message contents into
 */
static inline void mavlink_msg_small_battery_decode(const mavlink_message_t* msg, mavlink_small_battery_t* small_battery)
{
#if MAVLINK_NEED_BYTE_SWAP
	small_battery->voltage = mavlink_msg_small_battery_get_voltage(msg);
	small_battery->percent = mavlink_msg_small_battery_get_percent(msg);
#else
	memcpy(small_battery, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_SMALL_BATTERY_LEN);
#endif
}
