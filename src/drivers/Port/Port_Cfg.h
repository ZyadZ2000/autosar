#ifndef PORT_CFG_H
#define PORT_CFG_H

#define PORT_CFG_VENDOR_ID 3000U

#define PORT_CFG_SW_MAJOR_VERSION 1U
#define PORT_CFG_SW_MINOR_VERSION 0U
#define PORT_CFG_SW_PATCH_VERSION 0U

#define PORT_CFG_AR_RELEASE_MAJOR_VERSION 21U
#define PORT_CFG_AR_RELEASE_MINOR_VERSION 11U
#define PORT_CFG_AR_RELEASE_PATCH_VERSION 0U

#include "Std_Types.h"

/* AUTOSAR checking between Std_Types and Port_Cfg Modules */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != \
      PORT_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (STD_TYPES_AR_RELEASE_MINOR_VERSION != \
      PORT_CFG_AR_RELEASE_MINOR_VERSION) || \
     (STD_TYPES_AR_RELEASE_PATCH_VERSION != \
      PORT_CFG_AR_RELEASE_PATCH_VERSION))
#error "The AR version of Std_Types.h does not match the expected version"
#endif

/*
 * Module Wide Configurations
 * */
#define PORT_DEV_ERR_DETECT STD_OFF
#define PORT_SET_PIN_DIRECTION_API STD_ON
#define PORT_SET_PIN_MODE_API STD_ON
#define PORT_VERSION_INFO_API STD_ON

/*
 * Number of Ports
 * */
#define PORT_NUM_OF_PORTS 6U

/*
 * Port IDs
 * */
#define PORT_A_ID 0U
#define PORT_B_ID 1U
#define PORT_C_ID 2U
#define PORT_D_ID 3U
#define PORT_E_ID 4U
#define PORT_F_ID 5U

/*
 * Total Number of Pins
 * */
#define PORT_NUM_OF_PINS 43U

/*
 * Number of Pins for Each Port
 * */
#define PORT_A_NUMBER_OF_PORT_PINS 8U
#define PORT_B_NUMBER_OF_PORT_PINS 8U
#define PORT_C_NUMBER_OF_PORT_PINS 8U
#define PORT_D_NUMBER_OF_PORT_PINS 8U
#define PORT_E_NUMBER_OF_PORT_PINS 6U
#define PORT_F_NUMBER_OF_PORT_PINS 5U

/*
 * Pins IDs
 * */
#define PORT_A_PIN_0_ID 0x00U
#define PORT_A_PIN_1_ID 0x01U
#define PORT_A_PIN_2_ID 0x02U
#define PORT_A_PIN_3_ID 0x03U
#define PORT_A_PIN_4_ID 0x04U
#define PORT_A_PIN_5_ID 0x05U
#define PORT_A_PIN_6_ID 0x06U
#define PORT_A_PIN_7_ID 0x07U

#define PORT_B_PIN_0_ID 0x10U
#define PORT_B_PIN_1_ID 0x11U
#define PORT_B_PIN_2_ID 0x12U
#define PORT_B_PIN_3_ID 0x13U
#define PORT_B_PIN_4_ID 0x14U
#define PORT_B_PIN_5_ID 0x15U
#define PORT_B_PIN_6_ID 0x16U
#define PORT_B_PIN_7_ID 0x17U

#define PORT_C_PIN_0_ID 0x20U
#define PORT_C_PIN_1_ID 0x21U
#define PORT_C_PIN_2_ID 0x22U
#define PORT_C_PIN_3_ID 0x23U
#define PORT_C_PIN_4_ID 0x24U
#define PORT_C_PIN_5_ID 0x25U
#define PORT_C_PIN_6_ID 0x26U
#define PORT_C_PIN_7_ID 0x27U

#define PORT_D_PIN_0_ID 0x30U
#define PORT_D_PIN_1_ID 0x31U
#define PORT_D_PIN_2_ID 0x32U
#define PORT_D_PIN_3_ID 0x33U
#define PORT_D_PIN_4_ID 0x34U
#define PORT_D_PIN_5_ID 0x35U
#define PORT_D_PIN_6_ID 0x36U
#define PORT_D_PIN_7_ID 0x37U

