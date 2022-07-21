#ifndef   RCC_INTERFACE_h
#define   RCC_INTERFACE_h

#define  RCC_AHB1      0
#define  RCC_AHB2      1
#define  RCC_APB1      2
#define  RCC_APB2      3

#define INTERNAL_MODE  4
#define EXTERNAL_MODE  5
#define PLL_MODE       6

void RCC_voidSystemClockInit(void);
void RCC_voideEnablePreipheralClock(u8 bus, u8 peripheral);
void RCC_voidDisablePeripheralClock(u8 bus, u8 peripheral);

#endif