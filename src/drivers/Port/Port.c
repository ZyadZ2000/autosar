#include "Port.h"

#if PORT_DEV_ERR_DETECT == STD_ON
#include "Det.h"

#if ((DET_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION) || \
     (DET_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION) || \
     (DET_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
#error "The AR version of Det.h does not match the expected version"
#endif

#endif

#include "Port_Reg.h"

/* Port_Cfg.c Externs */
extern const uint8 PortAPinsModeChangeability[8];
extern const uint8 PortBPinsModeChangeability[8];
extern const uint8 PortCPinsModeChangeability[8];
extern const uint8 PortDPinsModeChangeability[8];
extern const uint8 PortEPinsModeChangeability[6];
extern const uint8 PortFPinsModeChangeability[5];

extern const uint8 PortAPinsDirChangeability[8];
extern const uint8 PortBPinsDirChangeability[8];
extern const uint8 PortCPinsDirChangeability[8];
extern const uint8 PortDPinsDirChangeability[8];
extern const uint8 PortEPinsDirChangeability[6];
extern const uint8 PortFPinsDirChangeability[5];

extern const uint8 PortAPinsModeValues[8][14];
extern const uint8 PortBPinsModeValues[8][14];
extern const uint8 PortCPinsModeValues[8][14];
extern const uint8 PortDPinsModeValues[8][14];
extern const uint8 PortEPinsModeValues[6][14];
extern const uint8 PortFPinsModeValues[5][14];

/* Static Variables */
STATIC boolean PortInitialized = FALSE;
STATIC Port_PinConfigType *Pins_Arr;

void Port_Init(const Port_ConfigType *ConfigPtr) {
#if PORT_DEV_ERR_DETECT == STD_ON
  if (ConfigPtr == NULL_PTR) {
    Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_Init_SID,
                    PORT_E_INIT_FAILED);
    return;
  }
#endif

  PortInitialized = TRUE;
  Pins_Arr = (Port_PinConfigType *)ConfigPtr->Pins;
  Port_PinType Pin_Num;
  Port_PortType Port_Id;
  uint8(*ModeValues)[14];
  uint32 *BaseRegister;
  uint8 i;
  for (i = 0; i < PORT_NUM_OF_PINS; i++) {
    Pin_Num = Pins_Arr[i].Pin & 0x0F;
    Port_Id = Pins_Arr[i].Pin >> 4;

    /* JTAG Pins */
    if (Port_Id == PORT_C_ID && Pin_Num <= 3) break;

    /* NMI Pins */
    if ((Port_Id == PORT_D_ID && Pin_Num == 7) ||
        (Port_Id == PORT_F_ID && Pin_Num == 0))
      break;

    switch (Port_Id) {
      case PORT_A_ID: {
        *PORT_SYSCTL_RCGCGPIO_R |= 1;
        BaseRegister = PORT_A_BASE_REG;
        ModeValues = (uint8(*)[14])PortAPinsModeValues;
        break;
      }
      case PORT_B_ID: {
        *PORT_SYSCTL_RCGCGPIO_R |= 1 << 1;
        BaseRegister = PORT_B_BASE_REG;
        ModeValues = (uint8(*)[14])PortBPinsModeValues;
        break;
      }
      case PORT_C_ID: {
        *PORT_SYSCTL_RCGCGPIO_R |= 1 << 2;
        BaseRegister = PORT_C_BASE_REG;
        ModeValues = (uint8(*)[14])PortCPinsModeValues;
        break;
      }
      case PORT_D_ID: {
        *PORT_SYSCTL_RCGCGPIO_R |= 1 << 3;
        BaseRegister = PORT_D_BASE_REG;
        ModeValues = (uint8(*)[14])PortDPinsModeValues;
        break;
      }
      case PORT_E_ID: {
        *PORT_SYSCTL_RCGCGPIO_R |= 1 << 4;
        BaseRegister = PORT_E_BASE_REG;
        ModeValues = (uint8(*)[14])PortEPinsModeValues;
        break;
      }
      case PORT_F_ID: {
        *PORT_SYSCTL_RCGCGPIO_R |= 1 << 5;
        BaseRegister = PORT_F_BASE_REG;
        ModeValues = (uint8(*)[14])PortFPinsModeValues;
        break;
      }
    }

    if (Pins_Arr[i].PinDir == PORT_PIN_IN) {
      *(BaseRegister + PORT_DIR_OFFSET) &= ~(1 << Pin_Num);
    } else {
      *(BaseRegister + PORT_DIR_OFFSET) |= (1 << Pin_Num);
    }

    {
      Port_PinModeType PinInitialMode = Pins_Arr[i].PinInitialMode;
      if (PinInitialMode == PORT_PIN_MODE_DIO ||
          ModeValues[Pin_Num][PinInitialMode] == 0) {
        *(BaseRegister + PORT_AFSEL_OFFSET) &= ~(1 << Pin_Num);
      } else {
        *(BaseRegister + PORT_AFSEL_OFFSET) |= (1 << Pin_Num);
        *(BaseRegister + PORT_PCTL_OFFSET) =
            ModeValues[Pin_Num][PinInitialMode];
      }
    }

    /* Pin Pad Drive */
    switch (Pins_Arr[i].PinPadDrive) {
      case PORT_PIN_PAD_DRIVE_2MA: {
        *(BaseRegister + PORT_DR2R_OFFSET) |= 1 << Pin_Num;
        break;
      }
      case PORT_PIN_PAD_DRIVE_4MA: {
        *(BaseRegister + PORT_DR4R_OFFSET) |= 1 << Pin_Num;
        break;
      }
      case PORT_PIN_PAD_DRIVE_8MA: {
        *(BaseRegister + PORT_DR8R_OFFSET) |= 1 << Pin_Num;
        break;
      }
    }

    /* Drive Mode */
    switch (Pins_Arr[i].PinDrive) {
      case PORT_PIN_DRIVE_PUSH_PULL: {
        if (Pins_Arr[i].PinIntPullupActive == TRUE) {
          *(BaseRegister + PORT_PUR_OFFSET) |= 1 << (Pin_Num);
        } else {
          *(BaseRegister + PORT_PDR_OFFSET) |= 1 << (Pin_Num);
        }
        break;
      }
      case PORT_PIN_DRIVE_OPEN_DRAIN: {
        *(BaseRegister + PORT_ODR_OFFSET) |= 1 << (Pin_Num);
        break;
      }
    }

    /* Analog or Digital */
    {
      Port_PinModeType PinInitialMode = Pins_Arr[i].PinInitialMode;
      if (PinInitialMode == PORT_PIN_MODE_ADC ||
          PinInitialMode == PORT_PIN_MODE_ANALOG_COMP ||
          PinInitialMode == PORT_PIN_MODE_USB) {
        *(BaseRegister + PORT_DEN_OFFSET) &= ~(1 << Pin_Num);
        *(BaseRegister + PORT_AMSEL_OFFSET) |= (1 << Pin_Num);
      } else {
        *(BaseRegister + PORT_AMSEL_OFFSET) &= ~(1 << Pin_Num);
        *(BaseRegister + PORT_DEN_OFFSET) |= (1 << Pin_Num);
      }
    }

    *(BaseRegister + PORT_DATA_OFFSET) |= Pins_Arr[i].PinLevel << Pin_Num;
  }
}

