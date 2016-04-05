/**
  ******************************************************************************
  * @file    sensor_service.h 
  * @author  CL
  * @version V1.0.0
  * @date    04-July-2014
  * @brief   
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2014 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/  
#ifndef _SENSOR_SERVICE_H_
#define _SENSOR_SERVICE_H_

#ifdef __cplusplus
 extern "C" {
#endif 

/* Includes ------------------------------------------------------------------*/
#include "cube_hal.h"
#include "hal_types.h"
#include "bluenrg_gatt_server.h"
#include "bluenrg_gap.h"
#include "string.h"
#include "bluenrg_gap_aci.h"
#include "bluenrg_gatt_aci.h"
#include "hci_const.h"
#include "gp_timer.h"
#include "bluenrg_hal_aci.h"
#include "bluenrg_aci_const.h"   
#include "hci.h"
#include "hal.h"
#include "sm.h"
#include "debug.h"

#include <stdlib.h>

/** @addtogroup X-CUBE-BLE1_Applications
 *  @{
 */

/** @addtogroup SensorDemo
 *  @{
 */
 
/** @addtogroup SENSOR_SERVICE 
 * @{
 */

/** @addtogroup SENSOR_SERVICE_Exported_Defines 
 * @{
 */
/* Exported defines ----------------------------------------------------------*/   
#define IDB04A1 0
#define IDB05A1 1

/**
 * @}
 */

/** @addtogroup SENSOR_SERVICE_Exported_Types
 *  @{
 */
typedef int i32_t;

/**
 * @brief Union containing the integer representation (32-bit IEEE-754) of a float
 */
typedef union {
	float f;
  i32_t i;
} f32_u;

/**
 * @}
 */

/** @addtogroup SENSOR_SERVICE_Exported_Functions
 *  @{
 */
tBleStatus Add_Acc_Service(void);
tBleStatus Acc_Update(uint8_t angles_data[]);
tBleStatus Add_Temperature_Service(void);
tBleStatus Temp_Update(uint8_t temp_data[]);
void       setConnectable(void);
void       enableNotification(void);
void       GAP_ConnectionComplete_CB(uint8_t addr[6], uint16_t handle);
void       GAP_DisconnectionComplete_CB(void);
void       HCI_Event_CB(void *pckt);

/**
 * @}
 */

/**
 * @}
 */
 
/**
 * @}
 */

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif /* _SENSOR_SERVICE_H_ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

