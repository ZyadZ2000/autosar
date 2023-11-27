#include "Port_Cfg.h"

const uint8 PortAPinsModeChangeability[8] = {
PORT_A_PIN_0_MODE_CHANGEABLE,
                                              PORT_A_PIN_1_MODE_CHANGEABLE,
                                              PORT_A_PIN_2_MODE_CHANGEABLE,
                                              PORT_A_PIN_3_MODE_CHANGEABLE,
                                              PORT_A_PIN_4_MODE_CHANGEABLE,
                                              PORT_A_PIN_5_MODE_CHANGEABLE,
                                              PORT_A_PIN_6_MODE_CHANGEABLE,
                                              PORT_A_PIN_7_MODE_CHANGEABLE };

const uint8 PortBPinsModeChangeability[8] = {
PORT_B_PIN_0_MODE_CHANGEABLE,
                                              PORT_B_PIN_1_MODE_CHANGEABLE,
                                              PORT_B_PIN_2_MODE_CHANGEABLE,
                                              PORT_B_PIN_3_MODE_CHANGEABLE,
                                              PORT_B_PIN_4_MODE_CHANGEABLE,
                                              PORT_B_PIN_5_MODE_CHANGEABLE,
                                              PORT_B_PIN_6_MODE_CHANGEABLE,
                                              PORT_B_PIN_7_MODE_CHANGEABLE };

const uint8 PortCPinsModeChangeability[8] = {
PORT_C_PIN_0_MODE_CHANGEABLE,
                                              PORT_C_PIN_1_MODE_CHANGEABLE,
                                              PORT_C_PIN_2_MODE_CHANGEABLE,
                                              PORT_C_PIN_3_MODE_CHANGEABLE,
                                              PORT_C_PIN_4_MODE_CHANGEABLE,
                                              PORT_C_PIN_5_MODE_CHANGEABLE,
                                              PORT_C_PIN_6_MODE_CHANGEABLE,
                                              PORT_C_PIN_7_MODE_CHANGEABLE };

const uint8 PortDPinsModeChangeability[8] = {
PORT_D_PIN_0_MODE_CHANGEABLE,
                                              PORT_D_PIN_1_MODE_CHANGEABLE,
                                              PORT_D_PIN_2_MODE_CHANGEABLE,
                                              PORT_D_PIN_3_MODE_CHANGEABLE,
                                              PORT_D_PIN_4_MODE_CHANGEABLE,
                                              PORT_D_PIN_5_MODE_CHANGEABLE,
                                              PORT_D_PIN_6_MODE_CHANGEABLE,
                                              PORT_D_PIN_7_MODE_CHANGEABLE };

const uint8 PortEPinsModeChangeability[6] = {
PORT_E_PIN_0_MODE_CHANGEABLE,
                                              PORT_E_PIN_1_MODE_CHANGEABLE,
                                              PORT_E_PIN_2_MODE_CHANGEABLE,
                                              PORT_E_PIN_3_MODE_CHANGEABLE,
                                              PORT_E_PIN_4_MODE_CHANGEABLE,
                                              PORT_E_PIN_5_MODE_CHANGEABLE };
const uint8 PortFPinsModeChangeability[5] = {
PORT_F_PIN_0_MODE_CHANGEABLE,
                                              PORT_F_PIN_1_MODE_CHANGEABLE,
                                              PORT_F_PIN_2_MODE_CHANGEABLE,
                                              PORT_F_PIN_3_MODE_CHANGEABLE,
                                              PORT_F_PIN_4_MODE_CHANGEABLE };

const uint8 PortAPinsDirChangeability[8] = {
PORT_A_PIN_0_DIRECTION_CHANGEABLE,
                                             PORT_A_PIN_1_DIRECTION_CHANGEABLE,
                                             PORT_A_PIN_2_DIRECTION_CHANGEABLE,
                                             PORT_A_PIN_3_DIRECTION_CHANGEABLE,
                                             PORT_A_PIN_4_DIRECTION_CHANGEABLE,
                                             PORT_A_PIN_5_DIRECTION_CHANGEABLE,
                                             PORT_A_PIN_6_DIRECTION_CHANGEABLE,
                                             PORT_A_PIN_7_DIRECTION_CHANGEABLE };

const uint8 PortBPinsDirChangeability[8] = {
PORT_B_PIN_0_DIRECTION_CHANGEABLE,
                                             PORT_B_PIN_1_DIRECTION_CHANGEABLE,
                                             PORT_B_PIN_2_DIRECTION_CHANGEABLE,
                                             PORT_B_PIN_3_DIRECTION_CHANGEABLE,
                                             PORT_B_PIN_4_DIRECTION_CHANGEABLE,
                                             PORT_B_PIN_5_DIRECTION_CHANGEABLE,
                                             PORT_B_PIN_6_DIRECTION_CHANGEABLE,
                                             PORT_B_PIN_7_DIRECTION_CHANGEABLE };

