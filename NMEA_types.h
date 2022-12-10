/**
 * \file NMEA_types.h
 * \author bluelife85 (bluelife85@naver.com)
 * \brief 
 * \version 0.1
 * \date 2022-12-10
 */

#ifndef __NMEA_DATA_TYPES_H__
#define __NMEA_DATA_TYPES_H__

#include <stdint.h>

#define NMEA_NBR_OF_MESSAGE_MAX (13u)
#define NMEA_NBR_OF_GNSS_TYPE (5u)

typedef enum {
   NMEA_GNSS_GPS = 0,
   NMEA_GNSS_GLONASS = 1,
   NMEA_GNSS_GALILEO = 2,
   NMEA_GNSS_BEIDOU = 3,
   NMEA_GNSS = 4,
   NMEA_GNSS_NONE = 5
} NMEA_GNSSTypes;

extern const char* NMEA_Talker[NMEA_NBR_OF_GNSS_TYPE];
extern const char* NMEA_Messages[NMEA_NBR_OF_MESSAGE_MAX];

#endif /* __NMEA_DATA_TYPES_H__ */
