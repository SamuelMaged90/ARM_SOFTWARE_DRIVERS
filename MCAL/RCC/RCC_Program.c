#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "RCC_interface.h"
#include "RCC_private.h"

void RCC_voidSysClkInit(u8 mode)
{
	switch(mode)
	{
		case INTERNAL_MODE: SET_BIT(RCC_CR,RCC_CR_HSION); //Internal high-speed clock enable
		case EXTERNAL_MODE:{
		                    SET_BIT(RCC_CR,RCC_CR_HSEON);  // HSE clock enable
							SET_BIT(RCC_CR,RCC_CR_HSEBYP); // HSE clock bypass
							SET_BIT(RCC_CR,RCC_CR_CSSON);  // Clock security system enable
	                        } 
        case PLL_MODE :	SET_BIT(RCC_CR,RCC_CR_PLLON);      //Main PLL (PLL) enable					
	}
}
void RCC_voidEnablePerClk(u8 Bus,u8 Per)
{
	/*		Range Check			*/
	if(Per < 32)
	{
		switch(Bus)
		{
			case	RCC_AHB1 : SET_BIT(RCC_AHB1ENR,Per);
			case	RCC_AHB2 : SET_BIT(RCC_AHB2ENR,Per);
			case	RCC_APB1 : SET_BIT(RCC_APB1ENR,Per);
			case	RCC_APB2 : SET_BIT(RCC_APB2ENR,Per);
		}
	}
	else
	{			/*		OUT OF RANGE		*/		}
}
void	RCC_voidDisablePerClk(u8 Bus,u8 Per)
{
	/*		Range Check			*/
	if(Per < 32)
	{
		switch(Bus)
		{
			case	RCC_AHB1 : CLR_BIT(RCC_AHB1ENR,Per);
			case	RCC_AHB2 : CLR_BIT(RCC_AHB2ENR,Per);
			case	RCC_APB1 : CLR_BIT(RCC_APB1ENR,Per);
			case	RCC_APB2 : CLR_BIT(RCC_APB2ENR,Per);
		}
	}
	else
	{			/*		OUT OF RANGE		*/		}	
}


