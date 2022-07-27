#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_Interface.h"
#include "RCC_Private.h"

void RCC_voidSystemClockInit(u8 mode)
{
	switch(mode)
	{
	            case  HSI : {
		                      SET_BIT(RCC_CR,RCC_CR_HSION);    //Internal high-speed clock enable
							  CLR_BIT(RCC_CFGR,RCC_CFGR_SW0);  // System clock switch bit 1  
							  CLR_BIT(RCC_CFGR,RCC_CFGR_SW1);  //System clock switch bit 2
		                    } break;
		        case  HSE : {
		                      SET_BIT(RCC_CR,RCC_CR_HSEON);    // HSE clock enable
							  SET_BIT(RCC_CR,RCC_CR_HSEBYP);   // HSE clock bypass
							  SET_BIT(RCC_CFGR,RCC_CFGR_SW0);  // System clock switch bit 1  
							  CLR_BIT(RCC_CFGR,RCC_CFGR_SW1);  //System clock switch bit 2
	                        } break;
                case PLL  : {	
				            SET_BIT(RCC_CR,RCC_CR_PLLON);      //Main PLL (PLL) enable
                            CLR_BIT(RCC_CFGR,RCC_CFGR_SW0);    // System clock switch bit 1  
							SET_BIT(RCC_CFGR,RCC_CFGR_SW1);    //System clock switch bit 2							
	                        }break;
	}
}
void RCC_voideEnablePreipheralClock(u8 Bus,u8 Per)
{
	/*		Range Check			*/
	if(Per < 32)
	{
		switch(Bus)
		{
			case	RCC_AHB1 : SET_BIT(RCC_AHB1ENR,Per);break;
			case	RCC_AHB2 : SET_BIT(RCC_AHB2ENR,Per);break;
			case	RCC_APB1 : SET_BIT(RCC_APB1ENR,Per);break;
			case	RCC_APB2 : SET_BIT(RCC_APB2ENR,Per);break;
		}
	}
	else
	{			/*		OUT OF RANGE		*/		}
}
void	RCC_voidDisablePeripheralClock(u8 Bus,u8 Per)
{
	/*		Range Check			*/
	if(Per < 32)
	{
		switch(Bus)
		{
			case	RCC_AHB1 : CLR_BIT(RCC_AHB1ENR,Per);break;
			case	RCC_AHB2 : CLR_BIT(RCC_AHB2ENR,Per);break;
			case	RCC_APB1 : CLR_BIT(RCC_APB1ENR,Per);break;
			case	RCC_APB2 : CLR_BIT(RCC_APB2ENR,Per);break;
		}
	}
	else
	{			/*		OUT OF RANGE		*/		}	
}