void Port_RefreshPortDirection(void) {
  if (PortInitialized == FALSE) return;
  /* Refresh the Direction of Unchangeable pins */
  uint8 i;
  Port_PinType Pin_Num;
  Port_PortType Port_Id;
  uint8 *PortPinsDirChangeability;
  uint32 *BaseRegister;
  for (i = 0; i < PORT_NUM_OF_PINS; i++) {
    Pin_Num = Pins_Arr[i].Pin & 0x0F;
    Port_Id = Pins_Arr[i].Pin >> 4;
    switch (Port_Id) {
      case PORT_A_ID: {
        BaseRegister = PORT_A_BASE_REG;
        PortPinsDirChangeability = (uint8 *)PortAPinsDirChangeability;
        break;
      }
      case PORT_B_ID: {
        BaseRegister = PORT_B_BASE_REG;
        PortPinsDirChangeability = (uint8 *)PortBPinsDirChangeability;
        break;
      }
      case PORT_C_ID: {
        BaseRegister = PORT_C_BASE_REG;
        PortPinsDirChangeability = (uint8 *)PortCPinsDirChangeability;
        break;
      }
      case PORT_D_ID: {
        BaseRegister = PORT_D_BASE_REG;
        PortPinsDirChangeability = (uint8 *)PortDPinsDirChangeability;
        break;
      }
      case PORT_E_ID: {
        BaseRegister = PORT_E_BASE_REG;
        PortPinsDirChangeability = (uint8 *)PortEPinsDirChangeability;
        break;
      }
      case PORT_F_ID: {
        BaseRegister = PORT_F_BASE_REG;
        PortPinsDirChangeability = (uint8 *)PortFPinsDirChangeability;
        break;
      }
    }

    /* If Pin Mode is changeable don't refresh */
    if (PortPinsDirChangeability[Pin_Num] == TRUE) break;

    if (Pins_Arr[i].PinDir == PORT_PIN_IN) {
      *(BaseRegister + PORT_DIR_OFFSET) &= ~(1 << Pin_Num);
    } else {
      *(BaseRegister + PORT_DIR_OFFSET) |= (1 << Pin_Num);
    }
  }
}

