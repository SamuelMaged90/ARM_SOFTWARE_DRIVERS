#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "GPIO_private.h"

void  GPIO_voidSetPinDirection(u8 PortName, u8 PinNumber, u8 PinState)
{
	if( (PinNumber >= PIN0) && (PinNumber <= PIN16) )
	{
		switch(PortName)
		{
			case PORTA: 
				switch(PinState)
				{
					case INPUT: {
						          switch (PinNumber)
								  {
									  case PIN0  : {CLR_BIT(GPIOA_MODER,PIN0) ; CLR_BIT(GPIOA_MODER,PIN1);}   break;
									  case PIN1  : {CLR_BIT(GPIOA_MODER,PIN2) ; CLR_BIT(GPIOA_MODER,PIN3);}   break;
									  case PIN2  : {CLR_BIT(GPIOA_MODER,PIN4) ; CLR_BIT(GPIOA_MODER,PIN5);}   break;  
									  case PIN3  : {CLR_BIT(GPIOA_MODER,PIN6) ; CLR_BIT(GPIOA_MODER,PIN7);}   break;
									  case PIN4  : {CLR_BIT(GPIOA_MODER,PIN8) ; CLR_BIT(GPIOA_MODER,PIN9);}   break;
									  case PIN5  : {CLR_BIT(GPIOA_MODER,PIN10); CLR_BIT(GPIOA_MODER,PIN11);}  break;
									  case PIN6  : {CLR_BIT(GPIOA_MODER,PIN12); CLR_BIT(GPIOA_MODER,PIN13);}  break;
									  case PIN7  : {CLR_BIT(GPIOA_MODER,PIN14); CLR_BIT(GPIOA_MODER,PIN15);}  break;
									  case PIN8  : {CLR_BIT(GPIOA_MODER,PIN16); CLR_BIT(GPIOA_MODER,PIN17);}  break;
									  case PIN9  : {CLR_BIT(GPIOA_MODER,PIN18); CLR_BIT(GPIOA_MODER,PIN19);}  break;
									  case PIN10 : {CLR_BIT(GPIOA_MODER,PIN20); CLR_BIT(GPIOA_MODER,PIN21);}  break;
									  case PIN11 : {CLR_BIT(GPIOA_MODER,PIN22); CLR_BIT(GPIOA_MODER,PIN23);}  break;
									  case PIN12 : {CLR_BIT(GPIOA_MODER,PIN24); CLR_BIT(GPIOA_MODER,PIN25);}  break;
									  case PIN13 : {CLR_BIT(GPIOA_MODER,PIN26); CLR_BIT(GPIOA_MODER,PIN27);}  break;
									  case PIN14 : {CLR_BIT(GPIOA_MODER,PIN28); CLR_BIT(GPIOA_MODER,PIN29);}  break;
									  case PIN15 : {CLR_BIT(GPIOA_MODER,PIN30); CLR_BIT(GPIOA_MODER,PIN31);}  break;
								  }
					            }   break;
					case OUTPUT: {
					              switch (PinNumber)
								  {
									  case PIN0  : {SET_BIT(GPIOA_MODER,PIN0) ; CLR_BIT(GPIOA_MODER,PIN1);}   break;
									  case PIN1  : {SET_BIT(GPIOA_MODER,PIN2) ; CLR_BIT(GPIOA_MODER,PIN3);}   break;
									  case PIN2  : {SET_BIT(GPIOA_MODER,PIN4) ; CLR_BIT(GPIOA_MODER,PIN5);}   break;
									  case PIN3  : {SET_BIT(GPIOA_MODER,PIN6) ; CLR_BIT(GPIOA_MODER,PIN7);}   break;
									  case PIN4  : {SET_BIT(GPIOA_MODER,PIN8) ; CLR_BIT(GPIOA_MODER,PIN9);}   break;
									  case PIN5  : {SET_BIT(GPIOA_MODER,PIN10); CLR_BIT(GPIOA_MODER,PIN11);}  break;
									  case PIN6  : {SET_BIT(GPIOA_MODER,PIN12); CLR_BIT(GPIOA_MODER,PIN13);}  break;
									  case PIN7  : {SET_BIT(GPIOA_MODER,PIN14); CLR_BIT(GPIOA_MODER,PIN15);}  break;
									  case PIN8  : {SET_BIT(GPIOA_MODER,PIN16); CLR_BIT(GPIOA_MODER,PIN17);}  break;
									  case PIN9  : {SET_BIT(GPIOA_MODER,PIN18); CLR_BIT(GPIOA_MODER,PIN19);}  break;
									  case PIN10 : {SET_BIT(GPIOA_MODER,PIN20); CLR_BIT(GPIOA_MODER,PIN21);}  break;
									  case PIN11 : {SET_BIT(GPIOA_MODER,PIN22); CLR_BIT(GPIOA_MODER,PIN23);}  break;
									  case PIN12 : {SET_BIT(GPIOA_MODER,PIN24); CLR_BIT(GPIOA_MODER,PIN25);}  break;
									  case PIN13 : {SET_BIT(GPIOA_MODER,PIN26); CLR_BIT(GPIOA_MODER,PIN27);}  break;
									  case PIN14 : {SET_BIT(GPIOA_MODER,PIN28); CLR_BIT(GPIOA_MODER,PIN29);}  break;
									  case PIN15 : {SET_BIT(GPIOA_MODER,PIN30); CLR_BIT(GPIOA_MODER,PIN31);}  break;
								  }
					             }  break;
					case ALT_FUN: {
					              switch (PinNumber)
								  {
									  case PIN0  : {CLR_BIT(GPIOA_MODER,PIN0) ; SET_BIT(GPIOA_MODER,PIN1);}   break;
									  case PIN1  : {CLR_BIT(GPIOA_MODER,PIN2) ; SET_BIT(GPIOA_MODER,PIN3);}   break;
									  case PIN2  : {CLR_BIT(GPIOA_MODER,PIN4) ; SET_BIT(GPIOA_MODER,PIN5);}   break;
									  case PIN3  : {CLR_BIT(GPIOA_MODER,PIN6) ; SET_BIT(GPIOA_MODER,PIN7);}   break;
									  case PIN4  : {CLR_BIT(GPIOA_MODER,PIN8) ; SET_BIT(GPIOA_MODER,PIN9);}   break;
									  case PIN5  : {CLR_BIT(GPIOA_MODER,PIN10); SET_BIT(GPIOA_MODER,PIN11);}  break;
									  case PIN6  : {CLR_BIT(GPIOA_MODER,PIN12); SET_BIT(GPIOA_MODER,PIN13);}  break;
									  case PIN7  : {CLR_BIT(GPIOA_MODER,PIN14); SET_BIT(GPIOA_MODER,PIN15);}  break;
									  case PIN8  : {CLR_BIT(GPIOA_MODER,PIN16); SET_BIT(GPIOA_MODER,PIN17);}  break;
									  case PIN9  : {CLR_BIT(GPIOA_MODER,PIN18); SET_BIT(GPIOA_MODER,PIN19);}  break;
									  case PIN10 : {CLR_BIT(GPIOA_MODER,PIN20); SET_BIT(GPIOA_MODER,PIN21);}  break;
									  case PIN11 : {CLR_BIT(GPIOA_MODER,PIN22); SET_BIT(GPIOA_MODER,PIN23);}  break;
									  case PIN12 : {CLR_BIT(GPIOA_MODER,PIN24); SET_BIT(GPIOA_MODER,PIN25);}  break;
									  case PIN13 : {CLR_BIT(GPIOA_MODER,PIN26); SET_BIT(GPIOA_MODER,PIN27);}  break;
									  case PIN14 : {CLR_BIT(GPIOA_MODER,PIN28); SET_BIT(GPIOA_MODER,PIN29);}  break;
									  case PIN15 : {CLR_BIT(GPIOA_MODER,PIN30); SET_BIT(GPIOA_MODER,PIN31);}  break;
								  }
					             }  break;
					case ANALOG : {
					              switch (PinNumber)
								   {
									  case PIN0  : {SET_BIT(GPIOA_MODER,PIN0) ; SET_BIT(GPIOA_MODER,PIN1);}   break;
									  case PIN1  : {SET_BIT(GPIOA_MODER,PIN2) ; SET_BIT(GPIOA_MODER,PIN3);}   break;
									  case PIN2  : {SET_BIT(GPIOA_MODER,PIN4) ; SET_BIT(GPIOA_MODER,PIN5);}   break;
									  case PIN3  : {SET_BIT(GPIOA_MODER,PIN6) ; SET_BIT(GPIOA_MODER,PIN7);}   break;
									  case PIN4  : {SET_BIT(GPIOA_MODER,PIN8) ; SET_BIT(GPIOA_MODER,PIN9);}   break;
									  case PIN5  : {SET_BIT(GPIOA_MODER,PIN10); SET_BIT(GPIOA_MODER,PIN11);}  break;
									  case PIN6  : {SET_BIT(GPIOA_MODER,PIN12); SET_BIT(GPIOA_MODER,PIN13);}  break;
									  case PIN7  : {SET_BIT(GPIOA_MODER,PIN14); SET_BIT(GPIOA_MODER,PIN15);}  break;
									  case PIN8  : {SET_BIT(GPIOA_MODER,PIN16); SET_BIT(GPIOA_MODER,PIN17);}  break;
									  case PIN9  : {SET_BIT(GPIOA_MODER,PIN18); SET_BIT(GPIOA_MODER,PIN19);}  break;
									  case PIN10 : {SET_BIT(GPIOA_MODER,PIN20); SET_BIT(GPIOA_MODER,PIN21);}  break;
									  case PIN11 : {SET_BIT(GPIOA_MODER,PIN22); SET_BIT(GPIOA_MODER,PIN23);}  break;
									  case PIN12 : {SET_BIT(GPIOA_MODER,PIN24); SET_BIT(GPIOA_MODER,PIN25);}  break;
									  case PIN13 : {SET_BIT(GPIOA_MODER,PIN26); SET_BIT(GPIOA_MODER,PIN27);}  break;
									  case PIN14 : {SET_BIT(GPIOA_MODER,PIN28); SET_BIT(GPIOA_MODER,PIN29);}  break;
									  case PIN15 : {SET_BIT(GPIOA_MODER,PIN30); SET_BIT(GPIOA_MODER,PIN31);}  break;
								   }
					              }  break;
				}break;
			
			case PORTB:
			     switch(PinState)
				{
				  case INPUT: {
					 	          switch (PinNumber)
								  {
									  case PIN0  : {CLR_BIT(GPIOB_MODER,PIN0) ; CLR_BIT(GPIOB_MODER,PIN1);}   break;
									  case PIN1  : {CLR_BIT(GPIOB_MODER,PIN2) ; CLR_BIT(GPIOB_MODER,PIN3);}   break;
									  case PIN2  : {CLR_BIT(GPIOB_MODER,PIN4) ; CLR_BIT(GPIOB_MODER,PIN5);}   break;
									  case PIN3  : {CLR_BIT(GPIOB_MODER,PIN6) ; CLR_BIT(GPIOB_MODER,PIN7);}   break;
									  case PIN4  : {CLR_BIT(GPIOB_MODER,PIN8) ; CLR_BIT(GPIOB_MODER,PIN9);}   break;
									  case PIN5  : {CLR_BIT(GPIOB_MODER,PIN10); CLR_BIT(GPIOB_MODER,PIN11);}  break;
									  case PIN6  : {CLR_BIT(GPIOB_MODER,PIN12); CLR_BIT(GPIOB_MODER,PIN13);}  break;
									  case PIN7  : {CLR_BIT(GPIOB_MODER,PIN14); CLR_BIT(GPIOB_MODER,PIN15);}  break;
									  case PIN8  : {CLR_BIT(GPIOB_MODER,PIN16); CLR_BIT(GPIOB_MODER,PIN17);}  break;
									  case PIN9  : {CLR_BIT(GPIOB_MODER,PIN18); CLR_BIT(GPIOB_MODER,PIN19);}  break;
									  case PIN10 : {CLR_BIT(GPIOB_MODER,PIN20); CLR_BIT(GPIOB_MODER,PIN21);}  break;
									  case PIN11 : {CLR_BIT(GPIOB_MODER,PIN22); CLR_BIT(GPIOB_MODER,PIN23);}  break;
									  case PIN12 : {CLR_BIT(GPIOB_MODER,PIN24); CLR_BIT(GPIOB_MODER,PIN25);}  break;
									  case PIN13 : {CLR_BIT(GPIOB_MODER,PIN26); CLR_BIT(GPIOB_MODER,PIN27);}  break;
									  case PIN14 : {CLR_BIT(GPIOB_MODER,PIN28); CLR_BIT(GPIOB_MODER,PIN29);}  break;
									  case PIN15 : {CLR_BIT(GPIOB_MODER,PIN30); CLR_BIT(GPIOB_MODER,PIN31);}  break;
								  }
					            }   break;
					case OUTPUT: {
					              switch (PinNumber)
								  {
									  case PIN0  : {SET_BIT(GPIOB_MODER,PIN0) ; CLR_BIT(GPIOB_MODER,PIN1);}   break;
									  case PIN1  : {SET_BIT(GPIOB_MODER,PIN2) ; CLR_BIT(GPIOB_MODER,PIN3);}   break;
									  case PIN2  : {SET_BIT(GPIOB_MODER,PIN4) ; CLR_BIT(GPIOB_MODER,PIN5);}   break;
									  case PIN3  : {SET_BIT(GPIOB_MODER,PIN6) ; CLR_BIT(GPIOB_MODER,PIN7);}   break;
									  case PIN4  : {SET_BIT(GPIOB_MODER,PIN8) ; CLR_BIT(GPIOB_MODER,PIN9);}   break;
									  case PIN5  : {SET_BIT(GPIOB_MODER,PIN10); CLR_BIT(GPIOB_MODER,PIN11);}  break;
									  case PIN6  : {SET_BIT(GPIOB_MODER,PIN12); CLR_BIT(GPIOB_MODER,PIN13);}  break;
									  case PIN7  : {SET_BIT(GPIOB_MODER,PIN14); CLR_BIT(GPIOB_MODER,PIN15);}  break;
									  case PIN8  : {SET_BIT(GPIOB_MODER,PIN16); CLR_BIT(GPIOB_MODER,PIN17);}  break;
									  case PIN9  : {SET_BIT(GPIOB_MODER,PIN18); CLR_BIT(GPIOB_MODER,PIN19);}  break;
									  case PIN10 : {SET_BIT(GPIOB_MODER,PIN20); CLR_BIT(GPIOB_MODER,PIN21);}  break;
									  case PIN11 : {SET_BIT(GPIOB_MODER,PIN22); CLR_BIT(GPIOB_MODER,PIN23);}  break;
									  case PIN12 : {SET_BIT(GPIOB_MODER,PIN24); CLR_BIT(GPIOB_MODER,PIN25);}  break;
									  case PIN13 : {SET_BIT(GPIOB_MODER,PIN26); CLR_BIT(GPIOB_MODER,PIN27);}  break;
									  case PIN14 : {SET_BIT(GPIOB_MODER,PIN28); CLR_BIT(GPIOB_MODER,PIN29);}  break;
									  case PIN15 : {SET_BIT(GPIOB_MODER,PIN30); CLR_BIT(GPIOB_MODER,PIN31);}  break;
								  }
					             }  break;
					case ALT_FUN: {
					              switch (PinNumber)
								  {
									  case PIN0  : {CLR_BIT(GPIOB_MODER,PIN0) ; SET_BIT(GPIOB_MODER,PIN1);}   break;
									  case PIN1  : {CLR_BIT(GPIOB_MODER,PIN2) ; SET_BIT(GPIOB_MODER,PIN3);}   break;
									  case PIN2  : {CLR_BIT(GPIOB_MODER,PIN4) ; SET_BIT(GPIOB_MODER,PIN5);}   break;
									  case PIN3  : {CLR_BIT(GPIOB_MODER,PIN6) ; SET_BIT(GPIOB_MODER,PIN7);}   break;
									  case PIN4  : {CLR_BIT(GPIOB_MODER,PIN8) ; SET_BIT(GPIOB_MODER,PIN9);}   break;
									  case PIN5  : {CLR_BIT(GPIOB_MODER,PIN10); SET_BIT(GPIOB_MODER,PIN11);}  break;
									  case PIN6  : {CLR_BIT(GPIOB_MODER,PIN12); SET_BIT(GPIOB_MODER,PIN13);}  break;
									  case PIN7  : {CLR_BIT(GPIOB_MODER,PIN14); SET_BIT(GPIOB_MODER,PIN15);}  break;
									  case PIN8  : {CLR_BIT(GPIOB_MODER,PIN16); SET_BIT(GPIOB_MODER,PIN17);}  break;
									  case PIN9  : {CLR_BIT(GPIOB_MODER,PIN18); SET_BIT(GPIOB_MODER,PIN19);}  break;
									  case PIN10 : {CLR_BIT(GPIOB_MODER,PIN20); SET_BIT(GPIOB_MODER,PIN21);}  break;
									  case PIN11 : {CLR_BIT(GPIOB_MODER,PIN22); SET_BIT(GPIOB_MODER,PIN23);}  break;
									  case PIN12 : {CLR_BIT(GPIOB_MODER,PIN24); SET_BIT(GPIOB_MODER,PIN25);}  break;
									  case PIN13 : {CLR_BIT(GPIOB_MODER,PIN26); SET_BIT(GPIOB_MODER,PIN27);}  break;
									  case PIN14 : {CLR_BIT(GPIOB_MODER,PIN28); SET_BIT(GPIOB_MODER,PIN29);}  break;
									  case PIN15 : {CLR_BIT(GPIOB_MODER,PIN30); SET_BIT(GPIOB_MODER,PIN31);}  break;
								  }
					             }  break;
					case ANALOG : {
					              switch (PinNumber)
								   {
									  case PIN0  : {SET_BIT(GPIOB_MODER,PIN0) ; SET_BIT(GPIOB_MODER,PIN1);}   break;
									  case PIN1  : {SET_BIT(GPIOB_MODER,PIN2) ; SET_BIT(GPIOB_MODER,PIN3);}   break;
									  case PIN2  : {SET_BIT(GPIOB_MODER,PIN4) ; SET_BIT(GPIOB_MODER,PIN5);}   break;
									  case PIN3  : {SET_BIT(GPIOB_MODER,PIN6) ; SET_BIT(GPIOB_MODER,PIN7);}   break;
									  case PIN4  : {SET_BIT(GPIOB_MODER,PIN8) ; SET_BIT(GPIOB_MODER,PIN9);}   break;
									  case PIN5  : {SET_BIT(GPIOB_MODER,PIN10); SET_BIT(GPIOB_MODER,PIN11);}  break;
									  case PIN6  : {SET_BIT(GPIOB_MODER,PIN12); SET_BIT(GPIOB_MODER,PIN13);}  break;
									  case PIN7  : {SET_BIT(GPIOB_MODER,PIN14); SET_BIT(GPIOB_MODER,PIN15);}  break;
									  case PIN8  : {SET_BIT(GPIOB_MODER,PIN16); SET_BIT(GPIOB_MODER,PIN17);}  break;
									  case PIN9  : {SET_BIT(GPIOB_MODER,PIN18); SET_BIT(GPIOB_MODER,PIN19);}  break;
									  case PIN10 : {SET_BIT(GPIOB_MODER,PIN20); SET_BIT(GPIOB_MODER,PIN21);}  break;
									  case PIN11 : {SET_BIT(GPIOB_MODER,PIN22); SET_BIT(GPIOB_MODER,PIN23);}  break;
									  case PIN12 : {SET_BIT(GPIOB_MODER,PIN24); SET_BIT(GPIOB_MODER,PIN25);}  break;
									  case PIN13 : {SET_BIT(GPIOB_MODER,PIN26); SET_BIT(GPIOB_MODER,PIN27);}  break;
									  case PIN14 : {SET_BIT(GPIOB_MODER,PIN28); SET_BIT(GPIOB_MODER,PIN29);}  break;
									  case PIN15 : {SET_BIT(GPIOB_MODER,PIN30); SET_BIT(GPIOB_MODER,PIN31);}  break;
								   }
					              }  break;
				}break;
			case PORTC: 
			     switch(PinState)
				 {
				    case INPUT: {
					 	          switch (PinNumber)
								  {
									  case PIN0  : {CLR_BIT(GPIOC_MODER,PIN0) ; CLR_BIT(GPIOC_MODER,PIN1);}   break;
									  case PIN1  : {CLR_BIT(GPIOC_MODER,PIN2) ; CLR_BIT(GPIOC_MODER,PIN3);}   break;
									  case PIN2  : {CLR_BIT(GPIOC_MODER,PIN4) ; CLR_BIT(GPIOC_MODER,PIN5);}   break;
									  case PIN3  : {CLR_BIT(GPIOC_MODER,PIN6) ; CLR_BIT(GPIOC_MODER,PIN7);}   break;
									  case PIN4  : {CLR_BIT(GPIOC_MODER,PIN8) ; CLR_BIT(GPIOC_MODER,PIN9);}   break;
									  case PIN5  : {CLR_BIT(GPIOC_MODER,PIN10); CLR_BIT(GPIOC_MODER,PIN11);}  break;
									  case PIN6  : {CLR_BIT(GPIOC_MODER,PIN12); CLR_BIT(GPIOC_MODER,PIN13);}  break;
									  case PIN7  : {CLR_BIT(GPIOC_MODER,PIN14); CLR_BIT(GPIOC_MODER,PIN15);}  break;
									  case PIN8  : {CLR_BIT(GPIOC_MODER,PIN16); CLR_BIT(GPIOC_MODER,PIN17);}  break;
									  case PIN9  : {CLR_BIT(GPIOC_MODER,PIN18); CLR_BIT(GPIOC_MODER,PIN19);}  break;
									  case PIN10 : {CLR_BIT(GPIOC_MODER,PIN20); CLR_BIT(GPIOC_MODER,PIN21);}  break;
									  case PIN11 : {CLR_BIT(GPIOC_MODER,PIN22); CLR_BIT(GPIOC_MODER,PIN23);}  break;
									  case PIN12 : {CLR_BIT(GPIOC_MODER,PIN24); CLR_BIT(GPIOC_MODER,PIN25);}  break;
									  case PIN13 : {CLR_BIT(GPIOC_MODER,PIN26); CLR_BIT(GPIOC_MODER,PIN27);}  break;
									  case PIN14 : {CLR_BIT(GPIOC_MODER,PIN28); CLR_BIT(GPIOC_MODER,PIN29);}  break;
									  case PIN15 : {CLR_BIT(GPIOC_MODER,PIN30); CLR_BIT(GPIOC_MODER,PIN31);}  break;
								  }
					            }   break;
					case OUTPUT: {
					              switch (PinNumber)
								  {
									  case PIN0  : {SET_BIT(GPIOC_MODER,PIN0) ; CLR_BIT(GPIOC_MODER,PIN1);}   break;
									  case PIN1  : {SET_BIT(GPIOC_MODER,PIN2) ; CLR_BIT(GPIOC_MODER,PIN3);}   break;
									  case PIN2  : {SET_BIT(GPIOC_MODER,PIN4) ; CLR_BIT(GPIOC_MODER,PIN5);}   break;
									  case PIN3  : {SET_BIT(GPIOC_MODER,PIN6) ; CLR_BIT(GPIOC_MODER,PIN7);}   break;
									  case PIN4  : {SET_BIT(GPIOC_MODER,PIN8) ; CLR_BIT(GPIOC_MODER,PIN9);}   break;
									  case PIN5  : {SET_BIT(GPIOC_MODER,PIN10); CLR_BIT(GPIOC_MODER,PIN11);}  break;
									  case PIN6  : {SET_BIT(GPIOC_MODER,PIN12); CLR_BIT(GPIOC_MODER,PIN13);}  break;
									  case PIN7  : {SET_BIT(GPIOC_MODER,PIN14); CLR_BIT(GPIOC_MODER,PIN15);}  break;
									  case PIN8  : {SET_BIT(GPIOC_MODER,PIN16); CLR_BIT(GPIOC_MODER,PIN17);}  break;
									  case PIN9  : {SET_BIT(GPIOC_MODER,PIN18); CLR_BIT(GPIOC_MODER,PIN19);}  break;
									  case PIN10 : {SET_BIT(GPIOC_MODER,PIN20); CLR_BIT(GPIOC_MODER,PIN21);}  break;
									  case PIN11 : {SET_BIT(GPIOC_MODER,PIN22); CLR_BIT(GPIOC_MODER,PIN23);}  break;
									  case PIN12 : {SET_BIT(GPIOC_MODER,PIN24); CLR_BIT(GPIOC_MODER,PIN25);}  break;
									  case PIN13 : {SET_BIT(GPIOC_MODER,PIN26); CLR_BIT(GPIOC_MODER,PIN27);}  break;
									  case PIN14 : {SET_BIT(GPIOC_MODER,PIN28); CLR_BIT(GPIOC_MODER,PIN29);}  break;
									  case PIN15 : {SET_BIT(GPIOC_MODER,PIN30); CLR_BIT(GPIOC_MODER,PIN31);}  break;
								  }
					             }  break;
					case ALT_FUN: {
					              switch (PinNumber)
								  {
									  case PIN0  : {CLR_BIT(GPIOC_MODER,PIN0) ; SET_BIT(GPIOC_MODER,PIN1);}   break;
									  case PIN1  : {CLR_BIT(GPIOC_MODER,PIN2) ; SET_BIT(GPIOC_MODER,PIN3);}   break;
									  case PIN2  : {CLR_BIT(GPIOC_MODER,PIN4) ; SET_BIT(GPIOC_MODER,PIN5);}   break;
									  case PIN3  : {CLR_BIT(GPIOC_MODER,PIN6) ; SET_BIT(GPIOC_MODER,PIN7);}   break;
									  case PIN4  : {CLR_BIT(GPIOC_MODER,PIN8) ; SET_BIT(GPIOC_MODER,PIN9);}   break;
									  case PIN5  : {CLR_BIT(GPIOC_MODER,PIN10); SET_BIT(GPIOC_MODER,PIN11);}  break;
									  case PIN6  : {CLR_BIT(GPIOC_MODER,PIN12); SET_BIT(GPIOC_MODER,PIN13);}  break;
									  case PIN7  : {CLR_BIT(GPIOC_MODER,PIN14); SET_BIT(GPIOC_MODER,PIN15);}  break;
									  case PIN8  : {CLR_BIT(GPIOC_MODER,PIN16); SET_BIT(GPIOC_MODER,PIN17);}  break;
									  case PIN9  : {CLR_BIT(GPIOC_MODER,PIN18); SET_BIT(GPIOC_MODER,PIN19);}  break;
									  case PIN10 : {CLR_BIT(GPIOC_MODER,PIN20); SET_BIT(GPIOC_MODER,PIN21);}  break;
									  case PIN11 : {CLR_BIT(GPIOC_MODER,PIN22); SET_BIT(GPIOC_MODER,PIN23);}  break;
									  case PIN12 : {CLR_BIT(GPIOC_MODER,PIN24); SET_BIT(GPIOC_MODER,PIN25);}  break;
									  case PIN13 : {CLR_BIT(GPIOC_MODER,PIN26); SET_BIT(GPIOC_MODER,PIN27);}  break;
									  case PIN14 : {CLR_BIT(GPIOC_MODER,PIN28); SET_BIT(GPIOC_MODER,PIN29);}  break;
									  case PIN15 : {CLR_BIT(GPIOC_MODER,PIN30); SET_BIT(GPIOC_MODER,PIN31);}  break;
								  }
					             }  break;
					case ANALOG : {
					              switch (PinNumber)
								   {
									  case PIN0  : {SET_BIT(GPIOC_MODER,PIN0) ; SET_BIT(GPIOC_MODER,PIN1);}   break;
									  case PIN1  : {SET_BIT(GPIOC_MODER,PIN2) ; SET_BIT(GPIOC_MODER,PIN3);}   break;
									  case PIN2  : {SET_BIT(GPIOC_MODER,PIN4) ; SET_BIT(GPIOC_MODER,PIN5);}   break;
									  case PIN3  : {SET_BIT(GPIOC_MODER,PIN6) ; SET_BIT(GPIOC_MODER,PIN7);}   break;
									  case PIN4  : {SET_BIT(GPIOC_MODER,PIN8) ; SET_BIT(GPIOC_MODER,PIN9);}   break;
									  case PIN5  : {SET_BIT(GPIOC_MODER,PIN10); SET_BIT(GPIOC_MODER,PIN11);}  break;
									  case PIN6  : {SET_BIT(GPIOC_MODER,PIN12); SET_BIT(GPIOC_MODER,PIN13);}  break;
									  case PIN7  : {SET_BIT(GPIOC_MODER,PIN14); SET_BIT(GPIOC_MODER,PIN15);}  break;
									  case PIN8  : {SET_BIT(GPIOC_MODER,PIN16); SET_BIT(GPIOC_MODER,PIN17);}  break;
									  case PIN9  : {SET_BIT(GPIOC_MODER,PIN18); SET_BIT(GPIOC_MODER,PIN19);}  break;
									  case PIN10 : {SET_BIT(GPIOC_MODER,PIN20); SET_BIT(GPIOC_MODER,PIN21);}  break;
									  case PIN11 : {SET_BIT(GPIOC_MODER,PIN22); SET_BIT(GPIOC_MODER,PIN23);}  break;
									  case PIN12 : {SET_BIT(GPIOC_MODER,PIN24); SET_BIT(GPIOC_MODER,PIN25);}  break;
									  case PIN13 : {SET_BIT(GPIOC_MODER,PIN26); SET_BIT(GPIOC_MODER,PIN27);}  break;
									  case PIN14 : {SET_BIT(GPIOC_MODER,PIN28); SET_BIT(GPIOC_MODER,PIN29);}  break;
									  case PIN15 : {SET_BIT(GPIOC_MODER,PIN30); SET_BIT(GPIOC_MODER,PIN31);}  break;
								   }
					              }  break;
				}break;
			default:
				/*     Do Nothing     */
			break;
				
		}
	}
	else
	{
		/*Do Nothing*/
	}
}
void GPIO_voidOutputTypeRegister(u8 PortName, u8 PinNumber, u8 PinState)
{
	if( (PinNumber >= PIN0 ) && (PinNumber <= PIN16) )
	{
		switch(PortName)
		{
			case PORTA:
			     switch(PinState)
				{ 
					case PP : CLR_BIT(GPIOA_OTYPER,PinNumber)  ;    break;
					case OD : SET_BIT(GPIOA_OTYPER,PinNumber)  ;    break;
				} 
				break;
			case PORTB:
			      switch(PinState)
				{
					case PP : CLR_BIT(GPIOB_OTYPER,PinNumber)  ;   break;
					case OD : SET_BIT(GPIOB_OTYPER,PinNumber)  ;   break;			
				} 
				break;
			case PORTC:
			     switch(PinState)
				{
					case PP : CLR_BIT(GPIOC_OTYPER,PinNumber)  ;   break;			
					case OD : SET_BIT(GPIOC_OTYPER,PinNumber)  ;   break;				
				} 
				break;	
		}
	}
	else
	{
		/*     Do Nothing    */
	}
}
void  GPIO_voidOutputSpeed(u8 PortName, u8 PinNumber, u8 PinState)
{
	if( (PinNumber >= PIN0) && (PinNumber <= PIN16) )
	{
		switch(PortName)
		{
			case PORTA: 
				switch(PinState)
				{
					case LS : {
						          switch (PinNumber)
								  {
									  case PIN0  : {CLR_BIT(GPIOA_OSPEEDR,PIN0) ; CLR_BIT(GPIOA_OSPEEDR,PIN1);}   break;
									  case PIN1  : {CLR_BIT(GPIOA_OSPEEDR,PIN2) ; CLR_BIT(GPIOA_OSPEEDR,PIN3);}   break;
									  case PIN2  : {CLR_BIT(GPIOA_OSPEEDR,PIN4) ; CLR_BIT(GPIOA_OSPEEDR,PIN5);}   break;  
									  case PIN3  : {CLR_BIT(GPIOA_OSPEEDR,PIN6) ; CLR_BIT(GPIOA_OSPEEDR,PIN7);}   break;
									  case PIN4  : {CLR_BIT(GPIOA_OSPEEDR,PIN8) ; CLR_BIT(GPIOA_OSPEEDR,PIN9);}   break;
									  case PIN5  : {CLR_BIT(GPIOA_OSPEEDR,PIN10); CLR_BIT(GPIOA_OSPEEDR,PIN11);}  break;
									  case PIN6  : {CLR_BIT(GPIOA_OSPEEDR,PIN12); CLR_BIT(GPIOA_OSPEEDR,PIN13);}  break;
									  case PIN7  : {CLR_BIT(GPIOA_OSPEEDR,PIN14); CLR_BIT(GPIOA_OSPEEDR,PIN15);}  break;
									  case PIN8  : {CLR_BIT(GPIOA_OSPEEDR,PIN16); CLR_BIT(GPIOA_OSPEEDR,PIN17);}  break;
									  case PIN9  : {CLR_BIT(GPIOA_OSPEEDR,PIN18); CLR_BIT(GPIOA_OSPEEDR,PIN19);}  break;
									  case PIN10 : {CLR_BIT(GPIOA_OSPEEDR,PIN20); CLR_BIT(GPIOA_OSPEEDR,PIN21);}  break;
									  case PIN11 : {CLR_BIT(GPIOA_OSPEEDR,PIN22); CLR_BIT(GPIOA_OSPEEDR,PIN23);}  break;
									  case PIN12 : {CLR_BIT(GPIOA_OSPEEDR,PIN24); CLR_BIT(GPIOA_OSPEEDR,PIN25);}  break;
									  case PIN13 : {CLR_BIT(GPIOA_OSPEEDR,PIN26); CLR_BIT(GPIOA_OSPEEDR,PIN27);}  break;
									  case PIN14 : {CLR_BIT(GPIOA_OSPEEDR,PIN28); CLR_BIT(GPIOA_OSPEEDR,PIN29);}  break;
									  case PIN15 : {CLR_BIT(GPIOA_OSPEEDR,PIN30); CLR_BIT(GPIOA_OSPEEDR,PIN31);}  break;
								  }
					            }   break;
					case MS : {
					              switch (PinNumber)
								  {
									  case PIN0  : {SET_BIT(GPIOA_OSPEEDR,PIN0) ; CLR_BIT(GPIOA_OSPEEDR,PIN1);}   break;
									  case PIN1  : {SET_BIT(GPIOA_OSPEEDR,PIN2) ; CLR_BIT(GPIOA_OSPEEDR,PIN3);}   break;
									  case PIN2  : {SET_BIT(GPIOA_OSPEEDR,PIN4) ; CLR_BIT(GPIOA_OSPEEDR,PIN5);}   break;
									  case PIN3  : {SET_BIT(GPIOA_OSPEEDR,PIN6) ; CLR_BIT(GPIOA_OSPEEDR,PIN7);}   break;
									  case PIN4  : {SET_BIT(GPIOA_OSPEEDR,PIN8) ; CLR_BIT(GPIOA_OSPEEDR,PIN9);}   break;
									  case PIN5  : {SET_BIT(GPIOA_OSPEEDR,PIN10); CLR_BIT(GPIOA_OSPEEDR,PIN11);}  break;
									  case PIN6  : {SET_BIT(GPIOA_OSPEEDR,PIN12); CLR_BIT(GPIOA_OSPEEDR,PIN13);}  break;
									  case PIN7  : {SET_BIT(GPIOA_OSPEEDR,PIN14); CLR_BIT(GPIOA_OSPEEDR,PIN15);}  break;
									  case PIN8  : {SET_BIT(GPIOA_OSPEEDR,PIN16); CLR_BIT(GPIOA_OSPEEDR,PIN17);}  break;
									  case PIN9  : {SET_BIT(GPIOA_OSPEEDR,PIN18); CLR_BIT(GPIOA_OSPEEDR,PIN19);}  break;
									  case PIN10 : {SET_BIT(GPIOA_OSPEEDR,PIN20); CLR_BIT(GPIOA_OSPEEDR,PIN21);}  break;
									  case PIN11 : {SET_BIT(GPIOA_OSPEEDR,PIN22); CLR_BIT(GPIOA_OSPEEDR,PIN23);}  break;
									  case PIN12 : {SET_BIT(GPIOA_OSPEEDR,PIN24); CLR_BIT(GPIOA_OSPEEDR,PIN25);}  break;
									  case PIN13 : {SET_BIT(GPIOA_OSPEEDR,PIN26); CLR_BIT(GPIOA_OSPEEDR,PIN27);}  break;
									  case PIN14 : {SET_BIT(GPIOA_OSPEEDR,PIN28); CLR_BIT(GPIOA_OSPEEDR,PIN29);}  break;
									  case PIN15 : {SET_BIT(GPIOA_OSPEEDR,PIN30); CLR_BIT(GPIOA_OSPEEDR,PIN31);}  break;
								  }
					             }  break;
					case HS : {
					              switch (PinNumber)
								  {
									  case PIN0  : {CLR_BIT(GPIOA_OSPEEDR,PIN0) ; SET_BIT(GPIOA_OSPEEDR,PIN1);}   break;
									  case PIN1  : {CLR_BIT(GPIOA_OSPEEDR,PIN2) ; SET_BIT(GPIOA_OSPEEDR,PIN3);}   break;
									  case PIN2  : {CLR_BIT(GPIOA_OSPEEDR,PIN4) ; SET_BIT(GPIOA_OSPEEDR,PIN5);}   break;
									  case PIN3  : {CLR_BIT(GPIOA_OSPEEDR,PIN6) ; SET_BIT(GPIOA_OSPEEDR,PIN7);}   break;
									  case PIN4  : {CLR_BIT(GPIOA_OSPEEDR,PIN8) ; SET_BIT(GPIOA_OSPEEDR,PIN9);}   break;
									  case PIN5  : {CLR_BIT(GPIOA_OSPEEDR,PIN10); SET_BIT(GPIOA_OSPEEDR,PIN11);}  break;
									  case PIN6  : {CLR_BIT(GPIOA_OSPEEDR,PIN12); SET_BIT(GPIOA_OSPEEDR,PIN13);}  break;
									  case PIN7  : {CLR_BIT(GPIOA_OSPEEDR,PIN14); SET_BIT(GPIOA_OSPEEDR,PIN15);}  break;
									  case PIN8  : {CLR_BIT(GPIOA_OSPEEDR,PIN16); SET_BIT(GPIOA_OSPEEDR,PIN17);}  break;
									  case PIN9  : {CLR_BIT(GPIOA_OSPEEDR,PIN18); SET_BIT(GPIOA_OSPEEDR,PIN19);}  break;
									  case PIN10 : {CLR_BIT(GPIOA_OSPEEDR,PIN20); SET_BIT(GPIOA_OSPEEDR,PIN21);}  break;
									  case PIN11 : {CLR_BIT(GPIOA_OSPEEDR,PIN22); SET_BIT(GPIOA_OSPEEDR,PIN23);}  break;
									  case PIN12 : {CLR_BIT(GPIOA_OSPEEDR,PIN24); SET_BIT(GPIOA_OSPEEDR,PIN25);}  break;
									  case PIN13 : {CLR_BIT(GPIOA_OSPEEDR,PIN26); SET_BIT(GPIOA_OSPEEDR,PIN27);}  break;
									  case PIN14 : {CLR_BIT(GPIOA_OSPEEDR,PIN28); SET_BIT(GPIOA_OSPEEDR,PIN29);}  break;
									  case PIN15 : {CLR_BIT(GPIOA_OSPEEDR,PIN30); SET_BIT(GPIOA_OSPEEDR,PIN31);}  break;
								  }
					             }  break;
					case VHS : {
					              switch (PinNumber)
								   {
									  case PIN0  : {SET_BIT(GPIOA_OSPEEDR,PIN0) ; SET_BIT(GPIOA_OSPEEDR,PIN1);}   break;
									  case PIN1  : {SET_BIT(GPIOA_OSPEEDR,PIN2) ; SET_BIT(GPIOA_OSPEEDR,PIN3);}   break;
									  case PIN2  : {SET_BIT(GPIOA_OSPEEDR,PIN4) ; SET_BIT(GPIOA_OSPEEDR,PIN5);}   break;
									  case PIN3  : {SET_BIT(GPIOA_OSPEEDR,PIN6) ; SET_BIT(GPIOA_OSPEEDR,PIN7);}   break;
									  case PIN4  : {SET_BIT(GPIOA_OSPEEDR,PIN8) ; SET_BIT(GPIOA_OSPEEDR,PIN9);}   break;
									  case PIN5  : {SET_BIT(GPIOA_OSPEEDR,PIN10); SET_BIT(GPIOA_OSPEEDR,PIN11);}  break;
									  case PIN6  : {SET_BIT(GPIOA_OSPEEDR,PIN12); SET_BIT(GPIOA_OSPEEDR,PIN13);}  break;
									  case PIN7  : {SET_BIT(GPIOA_OSPEEDR,PIN14); SET_BIT(GPIOA_OSPEEDR,PIN15);}  break;
									  case PIN8  : {SET_BIT(GPIOA_OSPEEDR,PIN16); SET_BIT(GPIOA_OSPEEDR,PIN17);}  break;
									  case PIN9  : {SET_BIT(GPIOA_OSPEEDR,PIN18); SET_BIT(GPIOA_OSPEEDR,PIN19);}  break;
									  case PIN10 : {SET_BIT(GPIOA_OSPEEDR,PIN20); SET_BIT(GPIOA_OSPEEDR,PIN21);}  break;
									  case PIN11 : {SET_BIT(GPIOA_OSPEEDR,PIN22); SET_BIT(GPIOA_OSPEEDR,PIN23);}  break;
									  case PIN12 : {SET_BIT(GPIOA_OSPEEDR,PIN24); SET_BIT(GPIOA_OSPEEDR,PIN25);}  break;
									  case PIN13 : {SET_BIT(GPIOA_OSPEEDR,PIN26); SET_BIT(GPIOA_OSPEEDR,PIN27);}  break;
									  case PIN14 : {SET_BIT(GPIOA_OSPEEDR,PIN28); SET_BIT(GPIOA_OSPEEDR,PIN29);}  break;
									  case PIN15 : {SET_BIT(GPIOA_OSPEEDR,PIN30); SET_BIT(GPIOA_OSPEEDR,PIN31);}  break;
								   }
					              }  break;
				}break;
			
			case PORTB:
			     switch(PinState)
				{
				  case LS: {
					 	          switch (PinNumber)
								  {
									  case PIN0  : {CLR_BIT(GPIOB_OSPEEDR,PIN0) ; CLR_BIT(GPIOB_OSPEEDR,PIN1);}   break;
									  case PIN1  : {CLR_BIT(GPIOB_OSPEEDR,PIN2) ; CLR_BIT(GPIOB_OSPEEDR,PIN3);}   break;
									  case PIN2  : {CLR_BIT(GPIOB_OSPEEDR,PIN4) ; CLR_BIT(GPIOB_OSPEEDR,PIN5);}   break;
									  case PIN3  : {CLR_BIT(GPIOB_OSPEEDR,PIN6) ; CLR_BIT(GPIOB_OSPEEDR,PIN7);}   break;
									  case PIN4  : {CLR_BIT(GPIOB_OSPEEDR,PIN8) ; CLR_BIT(GPIOB_OSPEEDR,PIN9);}   break;
									  case PIN5  : {CLR_BIT(GPIOB_OSPEEDR,PIN10); CLR_BIT(GPIOB_OSPEEDR,PIN11);}  break;
									  case PIN6  : {CLR_BIT(GPIOB_OSPEEDR,PIN12); CLR_BIT(GPIOB_OSPEEDR,PIN13);}  break;
									  case PIN7  : {CLR_BIT(GPIOB_OSPEEDR,PIN14); CLR_BIT(GPIOB_OSPEEDR,PIN15);}  break;
									  case PIN8  : {CLR_BIT(GPIOB_OSPEEDR,PIN16); CLR_BIT(GPIOB_OSPEEDR,PIN17);}  break;
									  case PIN9  : {CLR_BIT(GPIOB_OSPEEDR,PIN18); CLR_BIT(GPIOB_OSPEEDR,PIN19);}  break;
									  case PIN10 : {CLR_BIT(GPIOB_OSPEEDR,PIN20); CLR_BIT(GPIOB_OSPEEDR,PIN21);}  break;
									  case PIN11 : {CLR_BIT(GPIOB_OSPEEDR,PIN22); CLR_BIT(GPIOB_OSPEEDR,PIN23);}  break;
									  case PIN12 : {CLR_BIT(GPIOB_OSPEEDR,PIN24); CLR_BIT(GPIOB_OSPEEDR,PIN25);}  break;
									  case PIN13 : {CLR_BIT(GPIOB_OSPEEDR,PIN26); CLR_BIT(GPIOB_OSPEEDR,PIN27);}  break;
									  case PIN14 : {CLR_BIT(GPIOB_OSPEEDR,PIN28); CLR_BIT(GPIOB_OSPEEDR,PIN29);}  break;
									  case PIN15 : {CLR_BIT(GPIOB_OSPEEDR,PIN30); CLR_BIT(GPIOB_OSPEEDR,PIN31);}  break;
								  }
					            }   break;
					case MS: {
					              switch (PinNumber)
								  {
									  case PIN0  : {SET_BIT(GPIOB_OSPEEDR,PIN0) ; CLR_BIT(GPIOB_OSPEEDR,PIN1);}   break;
									  case PIN1  : {SET_BIT(GPIOB_OSPEEDR,PIN2) ; CLR_BIT(GPIOB_OSPEEDR,PIN3);}   break;
									  case PIN2  : {SET_BIT(GPIOB_OSPEEDR,PIN4) ; CLR_BIT(GPIOB_OSPEEDR,PIN5);}   break;
									  case PIN3  : {SET_BIT(GPIOB_OSPEEDR,PIN6) ; CLR_BIT(GPIOB_OSPEEDR,PIN7);}   break;
									  case PIN4  : {SET_BIT(GPIOB_OSPEEDR,PIN8) ; CLR_BIT(GPIOB_OSPEEDR,PIN9);}   break;
									  case PIN5  : {SET_BIT(GPIOB_OSPEEDR,PIN10); CLR_BIT(GPIOB_OSPEEDR,PIN11);}  break;
									  case PIN6  : {SET_BIT(GPIOB_OSPEEDR,PIN12); CLR_BIT(GPIOB_OSPEEDR,PIN13);}  break;
									  case PIN7  : {SET_BIT(GPIOB_OSPEEDR,PIN14); CLR_BIT(GPIOB_OSPEEDR,PIN15);}  break;
									  case PIN8  : {SET_BIT(GPIOB_OSPEEDR,PIN16); CLR_BIT(GPIOB_OSPEEDR,PIN17);}  break;
									  case PIN9  : {SET_BIT(GPIOB_OSPEEDR,PIN18); CLR_BIT(GPIOB_OSPEEDR,PIN19);}  break;
									  case PIN10 : {SET_BIT(GPIOB_OSPEEDR,PIN20); CLR_BIT(GPIOB_OSPEEDR,PIN21);}  break;
									  case PIN11 : {SET_BIT(GPIOB_OSPEEDR,PIN22); CLR_BIT(GPIOB_OSPEEDR,PIN23);}  break;
									  case PIN12 : {SET_BIT(GPIOB_OSPEEDR,PIN24); CLR_BIT(GPIOB_OSPEEDR,PIN25);}  break;
									  case PIN13 : {SET_BIT(GPIOB_OSPEEDR,PIN26); CLR_BIT(GPIOB_OSPEEDR,PIN27);}  break;
									  case PIN14 : {SET_BIT(GPIOB_OSPEEDR,PIN28); CLR_BIT(GPIOB_OSPEEDR,PIN29);}  break;
									  case PIN15 : {SET_BIT(GPIOB_OSPEEDR,PIN30); CLR_BIT(GPIOB_OSPEEDR,PIN31);}  break;
								  }
					             }  break;
					case HS: {
					              switch (PinNumber)
								  {
									  case PIN0  : {CLR_BIT(GPIOB_OSPEEDR,PIN0) ; SET_BIT(GPIOB_OSPEEDR,PIN1);}   break;
									  case PIN1  : {CLR_BIT(GPIOB_OSPEEDR,PIN2) ; SET_BIT(GPIOB_OSPEEDR,PIN3);}   break;
									  case PIN2  : {CLR_BIT(GPIOB_OSPEEDR,PIN4) ; SET_BIT(GPIOB_OSPEEDR,PIN5);}   break;
									  case PIN3  : {CLR_BIT(GPIOB_OSPEEDR,PIN6) ; SET_BIT(GPIOB_OSPEEDR,PIN7);}   break;
									  case PIN4  : {CLR_BIT(GPIOB_OSPEEDR,PIN8) ; SET_BIT(GPIOB_OSPEEDR,PIN9);}   break;
									  case PIN5  : {CLR_BIT(GPIOB_OSPEEDR,PIN10); SET_BIT(GPIOB_OSPEEDR,PIN11);}  break;
									  case PIN6  : {CLR_BIT(GPIOB_OSPEEDR,PIN12); SET_BIT(GPIOB_OSPEEDR,PIN13);}  break;
									  case PIN7  : {CLR_BIT(GPIOB_OSPEEDR,PIN14); SET_BIT(GPIOB_OSPEEDR,PIN15);}  break;
									  case PIN8  : {CLR_BIT(GPIOB_OSPEEDR,PIN16); SET_BIT(GPIOB_OSPEEDR,PIN17);}  break;
									  case PIN9  : {CLR_BIT(GPIOB_OSPEEDR,PIN18); SET_BIT(GPIOB_OSPEEDR,PIN19);}  break;
									  case PIN10 : {CLR_BIT(GPIOB_OSPEEDR,PIN20); SET_BIT(GPIOB_OSPEEDR,PIN21);}  break;
									  case PIN11 : {CLR_BIT(GPIOB_OSPEEDR,PIN22); SET_BIT(GPIOB_OSPEEDR,PIN23);}  break;
									  case PIN12 : {CLR_BIT(GPIOB_OSPEEDR,PIN24); SET_BIT(GPIOB_OSPEEDR,PIN25);}  break;
									  case PIN13 : {CLR_BIT(GPIOB_OSPEEDR,PIN26); SET_BIT(GPIOB_OSPEEDR,PIN27);}  break;
									  case PIN14 : {CLR_BIT(GPIOB_OSPEEDR,PIN28); SET_BIT(GPIOB_OSPEEDR,PIN29);}  break;
									  case PIN15 : {CLR_BIT(GPIOB_OSPEEDR,PIN30); SET_BIT(GPIOB_OSPEEDR,PIN31);}  break;
								  }
					             }  break;
					case VHS : {
					              switch (PinNumber)
								   {
									  case PIN0  : {SET_BIT(GPIOB_OSPEEDR,PIN0) ; SET_BIT(GPIOB_OSPEEDR,PIN1);}   break;
									  case PIN1  : {SET_BIT(GPIOB_OSPEEDR,PIN2) ; SET_BIT(GPIOB_OSPEEDR,PIN3);}   break;
									  case PIN2  : {SET_BIT(GPIOB_OSPEEDR,PIN4) ; SET_BIT(GPIOB_OSPEEDR,PIN5);}   break;
									  case PIN3  : {SET_BIT(GPIOB_OSPEEDR,PIN6) ; SET_BIT(GPIOB_OSPEEDR,PIN7);}   break;
									  case PIN4  : {SET_BIT(GPIOB_OSPEEDR,PIN8) ; SET_BIT(GPIOB_OSPEEDR,PIN9);}   break;
									  case PIN5  : {SET_BIT(GPIOB_OSPEEDR,PIN10); SET_BIT(GPIOB_OSPEEDR,PIN11);}  break;
									  case PIN6  : {SET_BIT(GPIOB_OSPEEDR,PIN12); SET_BIT(GPIOB_OSPEEDR,PIN13);}  break;
									  case PIN7  : {SET_BIT(GPIOB_OSPEEDR,PIN14); SET_BIT(GPIOB_OSPEEDR,PIN15);}  break;
									  case PIN8  : {SET_BIT(GPIOB_OSPEEDR,PIN16); SET_BIT(GPIOB_OSPEEDR,PIN17);}  break;
									  case PIN9  : {SET_BIT(GPIOB_OSPEEDR,PIN18); SET_BIT(GPIOB_OSPEEDR,PIN19);}  break;
									  case PIN10 : {SET_BIT(GPIOB_OSPEEDR,PIN20); SET_BIT(GPIOB_OSPEEDR,PIN21);}  break;
									  case PIN11 : {SET_BIT(GPIOB_OSPEEDR,PIN22); SET_BIT(GPIOB_OSPEEDR,PIN23);}  break;
									  case PIN12 : {SET_BIT(GPIOB_OSPEEDR,PIN24); SET_BIT(GPIOB_OSPEEDR,PIN25);}  break;
									  case PIN13 : {SET_BIT(GPIOB_OSPEEDR,PIN26); SET_BIT(GPIOB_OSPEEDR,PIN27);}  break;
									  case PIN14 : {SET_BIT(GPIOB_OSPEEDR,PIN28); SET_BIT(GPIOB_OSPEEDR,PIN29);}  break;
									  case PIN15 : {SET_BIT(GPIOB_OSPEEDR,PIN30); SET_BIT(GPIOB_OSPEEDR,PIN31);}  break;
								   }
					              }  break;
				}break;
			case PORTC: 
			     switch(PinState)
				 {
				    case LS: {
					 	          switch (PinNumber)
								  {
									  case PIN0  : {CLR_BIT(GPIOC_OSPEEDR,PIN0) ; CLR_BIT(GPIOC_OSPEEDR,PIN1);}   break;
									  case PIN1  : {CLR_BIT(GPIOC_OSPEEDR,PIN2) ; CLR_BIT(GPIOC_OSPEEDR,PIN3);}   break;
									  case PIN2  : {CLR_BIT(GPIOC_OSPEEDR,PIN4) ; CLR_BIT(GPIOC_OSPEEDR,PIN5);}   break;
									  case PIN3  : {CLR_BIT(GPIOC_OSPEEDR,PIN6) ; CLR_BIT(GPIOC_OSPEEDR,PIN7);}   break;
									  case PIN4  : {CLR_BIT(GPIOC_OSPEEDR,PIN8) ; CLR_BIT(GPIOC_OSPEEDR,PIN9);}   break;
									  case PIN5  : {CLR_BIT(GPIOC_OSPEEDR,PIN10); CLR_BIT(GPIOC_OSPEEDR,PIN11);}  break;
									  case PIN6  : {CLR_BIT(GPIOC_OSPEEDR,PIN12); CLR_BIT(GPIOC_OSPEEDR,PIN13);}  break;
									  case PIN7  : {CLR_BIT(GPIOC_OSPEEDR,PIN14); CLR_BIT(GPIOC_OSPEEDR,PIN15);}  break;
									  case PIN8  : {CLR_BIT(GPIOC_OSPEEDR,PIN16); CLR_BIT(GPIOC_OSPEEDR,PIN17);}  break;
									  case PIN9  : {CLR_BIT(GPIOC_OSPEEDR,PIN18); CLR_BIT(GPIOC_OSPEEDR,PIN19);}  break;
									  case PIN10 : {CLR_BIT(GPIOC_OSPEEDR,PIN20); CLR_BIT(GPIOC_OSPEEDR,PIN21);}  break;
									  case PIN11 : {CLR_BIT(GPIOC_OSPEEDR,PIN22); CLR_BIT(GPIOC_OSPEEDR,PIN23);}  break;
									  case PIN12 : {CLR_BIT(GPIOC_OSPEEDR,PIN24); CLR_BIT(GPIOC_OSPEEDR,PIN25);}  break;
									  case PIN13 : {CLR_BIT(GPIOC_OSPEEDR,PIN26); CLR_BIT(GPIOC_OSPEEDR,PIN27);}  break;
									  case PIN14 : {CLR_BIT(GPIOC_OSPEEDR,PIN28); CLR_BIT(GPIOC_OSPEEDR,PIN29);}  break;
									  case PIN15 : {CLR_BIT(GPIOC_OSPEEDR,PIN30); CLR_BIT(GPIOC_OSPEEDR,PIN31);}  break;
								  }
					            }   break;
					case MS: {
					              switch (PinNumber)
								  {
									  case PIN0  : {SET_BIT(GPIOC_OSPEEDR,PIN0) ; CLR_BIT(GPIOC_OSPEEDR,PIN1);}   break;
									  case PIN1  : {SET_BIT(GPIOC_OSPEEDR,PIN2) ; CLR_BIT(GPIOC_OSPEEDR,PIN3);}   break;
									  case PIN2  : {SET_BIT(GPIOC_OSPEEDR,PIN4) ; CLR_BIT(GPIOC_OSPEEDR,PIN5);}   break;
									  case PIN3  : {SET_BIT(GPIOC_OSPEEDR,PIN6) ; CLR_BIT(GPIOC_OSPEEDR,PIN7);}   break;
									  case PIN4  : {SET_BIT(GPIOC_OSPEEDR,PIN8) ; CLR_BIT(GPIOC_OSPEEDR,PIN9);}   break;
									  case PIN5  : {SET_BIT(GPIOC_OSPEEDR,PIN10); CLR_BIT(GPIOC_OSPEEDR,PIN11);}  break;
									  case PIN6  : {SET_BIT(GPIOC_OSPEEDR,PIN12); CLR_BIT(GPIOC_OSPEEDR,PIN13);}  break;
									  case PIN7  : {SET_BIT(GPIOC_OSPEEDR,PIN14); CLR_BIT(GPIOC_OSPEEDR,PIN15);}  break;
									  case PIN8  : {SET_BIT(GPIOC_OSPEEDR,PIN16); CLR_BIT(GPIOC_OSPEEDR,PIN17);}  break;
									  case PIN9  : {SET_BIT(GPIOC_OSPEEDR,PIN18); CLR_BIT(GPIOC_OSPEEDR,PIN19);}  break;
									  case PIN10 : {SET_BIT(GPIOC_OSPEEDR,PIN20); CLR_BIT(GPIOC_OSPEEDR,PIN21);}  break;
									  case PIN11 : {SET_BIT(GPIOC_OSPEEDR,PIN22); CLR_BIT(GPIOC_OSPEEDR,PIN23);}  break;
									  case PIN12 : {SET_BIT(GPIOC_OSPEEDR,PIN24); CLR_BIT(GPIOC_OSPEEDR,PIN25);}  break;
									  case PIN13 : {SET_BIT(GPIOC_OSPEEDR,PIN26); CLR_BIT(GPIOC_OSPEEDR,PIN27);}  break;
									  case PIN14 : {SET_BIT(GPIOC_OSPEEDR,PIN28); CLR_BIT(GPIOC_OSPEEDR,PIN29);}  break;
									  case PIN15 : {SET_BIT(GPIOC_OSPEEDR,PIN30); CLR_BIT(GPIOC_OSPEEDR,PIN31);}  break;
								  }
					             }  break;
					case HS: {
					              switch (PinNumber)
								  {
									  case PIN0  : {CLR_BIT(GPIOC_OSPEEDR,PIN0) ; SET_BIT(GPIOC_OSPEEDR,PIN1);}   break;
									  case PIN1  : {CLR_BIT(GPIOC_OSPEEDR,PIN2) ; SET_BIT(GPIOC_OSPEEDR,PIN3);}   break;
									  case PIN2  : {CLR_BIT(GPIOC_OSPEEDR,PIN4) ; SET_BIT(GPIOC_OSPEEDR,PIN5);}   break;
									  case PIN3  : {CLR_BIT(GPIOC_OSPEEDR,PIN6) ; SET_BIT(GPIOC_OSPEEDR,PIN7);}   break;
									  case PIN4  : {CLR_BIT(GPIOC_OSPEEDR,PIN8) ; SET_BIT(GPIOC_OSPEEDR,PIN9);}   break;
									  case PIN5  : {CLR_BIT(GPIOC_OSPEEDR,PIN10); SET_BIT(GPIOC_OSPEEDR,PIN11);}  break;
									  case PIN6  : {CLR_BIT(GPIOC_OSPEEDR,PIN12); SET_BIT(GPIOC_OSPEEDR,PIN13);}  break;
									  case PIN7  : {CLR_BIT(GPIOC_OSPEEDR,PIN14); SET_BIT(GPIOC_OSPEEDR,PIN15);}  break;
									  case PIN8  : {CLR_BIT(GPIOC_OSPEEDR,PIN16); SET_BIT(GPIOC_OSPEEDR,PIN17);}  break;
									  case PIN9  : {CLR_BIT(GPIOC_OSPEEDR,PIN18); SET_BIT(GPIOC_OSPEEDR,PIN19);}  break;
									  case PIN10 : {CLR_BIT(GPIOC_OSPEEDR,PIN20); SET_BIT(GPIOC_OSPEEDR,PIN21);}  break;
									  case PIN11 : {CLR_BIT(GPIOC_OSPEEDR,PIN22); SET_BIT(GPIOC_OSPEEDR,PIN23);}  break;
									  case PIN12 : {CLR_BIT(GPIOC_OSPEEDR,PIN24); SET_BIT(GPIOC_OSPEEDR,PIN25);}  break;
									  case PIN13 : {CLR_BIT(GPIOC_OSPEEDR,PIN26); SET_BIT(GPIOC_OSPEEDR,PIN27);}  break;
									  case PIN14 : {CLR_BIT(GPIOC_OSPEEDR,PIN28); SET_BIT(GPIOC_OSPEEDR,PIN29);}  break;
									  case PIN15 : {CLR_BIT(GPIOC_OSPEEDR,PIN30); SET_BIT(GPIOC_OSPEEDR,PIN31);}  break;
								  }
					             }  break;
					case VHS : {
					              switch (PinNumber)
								   {
									  case PIN0  : {SET_BIT(GPIOC_OSPEEDR,PIN0) ; SET_BIT(GPIOC_OSPEEDR,PIN1);}   break;
									  case PIN1  : {SET_BIT(GPIOC_OSPEEDR,PIN2) ; SET_BIT(GPIOC_OSPEEDR,PIN3);}   break;
									  case PIN2  : {SET_BIT(GPIOC_OSPEEDR,PIN4) ; SET_BIT(GPIOC_OSPEEDR,PIN5);}   break;
									  case PIN3  : {SET_BIT(GPIOC_OSPEEDR,PIN6) ; SET_BIT(GPIOC_OSPEEDR,PIN7);}   break;
									  case PIN4  : {SET_BIT(GPIOC_OSPEEDR,PIN8) ; SET_BIT(GPIOC_OSPEEDR,PIN9);}   break;
									  case PIN5  : {SET_BIT(GPIOC_OSPEEDR,PIN10); SET_BIT(GPIOC_OSPEEDR,PIN11);}  break;
									  case PIN6  : {SET_BIT(GPIOC_OSPEEDR,PIN12); SET_BIT(GPIOC_OSPEEDR,PIN13);}  break;
									  case PIN7  : {SET_BIT(GPIOC_OSPEEDR,PIN14); SET_BIT(GPIOC_OSPEEDR,PIN15);}  break;
									  case PIN8  : {SET_BIT(GPIOC_OSPEEDR,PIN16); SET_BIT(GPIOC_OSPEEDR,PIN17);}  break;
									  case PIN9  : {SET_BIT(GPIOC_OSPEEDR,PIN18); SET_BIT(GPIOC_OSPEEDR,PIN19);}  break;
									  case PIN10 : {SET_BIT(GPIOC_OSPEEDR,PIN20); SET_BIT(GPIOC_OSPEEDR,PIN21);}  break;
									  case PIN11 : {SET_BIT(GPIOC_OSPEEDR,PIN22); SET_BIT(GPIOC_OSPEEDR,PIN23);}  break;
									  case PIN12 : {SET_BIT(GPIOC_OSPEEDR,PIN24); SET_BIT(GPIOC_OSPEEDR,PIN25);}  break;
									  case PIN13 : {SET_BIT(GPIOC_OSPEEDR,PIN26); SET_BIT(GPIOC_OSPEEDR,PIN27);}  break;
									  case PIN14 : {SET_BIT(GPIOC_OSPEEDR,PIN28); SET_BIT(GPIOC_OSPEEDR,PIN29);}  break;
									  case PIN15 : {SET_BIT(GPIOC_OSPEEDR,PIN30); SET_BIT(GPIOC_OSPEEDR,PIN31);}  break;
								   }
					              }  break;
				}break;
			default:
				/*     Do Nothing     */
			break;
				
		}
	}
	else
	{
		/*Do Nothing*/
	}
}
void GPIO_voidPullUpPullDown(u8 PortName, u8 PinNumber, u8 PinState)
{
	if( (PinNumber >= PIN0) && (PinNumber <= PIN16) )
	{
		switch(PortName)
		{
			case PORTA: 
				switch(PinState)
				{
					case NO : {
						          switch (PinNumber)
								  {
									  case PIN0  : {CLR_BIT(GPIOA_PUPDR,PIN0) ; CLR_BIT(GPIOA_PUPDR,PIN1);}   break;
									  case PIN1  : {CLR_BIT(GPIOA_PUPDR,PIN2) ; CLR_BIT(GPIOA_PUPDR,PIN3);}   break;
									  case PIN2  : {CLR_BIT(GPIOA_PUPDR,PIN4) ; CLR_BIT(GPIOA_PUPDR,PIN5);}   break;  
									  case PIN3  : {CLR_BIT(GPIOA_PUPDR,PIN6) ; CLR_BIT(GPIOA_PUPDR,PIN7);}   break;
									  case PIN4  : {CLR_BIT(GPIOA_PUPDR,PIN8) ; CLR_BIT(GPIOA_PUPDR,PIN9);}   break;
									  case PIN5  : {CLR_BIT(GPIOA_PUPDR,PIN10); CLR_BIT(GPIOA_PUPDR,PIN11);}  break;
									  case PIN6  : {CLR_BIT(GPIOA_PUPDR,PIN12); CLR_BIT(GPIOA_PUPDR,PIN13);}  break;
									  case PIN7  : {CLR_BIT(GPIOA_PUPDR,PIN14); CLR_BIT(GPIOA_PUPDR,PIN15);}  break;
									  case PIN8  : {CLR_BIT(GPIOA_PUPDR,PIN16); CLR_BIT(GPIOA_PUPDR,PIN17);}  break;
									  case PIN9  : {CLR_BIT(GPIOA_PUPDR,PIN18); CLR_BIT(GPIOA_PUPDR,PIN19);}  break;
									  case PIN10 : {CLR_BIT(GPIOA_PUPDR,PIN20); CLR_BIT(GPIOA_PUPDR,PIN21);}  break;
									  case PIN11 : {CLR_BIT(GPIOA_PUPDR,PIN22); CLR_BIT(GPIOA_PUPDR,PIN23);}  break;
									  case PIN12 : {CLR_BIT(GPIOA_PUPDR,PIN24); CLR_BIT(GPIOA_PUPDR,PIN25);}  break;
									  case PIN13 : {CLR_BIT(GPIOA_PUPDR,PIN26); CLR_BIT(GPIOA_PUPDR,PIN27);}  break;
									  case PIN14 : {CLR_BIT(GPIOA_PUPDR,PIN28); CLR_BIT(GPIOA_PUPDR,PIN29);}  break;
									  case PIN15 : {CLR_BIT(GPIOA_PUPDR,PIN30); CLR_BIT(GPIOA_PUPDR,PIN31);}  break;
								  }
					            }   break;
					case PU : {
					              switch (PinNumber)
								  {
									  case PIN0  : {SET_BIT(GPIOA_PUPDR,PIN0) ; CLR_BIT(GPIOA_PUPDR,PIN1);}   break;
									  case PIN1  : {SET_BIT(GPIOA_PUPDR,PIN2) ; CLR_BIT(GPIOA_PUPDR,PIN3);}   break;
									  case PIN2  : {SET_BIT(GPIOA_PUPDR,PIN4) ; CLR_BIT(GPIOA_PUPDR,PIN5);}   break;
									  case PIN3  : {SET_BIT(GPIOA_PUPDR,PIN6) ; CLR_BIT(GPIOA_PUPDR,PIN7);}   break;
									  case PIN4  : {SET_BIT(GPIOA_PUPDR,PIN8) ; CLR_BIT(GPIOA_PUPDR,PIN9);}   break;
									  case PIN5  : {SET_BIT(GPIOA_PUPDR,PIN10); CLR_BIT(GPIOA_PUPDR,PIN11);}  break;
									  case PIN6  : {SET_BIT(GPIOA_PUPDR,PIN12); CLR_BIT(GPIOA_PUPDR,PIN13);}  break;
									  case PIN7  : {SET_BIT(GPIOA_PUPDR,PIN14); CLR_BIT(GPIOA_PUPDR,PIN15);}  break;
									  case PIN8  : {SET_BIT(GPIOA_PUPDR,PIN16); CLR_BIT(GPIOA_PUPDR,PIN17);}  break;
									  case PIN9  : {SET_BIT(GPIOA_PUPDR,PIN18); CLR_BIT(GPIOA_PUPDR,PIN19);}  break;
									  case PIN10 : {SET_BIT(GPIOA_PUPDR,PIN20); CLR_BIT(GPIOA_PUPDR,PIN21);}  break;
									  case PIN11 : {SET_BIT(GPIOA_PUPDR,PIN22); CLR_BIT(GPIOA_PUPDR,PIN23);}  break;
									  case PIN12 : {SET_BIT(GPIOA_PUPDR,PIN24); CLR_BIT(GPIOA_PUPDR,PIN25);}  break;
									  case PIN13 : {SET_BIT(GPIOA_PUPDR,PIN26); CLR_BIT(GPIOA_PUPDR,PIN27);}  break;
									  case PIN14 : {SET_BIT(GPIOA_PUPDR,PIN28); CLR_BIT(GPIOA_PUPDR,PIN29);}  break;
									  case PIN15 : {SET_BIT(GPIOA_PUPDR,PIN30); CLR_BIT(GPIOA_PUPDR,PIN31);}  break;
								  }
					             }  break;
					case PD : {
					              switch (PinNumber)
								  {
									  case PIN0  : {CLR_BIT(GPIOA_PUPDR,PIN0) ; SET_BIT(GPIOA_PUPDR,PIN1);}   break;
									  case PIN1  : {CLR_BIT(GPIOA_PUPDR,PIN2) ; SET_BIT(GPIOA_PUPDR,PIN3);}   break;
									  case PIN2  : {CLR_BIT(GPIOA_PUPDR,PIN4) ; SET_BIT(GPIOA_PUPDR,PIN5);}   break;
									  case PIN3  : {CLR_BIT(GPIOA_PUPDR,PIN6) ; SET_BIT(GPIOA_PUPDR,PIN7);}   break;
									  case PIN4  : {CLR_BIT(GPIOA_PUPDR,PIN8) ; SET_BIT(GPIOA_PUPDR,PIN9);}   break;
									  case PIN5  : {CLR_BIT(GPIOA_PUPDR,PIN10); SET_BIT(GPIOA_PUPDR,PIN11);}  break;
									  case PIN6  : {CLR_BIT(GPIOA_PUPDR,PIN12); SET_BIT(GPIOA_PUPDR,PIN13);}  break;
									  case PIN7  : {CLR_BIT(GPIOA_PUPDR,PIN14); SET_BIT(GPIOA_PUPDR,PIN15);}  break;
									  case PIN8  : {CLR_BIT(GPIOA_PUPDR,PIN16); SET_BIT(GPIOA_PUPDR,PIN17);}  break;
									  case PIN9  : {CLR_BIT(GPIOA_PUPDR,PIN18); SET_BIT(GPIOA_PUPDR,PIN19);}  break;
									  case PIN10 : {CLR_BIT(GPIOA_PUPDR,PIN20); SET_BIT(GPIOA_PUPDR,PIN21);}  break;
									  case PIN11 : {CLR_BIT(GPIOA_PUPDR,PIN22); SET_BIT(GPIOA_PUPDR,PIN23);}  break;
									  case PIN12 : {CLR_BIT(GPIOA_PUPDR,PIN24); SET_BIT(GPIOA_PUPDR,PIN25);}  break;
									  case PIN13 : {CLR_BIT(GPIOA_PUPDR,PIN26); SET_BIT(GPIOA_PUPDR,PIN27);}  break;
									  case PIN14 : {CLR_BIT(GPIOA_PUPDR,PIN28); SET_BIT(GPIOA_PUPDR,PIN29);}  break;
									  case PIN15 : {CLR_BIT(GPIOA_PUPDR,PIN30); SET_BIT(GPIOA_PUPDR,PIN31);}  break;
								  }
					             }  break;
				}break;
			
			case PORTB:
			     switch(PinState)
				{
				  case NO: {
					 	          switch (PinNumber)
								  {
									  case PIN0  : {CLR_BIT(GPIOB_PUPDR,PIN0) ; CLR_BIT(GPIOB_PUPDR,PIN1);}   break;
									  case PIN1  : {CLR_BIT(GPIOB_PUPDR,PIN2) ; CLR_BIT(GPIOB_PUPDR,PIN3);}   break;
									  case PIN2  : {CLR_BIT(GPIOB_PUPDR,PIN4) ; CLR_BIT(GPIOB_PUPDR,PIN5);}   break;
									  case PIN3  : {CLR_BIT(GPIOB_PUPDR,PIN6) ; CLR_BIT(GPIOB_PUPDR,PIN7);}   break;
									  case PIN4  : {CLR_BIT(GPIOB_PUPDR,PIN8) ; CLR_BIT(GPIOB_PUPDR,PIN9);}   break;
									  case PIN5  : {CLR_BIT(GPIOB_PUPDR,PIN10); CLR_BIT(GPIOB_PUPDR,PIN11);}  break;
									  case PIN6  : {CLR_BIT(GPIOB_PUPDR,PIN12); CLR_BIT(GPIOB_PUPDR,PIN13);}  break;
									  case PIN7  : {CLR_BIT(GPIOB_PUPDR,PIN14); CLR_BIT(GPIOB_PUPDR,PIN15);}  break;
									  case PIN8  : {CLR_BIT(GPIOB_PUPDR,PIN16); CLR_BIT(GPIOB_PUPDR,PIN17);}  break;
									  case PIN9  : {CLR_BIT(GPIOB_PUPDR,PIN18); CLR_BIT(GPIOB_PUPDR,PIN19);}  break;
									  case PIN10 : {CLR_BIT(GPIOB_PUPDR,PIN20); CLR_BIT(GPIOB_PUPDR,PIN21);}  break;
									  case PIN11 : {CLR_BIT(GPIOB_PUPDR,PIN22); CLR_BIT(GPIOB_PUPDR,PIN23);}  break;
									  case PIN12 : {CLR_BIT(GPIOB_PUPDR,PIN24); CLR_BIT(GPIOB_PUPDR,PIN25);}  break;
									  case PIN13 : {CLR_BIT(GPIOB_PUPDR,PIN26); CLR_BIT(GPIOB_PUPDR,PIN27);}  break;
									  case PIN14 : {CLR_BIT(GPIOB_PUPDR,PIN28); CLR_BIT(GPIOB_PUPDR,PIN29);}  break;
									  case PIN15 : {CLR_BIT(GPIOB_PUPDR,PIN30); CLR_BIT(GPIOB_PUPDR,PIN31);}  break;
								  }
					            }   break;
					case PU: {
					              switch (PinNumber)
								  {
									  case PIN0  : {SET_BIT(GPIOB_PUPDR,PIN0) ; CLR_BIT(GPIOB_PUPDR,PIN1);}   break;
									  case PIN1  : {SET_BIT(GPIOB_PUPDR,PIN2) ; CLR_BIT(GPIOB_PUPDR,PIN3);}   break;
									  case PIN2  : {SET_BIT(GPIOB_PUPDR,PIN4) ; CLR_BIT(GPIOB_PUPDR,PIN5);}   break;
									  case PIN3  : {SET_BIT(GPIOB_PUPDR,PIN6) ; CLR_BIT(GPIOB_PUPDR,PIN7);}   break;
									  case PIN4  : {SET_BIT(GPIOB_PUPDR,PIN8) ; CLR_BIT(GPIOB_PUPDR,PIN9);}   break;
									  case PIN5  : {SET_BIT(GPIOB_PUPDR,PIN10); CLR_BIT(GPIOB_PUPDR,PIN11);}  break;
									  case PIN6  : {SET_BIT(GPIOB_PUPDR,PIN12); CLR_BIT(GPIOB_PUPDR,PIN13);}  break;
									  case PIN7  : {SET_BIT(GPIOB_PUPDR,PIN14); CLR_BIT(GPIOB_PUPDR,PIN15);}  break;
									  case PIN8  : {SET_BIT(GPIOB_PUPDR,PIN16); CLR_BIT(GPIOB_PUPDR,PIN17);}  break;
									  case PIN9  : {SET_BIT(GPIOB_PUPDR,PIN18); CLR_BIT(GPIOB_PUPDR,PIN19);}  break;
									  case PIN10 : {SET_BIT(GPIOB_PUPDR,PIN20); CLR_BIT(GPIOB_PUPDR,PIN21);}  break;
									  case PIN11 : {SET_BIT(GPIOB_PUPDR,PIN22); CLR_BIT(GPIOB_PUPDR,PIN23);}  break;
									  case PIN12 : {SET_BIT(GPIOB_PUPDR,PIN24); CLR_BIT(GPIOB_PUPDR,PIN25);}  break;
									  case PIN13 : {SET_BIT(GPIOB_PUPDR,PIN26); CLR_BIT(GPIOB_PUPDR,PIN27);}  break;
									  case PIN14 : {SET_BIT(GPIOB_PUPDR,PIN28); CLR_BIT(GPIOB_PUPDR,PIN29);}  break;
									  case PIN15 : {SET_BIT(GPIOB_PUPDR,PIN30); CLR_BIT(GPIOB_PUPDR,PIN31);}  break;
								  }
					             }  break;
					case PD: {
					              switch (PinNumber)
								  {
									  case PIN0  : {CLR_BIT(GPIOB_PUPDR,PIN0) ; SET_BIT(GPIOB_PUPDR,PIN1);}   break;
									  case PIN1  : {CLR_BIT(GPIOB_PUPDR,PIN2) ; SET_BIT(GPIOB_PUPDR,PIN3);}   break;
									  case PIN2  : {CLR_BIT(GPIOB_PUPDR,PIN4) ; SET_BIT(GPIOB_PUPDR,PIN5);}   break;
									  case PIN3  : {CLR_BIT(GPIOB_PUPDR,PIN6) ; SET_BIT(GPIOB_PUPDR,PIN7);}   break;
									  case PIN4  : {CLR_BIT(GPIOB_PUPDR,PIN8) ; SET_BIT(GPIOB_PUPDR,PIN9);}   break;
									  case PIN5  : {CLR_BIT(GPIOB_PUPDR,PIN10); SET_BIT(GPIOB_PUPDR,PIN11);}  break;
									  case PIN6  : {CLR_BIT(GPIOB_PUPDR,PIN12); SET_BIT(GPIOB_PUPDR,PIN13);}  break;
									  case PIN7  : {CLR_BIT(GPIOB_PUPDR,PIN14); SET_BIT(GPIOB_PUPDR,PIN15);}  break;
									  case PIN8  : {CLR_BIT(GPIOB_PUPDR,PIN16); SET_BIT(GPIOB_PUPDR,PIN17);}  break;
									  case PIN9  : {CLR_BIT(GPIOB_PUPDR,PIN18); SET_BIT(GPIOB_PUPDR,PIN19);}  break;
									  case PIN10 : {CLR_BIT(GPIOB_PUPDR,PIN20); SET_BIT(GPIOB_PUPDR,PIN21);}  break;
									  case PIN11 : {CLR_BIT(GPIOB_PUPDR,PIN22); SET_BIT(GPIOB_PUPDR,PIN23);}  break;
									  case PIN12 : {CLR_BIT(GPIOB_PUPDR,PIN24); SET_BIT(GPIOB_PUPDR,PIN25);}  break;
									  case PIN13 : {CLR_BIT(GPIOB_PUPDR,PIN26); SET_BIT(GPIOB_PUPDR,PIN27);}  break;
									  case PIN14 : {CLR_BIT(GPIOB_PUPDR,PIN28); SET_BIT(GPIOB_PUPDR,PIN29);}  break;
									  case PIN15 : {CLR_BIT(GPIOB_PUPDR,PIN30); SET_BIT(GPIOB_PUPDR,PIN31);}  break;
								  }
					             }  break;
					
				}break;
			case PORTC: 
			     switch(PinState)
				 {
				    case NO: {
					 	          switch (PinNumber)
								  {
									  case PIN0  : {CLR_BIT(GPIOC_PUPDR,PIN0) ; CLR_BIT(GPIOC_PUPDR,PIN1);}   break;
									  case PIN1  : {CLR_BIT(GPIOC_PUPDR,PIN2) ; CLR_BIT(GPIOC_PUPDR,PIN3);}   break;
									  case PIN2  : {CLR_BIT(GPIOC_PUPDR,PIN4) ; CLR_BIT(GPIOC_PUPDR,PIN5);}   break;
									  case PIN3  : {CLR_BIT(GPIOC_PUPDR,PIN6) ; CLR_BIT(GPIOC_PUPDR,PIN7);}   break;
									  case PIN4  : {CLR_BIT(GPIOC_PUPDR,PIN8) ; CLR_BIT(GPIOC_PUPDR,PIN9);}   break;
									  case PIN5  : {CLR_BIT(GPIOC_PUPDR,PIN10); CLR_BIT(GPIOC_PUPDR,PIN11);}  break;
									  case PIN6  : {CLR_BIT(GPIOC_PUPDR,PIN12); CLR_BIT(GPIOC_PUPDR,PIN13);}  break;
									  case PIN7  : {CLR_BIT(GPIOC_PUPDR,PIN14); CLR_BIT(GPIOC_PUPDR,PIN15);}  break;
									  case PIN8  : {CLR_BIT(GPIOC_PUPDR,PIN16); CLR_BIT(GPIOC_PUPDR,PIN17);}  break;
									  case PIN9  : {CLR_BIT(GPIOC_PUPDR,PIN18); CLR_BIT(GPIOC_PUPDR,PIN19);}  break;
									  case PIN10 : {CLR_BIT(GPIOC_PUPDR,PIN20); CLR_BIT(GPIOC_PUPDR,PIN21);}  break;
									  case PIN11 : {CLR_BIT(GPIOC_PUPDR,PIN22); CLR_BIT(GPIOC_PUPDR,PIN23);}  break;
									  case PIN12 : {CLR_BIT(GPIOC_PUPDR,PIN24); CLR_BIT(GPIOC_PUPDR,PIN25);}  break;
									  case PIN13 : {CLR_BIT(GPIOC_PUPDR,PIN26); CLR_BIT(GPIOC_PUPDR,PIN27);}  break;
									  case PIN14 : {CLR_BIT(GPIOC_PUPDR,PIN28); CLR_BIT(GPIOC_PUPDR,PIN29);}  break;
									  case PIN15 : {CLR_BIT(GPIOC_PUPDR,PIN30); CLR_BIT(GPIOC_PUPDR,PIN31);}  break;
								  }
					            }   break;
					case PU: {
					              switch (PinNumber)
								  {
									  case PIN0  : {SET_BIT(GPIOC_PUPDR,PIN0) ; CLR_BIT(GPIOC_PUPDR,PIN1);}   break;
									  case PIN1  : {SET_BIT(GPIOC_PUPDR,PIN2) ; CLR_BIT(GPIOC_PUPDR,PIN3);}   break;
									  case PIN2  : {SET_BIT(GPIOC_PUPDR,PIN4) ; CLR_BIT(GPIOC_PUPDR,PIN5);}   break;
									  case PIN3  : {SET_BIT(GPIOC_PUPDR,PIN6) ; CLR_BIT(GPIOC_PUPDR,PIN7);}   break;
									  case PIN4  : {SET_BIT(GPIOC_PUPDR,PIN8) ; CLR_BIT(GPIOC_PUPDR,PIN9);}   break;
									  case PIN5  : {SET_BIT(GPIOC_PUPDR,PIN10); CLR_BIT(GPIOC_PUPDR,PIN11);}  break;
									  case PIN6  : {SET_BIT(GPIOC_PUPDR,PIN12); CLR_BIT(GPIOC_PUPDR,PIN13);}  break;
									  case PIN7  : {SET_BIT(GPIOC_PUPDR,PIN14); CLR_BIT(GPIOC_PUPDR,PIN15);}  break;
									  case PIN8  : {SET_BIT(GPIOC_PUPDR,PIN16); CLR_BIT(GPIOC_PUPDR,PIN17);}  break;
									  case PIN9  : {SET_BIT(GPIOC_PUPDR,PIN18); CLR_BIT(GPIOC_PUPDR,PIN19);}  break;
									  case PIN10 : {SET_BIT(GPIOC_PUPDR,PIN20); CLR_BIT(GPIOC_PUPDR,PIN21);}  break;
									  case PIN11 : {SET_BIT(GPIOC_PUPDR,PIN22); CLR_BIT(GPIOC_PUPDR,PIN23);}  break;
									  case PIN12 : {SET_BIT(GPIOC_PUPDR,PIN24); CLR_BIT(GPIOC_PUPDR,PIN25);}  break;
									  case PIN13 : {SET_BIT(GPIOC_PUPDR,PIN26); CLR_BIT(GPIOC_PUPDR,PIN27);}  break;
									  case PIN14 : {SET_BIT(GPIOC_PUPDR,PIN28); CLR_BIT(GPIOC_PUPDR,PIN29);}  break;
									  case PIN15 : {SET_BIT(GPIOC_PUPDR,PIN30); CLR_BIT(GPIOC_PUPDR,PIN31);}  break;
								  }
					             }  break;
					case PD: {
					              switch (PinNumber)
								  {
									  case PIN0  : {CLR_BIT(GPIOC_PUPDR,PIN0) ; SET_BIT(GPIOC_PUPDR,PIN1);}   break;
									  case PIN1  : {CLR_BIT(GPIOC_PUPDR,PIN2) ; SET_BIT(GPIOC_PUPDR,PIN3);}   break;
									  case PIN2  : {CLR_BIT(GPIOC_PUPDR,PIN4) ; SET_BIT(GPIOC_PUPDR,PIN5);}   break;
									  case PIN3  : {CLR_BIT(GPIOC_PUPDR,PIN6) ; SET_BIT(GPIOC_PUPDR,PIN7);}   break;
									  case PIN4  : {CLR_BIT(GPIOC_PUPDR,PIN8) ; SET_BIT(GPIOC_PUPDR,PIN9);}   break;
									  case PIN5  : {CLR_BIT(GPIOC_PUPDR,PIN10); SET_BIT(GPIOC_PUPDR,PIN11);}  break;
									  case PIN6  : {CLR_BIT(GPIOC_PUPDR,PIN12); SET_BIT(GPIOC_PUPDR,PIN13);}  break;
									  case PIN7  : {CLR_BIT(GPIOC_PUPDR,PIN14); SET_BIT(GPIOC_PUPDR,PIN15);}  break;
									  case PIN8  : {CLR_BIT(GPIOC_PUPDR,PIN16); SET_BIT(GPIOC_PUPDR,PIN17);}  break;
									  case PIN9  : {CLR_BIT(GPIOC_PUPDR,PIN18); SET_BIT(GPIOC_PUPDR,PIN19);}  break;
									  case PIN10 : {CLR_BIT(GPIOC_PUPDR,PIN20); SET_BIT(GPIOC_PUPDR,PIN21);}  break;
									  case PIN11 : {CLR_BIT(GPIOC_PUPDR,PIN22); SET_BIT(GPIOC_PUPDR,PIN23);}  break;
									  case PIN12 : {CLR_BIT(GPIOC_PUPDR,PIN24); SET_BIT(GPIOC_PUPDR,PIN25);}  break;
									  case PIN13 : {CLR_BIT(GPIOC_PUPDR,PIN26); SET_BIT(GPIOC_PUPDR,PIN27);}  break;
									  case PIN14 : {CLR_BIT(GPIOC_PUPDR,PIN28); SET_BIT(GPIOC_PUPDR,PIN29);}  break;
									  case PIN15 : {CLR_BIT(GPIOC_PUPDR,PIN30); SET_BIT(GPIOC_PUPDR,PIN31);}  break;
								  }
					             }  break;
				}break;
			default:
				/*     Do Nothing     */
			break;
				
		}
	}
	else
	{
		/*Do Nothing*/
	}
	
}
u8 GPIO_u8GetPinValue(u8 PortName, u8 PinNumber)
{
	  u8 PinValue;
	  switch(PortName)
	  {
	  	case PORTA:
	  		PinValue = GET_BIT(GPIOA_IDR, PinNumber);
	  	break;
	  	
	  	case PORTB:
	  		PinValue = GET_BIT(GPIOB_IDR, PinNumber);
	  	break;
	  	
	  	case PORTC:
	  		PinValue = GET_BIT(GPIOC_IDR, PinNumber);
	  	break;
	  	default:
	  		/*Do Nothing*/
	  	break;
	  }
	return PinValue;
}
void GPIO_voidSetPinValue(u8 PortName , u8 PinNumber,u8 PinState)
{
	if( (PinNumber >= PIN0 ) && (PinNumber <= PIN16) )
	{
		switch(PortName)
		{
			case PORTA:
			     switch(PinState)
				{
					case LOW : CLR_BIT(GPIOA_ODR,PinNumber) ;   break;
					case HIGH: SET_BIT(GPIOA_ODR,PinNumber) ;   break;			  					      
			    }
		        break;
			case PORTB:
			      switch(PinState)
				{
					case LOW : CLR_BIT(GPIOB_ODR,PinNumber) ;   break;
					case HIGH: SET_BIT(GPIOB_ODR,PinNumber) ;   break;			  					      
			    }
			     break;
			case PORTC:
			     switch(PinState)
				{
					case LOW : CLR_BIT(GPIOC_ODR,PinNumber) ;   break;
					case HIGH: SET_BIT(GPIOC_ODR,PinNumber) ;   break;			  					      
			    }
			     break;		
		}
	}
	else
	{
		/*     Do Nothing    */
	}
}
void  GPIO_voidSetPortDirection(u8 PortName,u8 PortState)
{
	switch(PortName)
	{
		case PORTA : 
		     switch(PortState)
			 {
				 case INPUT   :  GPIOA_MODER |= 0x00000000; break;
				 case OUTPUT  :  GPIOA_MODER |= 0x55555555; break;
				 case ALT_FUN :  GPIOA_MODER |= 0xAAAAAAAA; break;
				 case ANALOG  :  GPIOA_MODER |= 0xFFFFFFFF; break;
			 }
			 break;
		case PORTB :
		     switch(PortState)
			 {
				 case INPUT   :  GPIOB_MODER |= 0x00000000; break;
				 case OUTPUT  :  GPIOB_MODER |= 0x55555555; break;
				 case ALT_FUN :  GPIOB_MODER |= 0xAAAAAAAA; break;
				 case ANALOG  :  GPIOB_MODER |= 0xFFFFFFFF; break;
			 }
			 break;
		case PORTC :
		     switch(PortState)
			 {
				 case INPUT   :  GPIOC_MODER |= 0x00000000; break;
				 case OUTPUT  :  GPIOC_MODER |= 0x55555555; break;
				 case ALT_FUN :  GPIOC_MODER |= 0xAAAAAAAA; break;
				 case ANALOG  :  GPIOC_MODER |= 0xFFFFFFFF; break;
			 }
			 break;
	}
}
void  GPIO_voidSetPortValue(u8 PortName,u8 PortState)
{
	switch(PortName)
	{
		case PORTA :
		     switch(PortState)
			 {
				 case  LOW  : GPIOA_ODR=0x00000000;break;
				 case  HIGH : GPIOA_ODR=0xFfffffff;break;
			 }
			 break;
		case PORTB :
		     switch(PortState)
			 {
				 case  LOW  : GPIOB_ODR=0x00000000;break;
				 case  HIGH : GPIOB_ODR=0xFfffffff;break;
			 }
			 break;
		case PORTC :
		     switch(PortState)
			 {
				 case  LOW  : GPIOC_ODR=0x00000000;break;
				 case  HIGH : GPIOC_ODR=0xFfffffff;break;
			 }
			 break;
	}
}