#define PORT_E_PIN_0_ID 0x40U
#define PORT_E_PIN_1_ID 0x41U
#define PORT_E_PIN_2_ID 0x42U
#define PORT_E_PIN_3_ID 0x43U
#define PORT_E_PIN_4_ID 0x44U
#define PORT_E_PIN_5_ID 0x45U

#define PORT_F_PIN_0_ID 0x50U
#define PORT_F_PIN_1_ID 0x51U
#define PORT_F_PIN_2_ID 0x52U
#define PORT_F_PIN_3_ID 0x53U
#define PORT_F_PIN_4_ID 0x54U

/*
 * Pin Modes
 * */
#define PORT_PIN_MODE_CAN 0x00U
#define PORT_PIN_MODE_ICU 0x01U
#define PORT_PIN_MODE_SSI 0x02U
#define PORT_PIN_MODE_PWM 0x03U
#define PORT_PIN_MODE_UART 0x04U
#define PORT_PIN_MODE_I2C 0x05U
#define PORT_PIN_MODE_JTAG 0x06U
#define PORT_PIN_MODE_DIO 0x07U
#define PORT_PIN_MODE_DIO_GPT 0x08U
#define PORT_PIN_MODE_DIO_WDG 0x09U
#define PORT_PIN_MODE_ADC 0x0AU

/*
 * Pin Levels
 * */
#define PORT_PIN_LEVEL_LOW 0x00U
#define PORT_PIN_LEVEL_HIGH 0x01U

/*
 * Pin Direction
 * */
#define PORT_PIN_IN 0x00U
#define PORT_PIN_OUT 0x01U

/*
 * Pin Drive Modes
 * */
#define PORT_PIN_DRIVE_PUSH_PULL 0x00U
#define PORT_PIN_DRIVE_OPEN_DRAIN 0x01U

/*
 * Pin Pad Drive Modes
 * */
#define PORT_PIN_PAD_DRIVE_2MA 0x00U
#define PORT_PIN_PAD_DRIVE_4MA 0x01U
#define PORT_PIN_PAD_DRIVE_8MA 0x02U

/*
 * Pin Internal Pull-Up Activation
 * */
#define PORT_PIN_INT_PULLUP_ACTIVE TRUE
#define PORT_PIN_INT_PULLUP_INACTIVE FALSE

/*
 * Pin Slew Rate Control
 * */
#define PORT_PIN_SLEW_RATE_CTL_ENABLE TRUE
#define PORT_PIN_SLEW_RATE_CTL_DISABLE FALSE

/*
 * Pin Direction Changeability
 * */
#define PORT_PIN_DIR_CHANGEABLE TRUE
#define PORT_PIN_DIR_UNCHANGEABLE FALSE

/*
 * Pin Mode Changeability
 * */
#define PORT_PIN_MODE_CHANGEABLE TRUE
#define PORT_PIN_MODE_UNCHANGEABLE FALSE

///*
// * Pins Modes
// * */
// #define PORT_A_PIN_0_MODE_0 PORT_PIN_MODE_DIO
// #define PORT_A_PIN_0_MODE_1 PORT_PIN_MODE_UART
// #define PORT_A_PIN_0_MODE_2 PORT_PIN_MODE_CAN
//
// #define PORT_A_PIN_1_MODE_0 PORT_PIN_MODE_DIO
// #define PORT_A_PIN_1_MODE_1 PORT_PIN_MODE_UART
// #define PORT_A_PIN_1_MODE_2 PORT_PIN_MODE_CAN
//
// #define PORT_A_PIN_2_MODE_0 PORT_PIN_MODE_DIO
// #define PORT_A_PIN_2_MODE_1 PORT_PIN_MODE_SSI
//
// #define PORT_A_PIN_3_MODE_0 PORT_PIN_MODE_DIO
// #define PORT_A_PIN_3_MODE_1 PORT_PIN_MODE_SSI
//
// #define PORT_A_PIN_4_MODE_0 PORT_PIN_MODE_DIO
// #define PORT_A_PIN_4_MODE_1 PORT_PIN_MODE_SSI
//
// #define PORT_A_PIN_5_MODE_0 PORT_PIN_MODE_DIO
// #define PORT_A_PIN_5_MODE_1 PORT_PIN_MODE_SSI
//

#endif /* PORT_CFG_H */
