#ifndef PORT_H
#define PORT_H

#define PORT_VENDOR_ID 3000U

#define PORT_MODULE_ID 124U

#define PORT_SW_MAJOR_VERSION 1U
#define PORT_SW_MINOR_VERSION 0U
#define PORT_SW_PATCH_VERSION 0U

#define PORT_AR_RELEASE_MAJOR_VERSION 21U
#define PORT_AR_RELEASE_MINOR_VERSION 11U
#define PORT_AR_RELEASE_PATCH_VERSION 0U

#include "Port_Cfg.h"
#include "Std_Types.h"

/* AUTOSAR checking between Std_Types and Port Modules */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION) || \
     (STD_TYPES_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION) || \
     (STD_TYPES_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
#error "The AR version of Std_Types.h does not match the expected version"
#endif

/* AUTOSAR checking between Port_Cfg and Port Modules */
#if ((PORT_CFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION) || \
     (PORT_CFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION) || \
     (PORT_CFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
#error "The AR version of Port_Cfg.h does not match the expected version"
#endif

/******************** Macro Definitions ************************/
/*
 * Port Services IDs
 * */
#define Port_Init_SID 0x00U
#define Port_SetPinDirection_SID 0x01U
#define Port_RefreshPortDirection_SID 0x02U
#define Port_GetVersionInfo_SID 0x03U
#define Port_SetPinMode_SID 0x04U

/*
 * Development Errors
 * */
#define PORT_E_PARAM_PIN 0x0AU
#define PORT_E_DIRECTION_UNCHANGEABLE 0x0BU
#define PORT_E_INIT_FAILED 0x0CU
#define PORT_E_PARAM_INVALID_MODE 0x0DU
#define PORT_E_MODE_UNCHANGEABLE 0x0EU
#define PORT_E_UNINIT 0x0FU
#define PORT_E_PARAM_POINTER 0x10U

/*
 * Port Driver Instance ID
 * */
#define PORT_INSTANCE_ID 0U

/*
 * Port Pins Symbolic Names
 * */
#define PORT_A_PIN_0 PORT_A_PIN_0_ID
#define PORT_A_PIN_1 PORT_A_PIN_1_ID
#define PORT_A_PIN_2 PORT_A_PIN_2_ID
#define PORT_A_PIN_3 PORT_A_PIN_3_ID
#define PORT_A_PIN_4 PORT_A_PIN_4_ID
#define PORT_A_PIN_5 PORT_A_PIN_5_ID
#define PORT_A_PIN_6 PORT_A_PIN_6_ID
#define PORT_A_PIN_7 PORT_A_PIN_7_ID

#define PORT_B_PIN_0 PORT_B_PIN_0_ID
#define PORT_B_PIN_1 PORT_B_PIN_1_ID
#define PORT_B_PIN_2 PORT_B_PIN_2_ID
#define PORT_B_PIN_3 PORT_B_PIN_3_ID
#define PORT_B_PIN_4 PORT_B_PIN_4_ID
#define PORT_B_PIN_5 PORT_B_PIN_5_ID
#define PORT_B_PIN_6 PORT_B_PIN_6_ID
#define PORT_B_PIN_7 PORT_B_PIN_7_ID

#define PORT_C_PIN_0 PORT_C_PIN_0_ID
#define PORT_C_PIN_1 PORT_C_PIN_1_ID
#define PORT_C_PIN_2 PORT_C_PIN_2_ID
#define PORT_C_PIN_3 PORT_C_PIN_3_ID
#define PORT_C_PIN_4 PORT_C_PIN_4_ID
#define PORT_C_PIN_5 PORT_C_PIN_5_ID
#define PORT_C_PIN_6 PORT_C_PIN_6_ID
#define PORT_C_PIN_7 PORT_C_PIN_7_ID

#define PORT_D_PIN_0 PORT_D_PIN_0_ID
#define PORT_D_PIN_1 PORT_D_PIN_1_ID
#define PORT_D_PIN_2 PORT_D_PIN_2_ID
#define PORT_D_PIN_3 PORT_D_PIN_3_ID
#define PORT_D_PIN_4 PORT_D_PIN_4_ID
#define PORT_D_PIN_5 PORT_D_PIN_5_ID
#define PORT_D_PIN_6 PORT_D_PIN_6_ID
#define PORT_D_PIN_7 PORT_D_PIN_7_ID

#define PORT_E_PIN_0 PORT_E_PIN_0_ID
#define PORT_E_PIN_1 PORT_E_PIN_1_ID
#define PORT_E_PIN_2 PORT_E_PIN_2_ID
#define PORT_E_PIN_3 PORT_E_PIN_3_ID
#define PORT_E_PIN_4 PORT_E_PIN_4_ID
#define PORT_E_PIN_5 PORT_E_PIN_5_ID

#define PORT_F_PIN_0 PORT_F_PIN_0_ID
#define PORT_F_PIN_1 PORT_F_PIN_1_ID
#define PORT_F_PIN_2 PORT_F_PIN_2_ID
#define PORT_F_PIN_3 PORT_F_PIN_3_ID
#define PORT_F_PIN_4 PORT_F_PIN_4_ID

/******************** Type Definitions ************************/
typedef uint8 Port_PinType;
typedef uint8 Port_PortType;
typedef uint8 Port_PinModeType;
typedef uint8 Port_PadDriveType;
typedef uint8 Port_DriveType;
typedef uint8 Port_LevelType;
typedef uint8 Port_PinDirectionType;
typedef boolean Port_IntPullUpActiveType;
typedef boolean Port_SlewRateCtlType;
typedef boolean Port_DirChangeType;
typedef boolean Port_ModeChangeType;


typedef struct {
  Port_PinType Pin;
  Port_PinDirectionType PinDir;
  Port_PinModeType PinInitialMode;
  Port_LevelType PinLevel;
  Port_PadDriveType PinPadDrive;
  Port_DriveType PinDrive;
  Port_IntPullUpActiveType PinIntPullupActive;
  Port_SlewRateCtlType PinSlewRateCtl;
  Port_DirChangeType PinDirChangeable;
  Port_ModeChangeType PinModeChangeble;
} Port_PinConfigType;

typedef struct {
  Port_PinConfigType Pins[PORT_NUM_OF_PINS];
} Port_ConfigType;

void Port_Init(const Port_ConfigType *ConfigPtr);
void Port_RefreshPortDirection(void);
#if PORT_SET_PIN_DIRECTION_API == TRUE
void Port_SetPinDirection(Port_PinType Pin, Port_PinDirectionType Direction);
#endif
#if PORT_SET_PIN_MODE_API == TRUE
void Port_SetPinMode(Port_PinType Pin, Port_PinModeType Mode);
#endif
#if PORT_VERSION_INFO_API == TRUE
void Port_GetVersionInfo(Std_VersionInfoType *versioninfo);
#endif

#endif /* PORT_H */
