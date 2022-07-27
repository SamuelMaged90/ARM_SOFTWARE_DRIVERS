#ifndef     GPIO_INTERFACE_H
#define     GPIO_INTERFACE_H

#define PORTA		0
#define PORTB		1
#define PORTC		2

#define INPUT			0
#define OUTPUT		    1
#define ALT_FUN         2 // Alternate function mode
#define ANALOG          3

#define PP              4 // PUSH - PULL
#define OD              5 // OPEN DRAIN

#define LS              6 // LOW SPEED
#define MS              7 // MEDIUM SPEED
#define HS              8 //HIGH SPEED
#define VHS             9 //VERY HIGH SPEED

#define NO             10 // NO PULL UP/DOWN
#define PU             11 // PULL UP
#define PD             12 // PULL DOWN

#define HIGH           13
#define LOW            14

#define PIN0			0
#define PIN1			1
#define PIN2			2
#define PIN3			3
#define PIN4			4
#define PIN5			5
#define PIN6			6
#define PIN7			7
#define PIN8			8
#define PIN9			9
#define PIN10			10
#define PIN11			11
#define PIN12			12
#define PIN13			13
#define PIN14			14
#define PIN15			15
#define PIN16			16
#define PIN17			17
#define PIN18			18
#define PIN19			19
#define PIN20			20
#define PIN21			21
#define PIN22			22
#define PIN23			23
#define PIN24			24
#define PIN25			25
#define PIN26			26
#define PIN27			27
#define PIN28			28
#define PIN29			29
#define PIN30			30
#define PIN31			31



void  GPIO_voidSetPinDirection(u8 PortName, u8 PinNumber, u8 PinState);
void GPIO_voidOutputTypeRegister(u8 PortName, u8 PinNumber, u8 PinState);
void  GPIO_voidOutputSpeed(u8 PortName, u8 PinNumber, u8 PinState);
void GPIO_voidPullUpPullDown(u8 PortName, u8 PinNumber, u8 PinState);
u8 GPIO_u8GetPinValue(u8 PortName, u8 PinNumber);
void GPIO_voidSetPinValue(u8 PortName , u8 PinNumber,u8 PinState);
void  GPIO_voidSetPortDirection(u8 PortName,u8 PortState);
void  GPIO_voidSetPortValue(u8 PortName,u8 PortState);

#endif