/**
 * \file NMEA_const.c
 * \author bluelife85 (bluelife85@naver.com)
 * \brief 
 * \version 0.1
 * \date 2022-12-10
 */
#include "NMEA_types.h"

const char* NMEA_Talker[NMEA_NBR_OF_GNSS_TYPE] = {
   "GP",
   "GL",
   "GA",
   "GB",
   "GN"
};

const char* NMEA_Messages[NMEA_NBR_OF_MESSAGE_MAX] = {
   "DTM",
   "GBS",
   "GGA",
   "GLL",
   "GNS",
   "GRS",
   "GSA",
   "GST",
   "GSV",
   "RMC",
   "VWL",
   "VTG",
   "ZDA"
};
