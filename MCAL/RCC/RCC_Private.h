#ifndef   RCC_PRIVATE_H
#define   RCC_PRIVATE_H

#define   RCC_BASE_ADDRESS    (u32)0x40023800
/*................... Registers name in RCC peripheral...................... */
/* ..................the bits that used in RCC_CR peripheral.................*/
#define   RCC_CR              *((volatile u32*)((RCC_BASE_ADDRESS)+0x00))
#define   RCC_CR_HSION                         0  //Internal high-speed clock enable
#define   RCC_CR_HSIRDY                        1  //Internal high-speed clock ready flag
#define   RCC_CR_HSEON                         16 //HSE clock enable
#define   RCC_CR_HSERDY                        17 //HSE clock ready flag
#define   RCC_CR_HSEBYP                        18 //HSE clock bypass
#define   RCC_CR_CSSON                         19 //Clock security system enable
#define   RCC_CR_PLLON                         24 //Main PLL (PLL) enable
#define   RCC_CR_PLLRDY                        25 //Main PLL (PLL) clock ready flag
#define   RCC_CR_PLLI2SON                      26 //PLLI2S enable
#define   RCC_CR_PLLI2SRDY                     27 //PLLI2S clock ready flag
/* ..........................................................................*/
#define   RCC_PLLCFGR         *((volatile u32*)((RCC_BASE_ADDRESS)+0x04))
#define   RCC_CFGR            *((volatile u32*)((RCC_BASE_ADDRESS)+0x08))
#define   RCC_CIR             *((volatile u32*)((RCC_BASE_ADDRESS)+0x0C))
#define   RCC_AHB1RSTR        *((volatile u32*)((RCC_BASE_ADDRESS)+0x10))
#define   RCC_AHB2RSTR        *((volatile u32*)((RCC_BASE_ADDRESS)+0x14))
#define   Reserved            *((volatile u32*)((RCC_BASE_ADDRESS)+0x18))
#define   Reserved            *((volatile u32*)((RCC_BASE_ADDRESS)+0x1C))
#define   RCC_APB1RSTR        *((volatile u32*)((RCC_BASE_ADDRESS)+0x20))
#define   RCC_APB2RSTR        *((volatile u32*)((RCC_BASE_ADDRESS)+0x24))
#define   Reserved            *((volatile u32*)((RCC_BASE_ADDRESS)+0x28))
#define   Reserved            *((volatile u32*)((RCC_BASE_ADDRESS)+0x2C))
#define   RCC_AHB1ENR         *((volatile u32*)((RCC_BASE_ADDRESS)+0x30))
#define   RCC_AHB2ENR         *((volatile u32*)((RCC_BASE_ADDRESS)+0x34))
#define   Reserved            *((volatile u32*)((RCC_BASE_ADDRESS)+0x38))
#define   Reserved            *((volatile u32*)((RCC_BASE_ADDRESS)+0x3C))
#define   RCC_APB1ENR         *((volatile u32*)((RCC_BASE_ADDRESS)+0x40))
#define   RCC_APB2ENR         *((volatile u32*)((RCC_BASE_ADDRESS)+0x44))
#define   Reserved            *((volatile u32*)((RCC_BASE_ADDRESS)+0x48))
#define   Reserved            *((volatile u32*)((RCC_BASE_ADDRESS)+0x4C))
#define   RCC_AHB1LPENR       *((volatile u32*)((RCC_BASE_ADDRESS)+0x50))
#define   RCC_AHB2LPENR       *((volatile u32*)((RCC_BASE_ADDRESS)+0x54))
#define   Reserved            *((volatile u32*)((RCC_BASE_ADDRESS)+0x58))
#define   Reserved            *((volatile u32*)((RCC_BASE_ADDRESS)+0x5C))
#define   RCC_APB1LPENR       *((volatile u32*)((RCC_BASE_ADDRESS)+0x60))
#define   RCC_APB2LPENR       *((volatile u32*)((RCC_BASE_ADDRESS)+0x64))
#define   Reserved            *((volatile u32*)((RCC_BASE_ADDRESS)+0x68))
#define   Reserved            *((volatile u32*)((RCC_BASE_ADDRESS)+0x6C))
#define   RCC_BDCR            *((volatile u32*)((RCC_BASE_ADDRESS)+0x70))
#define   RCC_CSR             *((volatile u32*)((RCC_BASE_ADDRESS)+0x74))
#define   Reserved            *((volatile u32*)((RCC_BASE_ADDRESS)+0x78))
#define   Reserved            *((volatile u32*)((RCC_BASE_ADDRESS)+0x7C))
#define   RCC_SSCGR           *((volatile u32*)((RCC_BASE_ADDRESS)+0x80))
#define   RCC_PLLI2SCFGR      *((volatile u32*)((RCC_BASE_ADDRESS)+0x84))
#define   Reserved            *((volatile u32*)((RCC_BASE_ADDRESS)+0x88))
#define   RCC_DCKCFGR         *((volatile u32*)((RCC_BASE_ADDRESS)+0x8C))



#endif