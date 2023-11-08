/**
*   @file    Mcu_Types.h
*   @implements Mcu_Types.h_Artifact
*   @version 1.0.4
*
*   @brief   AUTOSAR Mcu - Midle layer interface for Higher layer.
*   @details File contains function prototypes used by HLD only.
*
*   @addtogroup MCU
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.3 MCAL
*   Platform             : ARM
*   Peripheral           : MC
*   Dependencies         : none
*
*   Autosar Version      : 4.3.1
*   Autosar Revision     : ASR_REL_4_3_REV_0001
*   Autosar Conf.Variant :
*   SW Version           : 1.0.4
*   Build Version        : S32K1XX_MCAL_1_0_4_RTM_ASR_REL_4_3_REV_0001_04-Apr-22
*
*   (c) Copyright 2006-2016 Freescale Semiconductor, Inc.
*       Copyright 2017-2022 NXP
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/


#ifndef MCU_TYPES_H
#define MCU_TYPES_H

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "Mcal.h"
#include "Mcu_SMC.h"
#include "Mcu_PMC.h"


/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/


/*==================================================================================================
                                             ENUMS
==================================================================================================*/


/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief
* @details
*
* @note
*
*/
typedef struct
{
    /**< @brief Configuration for SMC hardware IP. */
    P2CONST(Mcu_SMC_ConfigType, MCU_VAR, MCU_APPL_CONST) SMC_pConfig;
    /**< @brief Configuration for PMC hardware IP. */
    P2CONST(Mcu_PCM_ConfigType, MCU_VAR, MCU_APPL_CONST) PMC_pConfig;
} Mcu_DepProsConfigType;

/**
* @brief
* @details
*
* @note
*
*/
typedef struct
{

} Mcu_ClockConfigType;

/**
* @brief
* @details
*
* @note
*
*/
typedef struct
{

} Mcu_ModeConfigType;

/**
* @brief
* @details
*
* @note
*
*/
typedef struct
{

}  Mcu_RamConfigType;

typedef struct
{

}  Mcu_RamConfigType;

typedef struct
{

}  Mcu_ResetConfigType;
/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

#endif /* MCU_TYPES_H */

/** @} */