const uint8 PortCPinsDirChangeability[8] = {
PORT_C_PIN_0_DIRECTION_CHANGEABLE,
                                             PORT_C_PIN_1_DIRECTION_CHANGEABLE,
                                             PORT_C_PIN_2_DIRECTION_CHANGEABLE,
                                             PORT_C_PIN_3_DIRECTION_CHANGEABLE,
                                             PORT_C_PIN_4_DIRECTION_CHANGEABLE,
                                             PORT_C_PIN_5_DIRECTION_CHANGEABLE,
                                             PORT_C_PIN_6_DIRECTION_CHANGEABLE,
                                             PORT_C_PIN_7_DIRECTION_CHANGEABLE };

const uint8 PortDPinsDirChangeability[8] = {
PORT_D_PIN_0_DIRECTION_CHANGEABLE,
                                             PORT_D_PIN_1_DIRECTION_CHANGEABLE,
                                             PORT_D_PIN_2_DIRECTION_CHANGEABLE,
                                             PORT_D_PIN_3_DIRECTION_CHANGEABLE,
                                             PORT_D_PIN_4_DIRECTION_CHANGEABLE,
                                             PORT_D_PIN_5_DIRECTION_CHANGEABLE,
                                             PORT_D_PIN_6_DIRECTION_CHANGEABLE,
                                             PORT_D_PIN_7_DIRECTION_CHANGEABLE };

const uint8 PortEPinsDirChangeability[6] = {
PORT_E_PIN_0_DIRECTION_CHANGEABLE,
                                             PORT_E_PIN_1_DIRECTION_CHANGEABLE,
                                             PORT_E_PIN_2_DIRECTION_CHANGEABLE,
                                             PORT_E_PIN_3_DIRECTION_CHANGEABLE,
                                             PORT_E_PIN_4_DIRECTION_CHANGEABLE,
                                             PORT_E_PIN_5_DIRECTION_CHANGEABLE };

const uint8 PortFPinsDirChangeability[5] = {
PORT_F_PIN_0_DIRECTION_CHANGEABLE,
                                             PORT_F_PIN_1_DIRECTION_CHANGEABLE,
                                             PORT_F_PIN_2_DIRECTION_CHANGEABLE,
                                             PORT_F_PIN_3_DIRECTION_CHANGEABLE,
                                             PORT_F_PIN_4_DIRECTION_CHANGEABLE };

const uint8 PortAPinsModeValues[8][14] = { { 8, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
                                             0, 0 },
                                           { 8, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
                                             0, 0 },
                                           { 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0,
                                             0, 0 },
                                           { 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0,
                                             0, 0 },
                                           { 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0,
                                             0, 0 },
                                           { 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0,
                                             0, 0 },
                                           { 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 3, 0,
                                             0, 0 },
                                           { 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 3, 0,
                                             0, 0 } };

const uint8 PortBPinsModeValues[8][14] = { { 0, 0, 7, 0, 0, 7, 0, 1, 0, 0, 0, 0,
                                             0, 0 },
                                           { 0, 0, 7, 0, 0, 7, 0, 1, 0, 0, 0, 0,
                                             0, 0 },
                                           { 0, 0, 7, 0, 0, 7, 0, 0, 0, 0, 3, 0,
                                             0, 0 },
                                           { 0, 0, 7, 0, 0, 7, 0, 0, 0, 0, 3, 0,
                                             0, 0 },
                                           { 8, 0, 7, 0, 2, 4, 0, 0, 0, 0, 0, 0,
                                             0, 0 },
                                           { 8, 0, 7, 0, 2, 4, 0, 0, 0, 0, 0, 0,
                                             0, 0 },
                                           { 0, 0, 7, 0, 2, 4, 0, 0, 0, 0, 0, 0,
                                             0, 0 },
                                           { 0, 0, 7, 0, 2, 4, 0, 0, 0, 0, 0, 0,
                                             0, 0 } };

const uint8 PortCPinsModeValues[8][14] = { { 0, 0, 7, 0, 0, 7, 0, 0, 0, 0, 0, 0,
                                             0, 1 },
                                           { 0, 0, 7, 0, 0, 7, 0, 0, 0, 0, 0, 0,
                                             0, 1 },
                                           { 0, 0, 7, 0, 0, 7, 0, 0, 0, 0, 0, 0,
                                             0, 1 },
                                           { 0, 0, 7, 0, 0, 7, 0, 0, 0, 0, 0, 0,
                                             0, 1 },
                                           { 0, 0, 7, 0, 0, 4, 6, 1, 8, 0, 0, 0,
                                             0, 0 },
                                           { 0, 0, 7, 0, 0, 4, 6, 1, 8, 0, 0, 0,
                                             0, 0 },
                                           { 0, 0, 7, 0, 0, 0, 6, 1, 0, 0, 0, 0,
                                             0, 0 },
                                           { 0, 0, 7, 0, 0, 0, 0, 1, 0, 0, 0, 0,
                                             0, 0 } };

const uint8 PortDPinsModeValues[8][14] = { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                             0, 0 },
                                           { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                             0, 0 },
                                           { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                             0, 0 },
                                           { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                             0, 0 },
                                           { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                             0, 0 },
                                           { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                             0, 0 },
                                           { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                             0, 0 },
                                           { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                             0, 0 } };

const uint8 PortEPinsModeValues[6][14] = { 0 };

const uint8 PortFPinsModeValues[5][14] = { 0 };
