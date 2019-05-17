// MESSAGE ROSFLIGHT_MULTI_RANGE PACKING

#define MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE 202

typedef struct __mavlink_rosflight_multi_range_t
{
 uint16_t ranges[16]; /*< */
 uint8_t nb_ranges; /*< */
} mavlink_rosflight_multi_range_t;

#define MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN 33
#define MAVLINK_MSG_ID_202_LEN 33

#define MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_CRC 44
#define MAVLINK_MSG_ID_202_CRC 44

#define MAVLINK_MSG_ROSFLIGHT_MULTI_RANGE_FIELD_RANGES_LEN 16

#define MAVLINK_MESSAGE_INFO_ROSFLIGHT_MULTI_RANGE { \
	"ROSFLIGHT_MULTI_RANGE", \
	2, \
	{  { "ranges", NULL, MAVLINK_TYPE_UINT16_T, 16, 0, offsetof(mavlink_rosflight_multi_range_t, ranges) }, \
         { "nb_ranges", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_rosflight_multi_range_t, nb_ranges) }, \
         } \
}


/**
 * @brief Pack a rosflight_multi_range message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param nb_ranges 
 * @param ranges 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rosflight_multi_range_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t nb_ranges, const uint16_t *ranges)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN];
	_mav_put_uint8_t(buf, 32, nb_ranges);
	_mav_put_uint16_t_array(buf, 0, ranges, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN);
#else
	mavlink_rosflight_multi_range_t packet;
	packet.nb_ranges = nb_ranges;
	mav_array_memcpy(packet.ranges, ranges, sizeof(uint16_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN);
#endif
}

/**
 * @brief Pack a rosflight_multi_range message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param nb_ranges 
 * @param ranges 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rosflight_multi_range_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t nb_ranges,const uint16_t *ranges)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN];
	_mav_put_uint8_t(buf, 32, nb_ranges);
	_mav_put_uint16_t_array(buf, 0, ranges, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN);
#else
	mavlink_rosflight_multi_range_t packet;
	packet.nb_ranges = nb_ranges;
	mav_array_memcpy(packet.ranges, ranges, sizeof(uint16_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN);
#endif
}

/**
 * @brief Encode a rosflight_multi_range struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rosflight_multi_range C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rosflight_multi_range_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rosflight_multi_range_t* rosflight_multi_range)
{
	return mavlink_msg_rosflight_multi_range_pack(system_id, component_id, msg, rosflight_multi_range->nb_ranges, rosflight_multi_range->ranges);
}

/**
 * @brief Encode a rosflight_multi_range struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rosflight_multi_range C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rosflight_multi_range_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rosflight_multi_range_t* rosflight_multi_range)
{
	return mavlink_msg_rosflight_multi_range_pack_chan(system_id, component_id, chan, msg, rosflight_multi_range->nb_ranges, rosflight_multi_range->ranges);
}

/**
 * @brief Send a rosflight_multi_range message
 * @param chan MAVLink channel to send the message
 *
 * @param nb_ranges 
 * @param ranges 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rosflight_multi_range_send(mavlink_channel_t chan, uint8_t nb_ranges, const uint16_t *ranges)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN];
	_mav_put_uint8_t(buf, 32, nb_ranges);
	_mav_put_uint16_t_array(buf, 0, ranges, 16);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE, buf, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE, buf, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN);
#endif
#else
	mavlink_rosflight_multi_range_t packet;
	packet.nb_ranges = nb_ranges;
	mav_array_memcpy(packet.ranges, ranges, sizeof(uint16_t)*16);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE, (const char *)&packet, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE, (const char *)&packet, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rosflight_multi_range_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t nb_ranges, const uint16_t *ranges)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 32, nb_ranges);
	_mav_put_uint16_t_array(buf, 0, ranges, 16);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE, buf, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE, buf, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN);
#endif
#else
	mavlink_rosflight_multi_range_t *packet = (mavlink_rosflight_multi_range_t *)msgbuf;
	packet->nb_ranges = nb_ranges;
	mav_array_memcpy(packet->ranges, ranges, sizeof(uint16_t)*16);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE, (const char *)packet, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE, (const char *)packet, MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ROSFLIGHT_MULTI_RANGE UNPACKING


/**
 * @brief Get field nb_ranges from rosflight_multi_range message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_rosflight_multi_range_get_nb_ranges(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  32);
}

/**
 * @brief Get field ranges from rosflight_multi_range message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_rosflight_multi_range_get_ranges(const mavlink_message_t* msg, uint16_t *ranges)
{
	return _MAV_RETURN_uint16_t_array(msg, ranges, 16,  0);
}

/**
 * @brief Decode a rosflight_multi_range message into a struct
 *
 * @param msg The message to decode
 * @param rosflight_multi_range C-struct to decode the message contents into
 */
static inline void mavlink_msg_rosflight_multi_range_decode(const mavlink_message_t* msg, mavlink_rosflight_multi_range_t* rosflight_multi_range)
{
#if MAVLINK_NEED_BYTE_SWAP
	mavlink_msg_rosflight_multi_range_get_ranges(msg, rosflight_multi_range->ranges);
	rosflight_multi_range->nb_ranges = mavlink_msg_rosflight_multi_range_get_nb_ranges(msg);
#else
	memcpy(rosflight_multi_range, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ROSFLIGHT_MULTI_RANGE_LEN);
#endif
}
