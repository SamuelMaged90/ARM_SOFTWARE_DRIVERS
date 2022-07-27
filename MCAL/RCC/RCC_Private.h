#ifndef   RCC_PRIVATE_H
#define   RCC_PRIVATE_H

#define   RCC_BASE_ADDRESS    (u32)0x40023800   // FOR RCC REGISTERS ONLY 
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
/* .................................................................................................*/
#define   RCC_PLLCFGR         *((volatile u32*)((RCC_BASE_ADDRESS)+0x04))
#define   RCC_PLLCFGR_PLLM1                    0  // Division factor for the main PLL and audio(PLLI2S) input clock bit 1
#define   RCC_PLLCFGR_PLLM2                    1  // Division factor for the main PLL and audio(PLLI2S) input clock bit 2
#define   RCC_PLLCFGR_PLLM3                    2  // Division factor for the main PLL and audio(PLLI2S) input clock bit 3
#define   RCC_PLLCFGR_PLLM4                    3  // Division factor for the main PLL and audio(PLLI2S) input clock bit 4
#define   RCC_PLLCFGR_PLLM5                    4  // Division factor for the main PLL and audio(PLLI2S) input clock bit 5
#define   RCC_PLLCFGR_PLLM6                    5  // Division factor for the main PLL and audio(PLLI2S) input clock bit 6
#define   RCC_PLLCFGR_PLLN1                    6  // Main PLL (PLL) multiplication factor for VCO bit 1
#define   RCC_PLLCFGR_PLLN2                    7  // Main PLL (PLL) multiplication factor for VCO bit 2
#define   RCC_PLLCFGR_PLLN3                    8  // Main PLL (PLL) multiplication factor for VCO bit 3
#define   RCC_PLLCFGR_PLLN4                    9  // Main PLL (PLL) multiplication factor for VCO bit 4
#define   RCC_PLLCFGR_PLLN5                    10 // Main PLL (PLL) multiplication factor for VCO bit 5
#define   RCC_PLLCFGR_PLLN6                    11 // Main PLL (PLL) multiplication factor for VCO bit 6
#define   RCC_PLLCFGR_PLLN7                    12 // Main PLL (PLL) multiplication factor for VCO bit 7
#define   RCC_PLLCFGR_PLLN8                    13 // Main PLL (PLL) multiplication factor for VCO bit 8
#define   RCC_PLLCFGR_PLLN9                    14 // Main PLL (PLL) multiplication factor for VCO bit 9
#define   RCC_PLLCFGR_PLLP1                    16 // Main PLL (PLL) division factor for main system clock bit 1
#define   RCC_PLLCFGR_PLLP2                    17 // Main PLL (PLL) division factor for main system clock bit 2
#define   RCC_PLLCFGR_PLLSRC                   22 // Main PLL(PLL) and audio PLL (PLLI2S) entry clock source
#define   RCC_PLLCFGR_PLLQ1                    24 // Main PLL (PLL) division factor for USB OTG FS,SDIO and random number generatorclocks bit 1
#define   RCC_PLLCFGR_PLLQ2                    25 // Main PLL (PLL) division factor for USB OTG FS,SDIO and random number generatorclocks bit 2
#define   RCC_PLLCFGR_PLLQ3                    26 // Main PLL (PLL) division factor for USB OTG FS,SDIO and random number generatorclocks bit 3
#define   RCC_PLLCFGR_PLLQ4                    27 // Main PLL (PLL) division factor for USB OTG FS,SDIO and random number generatorclocks bit 4
/*...................................................................................................*/
#define   RCC_CFGR            *((volatile u32*)((RCC_BASE_ADDRESS)+0x08))
#define   RCC_CFGR_SW0                       0  //System clock switch bit 1
#define   RCC_CFGR_SW1                       1  //System clock switch bit 2
#define   RCC_CFGR_HPRE0                     4  // AHB prescaler bit 1
#define   RCC_CFGR_HPRE1                     5  // AHB prescaler bit 2
#define   RCC_CFGR_HPRE2                     6  // AHB prescaler bit 3
#define   RCC_CFGR_HPRE3                     7  // AHB prescaler bit 4
#define   RCC_CFGR_PPRE1_1                   10 // APB1 Prescaller bit 1
#define   RCC_CFGR_PPRE1_2                   11 // APB1 Prescaller bit 2
#define   RCC_CFGR_PPRE1_3                   12 // APB1 Prescaller bit 3
#define   RCC_CFGR_PPRE2_1                   13 // APB2 Prescaller bit 1
#define   RCC_CFGR_PPRE2_2                   14 // APB2 Prescaller bit 2
#define   RCC_CFGR_PPRE2_3                   15 // APB2 Prescaller bit 3
#define   RCC_CFGR_RTCPRE1                   16 //HSE division factor for RTC clock bit 1              
#define   RCC_CFGR_RTCPRE2                   17 //HSE division factor for RTC clock bit 2     
#define   RCC_CFGR_RTCPRE3                   18 //HSE division factor for RTC clock bit 3     
#define   RCC_CFGR_RTCPRE4                   19 //HSE division factor for RTC clock bit 4     
#define   RCC_CFGR_RTCPRE5                   20 //HSE division factor for RTC clock bit 5
#define   RCC_CFGR_MCO1_1                    21 // Microcontroller clock output 1 bit 1  (MCO1)
#define   RCC_CFGR_MCO1_2                    22 // Microcontroller clock output 1 bit 2  (MCO1)
#define   RCC_CFGR_I2SSRC                    23 // I2S clock selection
#define   RCC_CFGR_MCO1PRE_1                 24 // MCO1 prescaler bit 1 
#define   RCC_CFGR_MCO1PRE_2                 25 // MCO1 prescaler bit 2
#define   RCC_CFGR_MCO1PRE_3                 26 // MCO1 prescaler bit 3
#define   RCC_CFGR_MCO2PRE_1                 27 // MCO2 prescaler bit 1 
#define   RCC_CFGR_MCO2PRE_2                 28 // MCO2 prescaler bit 2 
#define   RCC_CFGR_MCO2PRE_3                 29 // MCO2 prescaler bit 3 
#define   RCC_CFGR_MCO2_1                    30 // Microcontroller clock output 2 bit 1  (MCO2)
#define   RCC_CFGR_MCO2_2                    31 // Microcontroller clock output 2 bit 2  (MCO2)
/*....................................................................................................*/
#define   RCC_CIR             *((volatile u32*)((RCC_BASE_ADDRESS)+0x0C))
#define   RCC_AHB1RSTR        *((volatile u32*)((RCC_BASE_ADDRESS)+0x10))
#define   RCC_AHB2RSTR        *((volatile u32*)((RCC_BASE_ADDRESS)+0x14))
#define   RCC_APB1RSTR        *((volatile u32*)((RCC_BASE_ADDRESS)+0x20))
#define   RCC_APB2RSTR        *((volatile u32*)((RCC_BASE_ADDRESS)+0x24))
/*.....................................................................................................*/
#define   RCC_AHB1ENR         *((volatile u32*)((RCC_BASE_ADDRESS)+0x30))
#define   RCC_AHB1ENR_GPIOA                 0
#define   RCC_AHB1ENR_GPIOB                 1
#define   RCC_AHB1ENR_GPIOC                 2
#define   RCC_AHB1ENR_GPIOD                 3
#define   RCC_AHB1ENR_GPIOE                 4
#define   RCC_AHB1ENR_GPIOH                 7
#define   RCC_AHB1ENR_CRC                   12 
#define   RCC_AHB1ENR_DMA1                  21
#define   RCC_AHB1ENR_DMA2                  22
/*.....................................................................................................*/
#define   RCC_AHB2ENR         *((volatile u32*)((RCC_BASE_ADDRESS)+0x34))
#define   RCC_AHB2ENR_OTGFS                 7
/*.....................................................................................................*/
#define   RCC_APB1ENR         *((volatile u32*)((RCC_BASE_ADDRESS)+0x40))
#define   RCC_APB2ENR         *((volatile u32*)((RCC_BASE_ADDRESS)+0x44))
#define   RCC_AHB1LPENR       *((volatile u32*)((RCC_BASE_ADDRESS)+0x50))
#define   RCC_AHB2LPENR       *((volatile u32*)((RCC_BASE_ADDRESS)+0x54))
#define   RCC_APB1LPENR       *((volatile u32*)((RCC_BASE_ADDRESS)+0x60))
#define   RCC_APB2LPENR       *((volatile u32*)((RCC_BASE_ADDRESS)+0x64))
#define   RCC_BDCR            *((volatile u32*)((RCC_BASE_ADDRESS)+0x70))
#define   RCC_CSR             *((volatile u32*)((RCC_BASE_ADDRESS)+0x74))
#define   RCC_SSCGR           *((volatile u32*)((RCC_BASE_ADDRESS)+0x80))
#define   RCC_PLLI2SCFGR      *((volatile u32*)((RCC_BASE_ADDRESS)+0x84))
#define   RCC_DCKCFGR         *((volatile u32*)((RCC_BASE_ADDRESS)+0x8C))
#endif