#if PORT_SET_PIN_DIRECTION_API == TRUE
void Port_SetPinDirection(Port_PinType Pin, Port_PinDirectionType Direction) {
  if (PortInitialized == FALSE) return;
  Port_PinType Pin_Num = Pin & 0x0F;
  Port_PortType Port_Id = Pin >> 4;
  uint8 *PortPinsDirChangeability;
  uint32 *BaseRegister;
  switch (Port_Id) {
    case PORT_A_ID: {
      BaseRegister = PORT_A_BASE_REG;
      PortPinsDirChangeability = (uint8 *)PortAPinsDirChangeability;
      break;
    }
    case PORT_B_ID: {
      BaseRegister = PORT_B_BASE_REG;
      PortPinsDirChangeability = (uint8 *)PortBPinsDirChangeability;
      break;
    }
    case PORT_C_ID: {
      BaseRegister = PORT_C_BASE_REG;
      PortPinsDirChangeability = (uint8 *)PortCPinsDirChangeability;
      break;
    }
    case PORT_D_ID: {
      BaseRegister = PORT_D_BASE_REG;
      PortPinsDirChangeability = (uint8 *)PortDPinsDirChangeability;
      break;
    }
    case PORT_E_ID: {
      BaseRegister = PORT_E_BASE_REG;
      PortPinsDirChangeability = (uint8 *)PortEPinsDirChangeability;
      break;
    }
    case PORT_F_ID: {
      BaseRegister = PORT_F_BASE_REG;
      PortPinsDirChangeability = (uint8 *)PortFPinsDirChangeability;
      break;
    }
  }

  /* If Pin Mode is changeable don't refresh */
  if (PortPinsDirChangeability[Pin] == FALSE) {
    // ERROR
    return;
  }

  if (Direction == PORT_PIN_IN) {
    *(BaseRegister + PORT_DIR_OFFSET) &= ~(1 << Pin_Num);
  } else if (Direction == PORT_PIN_OUT) {
    *(BaseRegister + PORT_DIR_OFFSET) |= (1 << Pin_Num);
  } else {
    // ERROR
  }
}
#endif

#if PORT_SET_PIN_MODE_API == TRUE
void Port_SetPinMode(Port_PinType Pin, Port_PinModeType Mode) {
  if (PortInitialized == FALSE) return;
  Port_PinType Pin_Num = Pin & 0x0F;
  Port_PortType Port_Id = Pin >> 4;
  uint8(*ModeValues)[14];
  uint8 *PortPinsModeChangeability;
  uint32 *BaseRegister;
  switch (Port_Id) {
    case PORT_A_ID: {
      BaseRegister = PORT_A_BASE_REG;
      ModeValues = (uint8(*)[14])PortAPinsModeValues;
      PortPinsModeChangeability = PortAPinsModeChangeability;
      break;
    }
    case PORT_B_ID: {
      BaseRegister = PORT_A_BASE_REG;
      ModeValues = (uint8(*)[14])PortAPinsModeValues;
      PortPinsModeChangeability = PortAPinsModeChangeability;
      break;
    }
    case PORT_C_ID: {
      BaseRegister = PORT_A_BASE_REG;
      ModeValues = (uint8(*)[14])PortAPinsModeValues;
      PortPinsModeChangeability = PortAPinsModeChangeability;
      break;
    }
    case PORT_D_ID: {
      BaseRegister = PORT_A_BASE_REG;
      ModeValues = (uint8(*)[14])PortAPinsModeValues;
      PortPinsModeChangeability = PortAPinsModeChangeability;
      break;
    }
    case PORT_E_ID: {
      BaseRegister = PORT_A_BASE_REG;
      ModeValues = (uint8(*)[14])PortAPinsModeValues;
      PortPinsModeChangeability = PortAPinsModeChangeability;
      break;
    }
    case PORT_F_ID: {
      BaseRegister = PORT_A_BASE_REG;
      ModeValues = (uint8(*)[14])PortAPinsModeValues;
      PortPinsModeChangeability = PortAPinsModeChangeability;
      break;
    }
  }

  if (PortPinsModeChangeability[Pin_Num] == FALSE) {
    // ERROR
    return;
  }

  /**
   * Improvement: It should check if the mode is valid for the pin,
   * Different Modes require different conditions like I2C requires Open Drain
   */
  if (Mode == PORT_PIN_MODE_DIO || ModeValues[Pin_Num][Mode] == 0) {
    *(BaseRegister + PORT_AFSEL_OFFSET) &= ~(1 << Pin_Num);
  } else {
    *(BaseRegister + PORT_AFSEL_OFFSET) |= (1 << Pin_Num);
    *(BaseRegister + PORT_PCTL_OFFSET) = ModeValues[Pin_Num][Mode];
  }
}
#endif

#if PORT_VERSION_INFO_API == TRUE
void Port_GetVersionInfo(Std_VersionInfoType *versioninfo) {
  if (versioninfo == NULL_PTR) {
    /* Report to DET  */
    Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, Port_GetVersionInfo_SID,
                    PORT_E_PARAM_POINTER);
  } else {
    versioninfo->vendorId = (uint16)PORT_VENDOR_ID;
    versioninfo->moduleId = (uint16)PORT_MODULE_ID;
    versioninfo->sw_major_version = (uint8)PORT_SW_MAJOR_VERSION;
    versioninfo->sw_minor_version = (uint8)PORT_SW_MINOR_VERSION;
    versioninfo->sw_patch_version = (uint8)PORT_SW_PATCH_VERSION;
  }
}
#endif
