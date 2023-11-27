#include "Port.h"

const Port_ConfigType PortConfig = {
    /******************************************** PORT A
     ****************************************/
    PORT_A_PIN_0, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_A_PIN_1, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_A_PIN_2, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_A_PIN_3, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_A_PIN_4, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_A_PIN_5, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_A_PIN_6, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_A_PIN_7, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    /******************************************** PORT B
     ****************************************/
    PORT_B_PIN_0, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_B_PIN_1, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_B_PIN_2, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_B_PIN_3, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_B_PIN_4, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_B_PIN_5, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_B_PIN_6, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_B_PIN_7, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    /******************************************** PORT C
     ****************************************/
    PORT_C_PIN_0, PORT_PIN_IN, PORT_PIN_MODE_JTAG, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, TRUE, FALSE,
    PORT_C_PIN_1, PORT_PIN_IN, PORT_PIN_MODE_JTAG, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, TRUE, FALSE,
    PORT_C_PIN_2, PORT_PIN_IN, PORT_PIN_MODE_JTAG, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, TRUE, FALSE,
    PORT_C_PIN_3, PORT_PIN_IN, PORT_PIN_MODE_JTAG, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, TRUE, FALSE,
    PORT_C_PIN_4, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_C_PIN_5, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_C_PIN_6, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_C_PIN_7, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    /******************************************** PORT D
     ****************************************/
    PORT_D_PIN_0, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_D_PIN_1, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_D_PIN_2, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_D_PIN_3, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_D_PIN_4, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_D_PIN_5, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_D_PIN_6, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_D_PIN_7, PORT_PIN_IN, PORT_PIN_MODE_NMI, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    /******************************************** PORT E
     ****************************************/
    PORT_E_PIN_0, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_E_PIN_1, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_E_PIN_2, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_E_PIN_3, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_E_PIN_4, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_E_PIN_5, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    /******************************************** PORT F
     ****************************************/
    PORT_F_PIN_0, PORT_PIN_IN, PORT_PIN_MODE_NMI, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_F_PIN_1, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_F_PIN_2, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_F_PIN_3, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE,
    PORT_F_PIN_4, PORT_PIN_IN, PORT_PIN_MODE_DIO, PORT_PIN_LEVEL_LOW,
    PORT_PIN_PAD_DRIVE_2MA, PORT_PIN_DRIVE_PUSH_PULL, FALSE, FALSE };