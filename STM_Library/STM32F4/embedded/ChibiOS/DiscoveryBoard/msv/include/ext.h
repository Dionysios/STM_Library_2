/*
     ChibiOS/RT - Copyright (C) 2006,2007,2008,2009,2010,
00003                  2011,2012 Giovanni Di Sirio.
00004 
00005     This file is part of ChibiOS/RT.
00006 
00007     ChibiOS/RT is free software; you can redistribute it and/or modify
00008     it under the terms of the GNU General Public License as published by
00009     the Free Software Foundation; either version 3 of the License, or
00010     (at your option) any later version.
00011 
00012     ChibiOS/RT is distributed in the hope that it will be useful,
00013     but WITHOUT ANY WARRANTY; without even the implied warranty of
00014     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
00015     GNU General Public License for more details.
00016 
00017     You should have received a copy of the GNU General Public License
00018     along with this program.  If not, see <http://www.gnu.org/licenses/>.
00019 */
 /**
00022  * @file    ext.h
00023  * @brief   EXT Driver macros and structures.
00024  *
00025  * @addtogroup EXT
00026  * @{
00027  */
 #ifndef _EXT_H_
 #define _EXT_H_
 
 #if HAL_USE_EXT || defined(__DOXYGEN__)
 
 /*===========================================================================*/
 /* Driver constants.                                                         */
 /*===========================================================================*/
 
 /**
00039  * @name    EXT channel modes
00040  * @{
00041  */
#define EXT_CH_MODE_EDGES_MASK      3   /**< @brief Mask of edges field.    */
#define EXT_CH_MODE_DISABLED        0   /**< @brief Channel disabled.       */
#define EXT_CH_MODE_RISING_EDGE     1   /**< @brief Rising edge callback.   */ 
#define EXT_CH_MODE_FALLING_EDGE    2   /**< @brief Falling edge callback.  */
#define EXT_CH_MODE_BOTH_EDGES      3   /**< @brief Both edges callback.    */  #define EXT_CH_MODE_AUTOSTART       4   /**< @brief Channel started
00049                                              automatically on driver start. */
 /** @} */
 
 /*===========================================================================*/
 /* Driver pre-compile time settings.                                         */
 /*===========================================================================*/ 
/*===========================================================================*/
 /* Derived constants and error checks.                                       */
/*===========================================================================*/ 
 /*===========================================================================*/
 /* Driver data structures and types.                                         */
 /*===========================================================================*/ 
 /**
00065  * @brief   Driver state machine possible states.
00066  */
00067 typedef enum {
00068   EXT_UNINIT = 0,                   /**< Not initialized.                   */
00069   EXT_STOP = 1,                     /**< Stopped.                           */
00070   EXT_ACTIVE = 2,                   /**< Active.                            */
00071 } extstate_t;
00072 
00073 /**
00074  * @brief   Type of a structure representing a EXT driver.
00075  */
00076 typedef struct EXTDriver EXTDriver;
 
 #include "ext_lld.h"
 
 /*===========================================================================*/
 /* Driver macros.                                                            */
 /*===========================================================================*/
 
 /**
00085  * @name    Macro Functions
00086  * @{
00087  */
 /**
00089  * @brief   Enables an EXT channel.
00090  *
00091  * @param[in] extp      pointer to the @p EXTDriver object
00092  * @param[in] channel   channel to be enabled
00093  *
00094  * @iclass
00095  */
 #define extChannelEnableI(extp, channel) ext_lld_channel_enable(extp, channel)
 
 /**
00099  * @brief   Disables an EXT channel.
00100  *
00101  * @param[in] extp      pointer to the @p EXTDriver object
00102  * @param[in] channel   channel to be disabled
00103  *
00104  * @iclass
00105  */
 #define extChannelDisableI(extp, channel) ext_lld_channel_disable(extp, channel)

 /**
00109  * @brief   Changes the operation mode of a channel.
00110  * @note    This function attempts to write over the current configuration
00111  *          structure that must have been not declared constant. This
00112  *          violates the @p const qualifier in @p extStart() but it is
00113  *          intentional. This function cannot be used if the configuration
00114  *          structure is declared @p const.
00115  *
00116  * @param[in] extp      pointer to the @p EXTDriver object
00117  * @param[in] channel   channel to be changed
00118  * @param[in] extcp     new configuration for the channel
00119  *
00120  * @api
00121  */
 #define extSetChannelMode(extp, channel, extcp) {                           \
   chSysLock();                                                              \
   extSetChannelModeI(extp, channel, extcp);                                 \
   chSysUnlock();                                                            \
}
 
/** @} */
 
 /*===========================================================================*/
 /* External declarations.                                                    */
 /*===========================================================================*/
 
 #ifdef __cplusplus
 extern "C" {
#endif
   void extInit(void);
   void extObjectInit(EXTDriver *extp);
   void extStart(EXTDriver *extp, const EXTConfig *config);
   void extStop(EXTDriver *extp);
   void extChannelEnable(EXTDriver *extp, expchannel_t channel);
   void extChannelDisable(EXTDriver *extp, expchannel_t channel);
   void extSetChannelModeI(EXTDriver *extp,
                           expchannel_t channel,
                          const EXTChannelConfig *extcp);
 #ifdef __cplusplus
 }
 #endif
 
#endif /* HAL_USE_EXT */
 
#endif /* _EXT_H_ */
 
 /** @} */
