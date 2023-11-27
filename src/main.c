#include <stdint.h>
#include "Port.h"

extern const Port_ConfigType PortConfig;

void main(void){

    Port_Init(&PortConfig);

    while(1) {

    }
}
