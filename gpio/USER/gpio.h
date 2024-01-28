#ifndef _GPIO_H_
#define _GPIO_H_

typedef struct
{
  struct{
		
		unsigned long MODE_0  : 2;
		unsigned long CNF_0   : 2;
		unsigned long MODE_1  : 2;
		unsigned long CNF_1   : 2;
		unsigned long MODE_2  : 2;
		unsigned long CNF_2   : 2;
		unsigned long MODE_3  : 2;
		unsigned long CNF_3   : 2;
		unsigned long MODE_4  : 2;
		unsigned long CNF_4   : 2;
		unsigned long MODE_5  : 2;
		unsigned long CNF_5   : 2;
		unsigned long MODE_6  : 2;
		unsigned long CNF_6   : 2;
		unsigned long MODE_7  : 2;
		unsigned long CNF_7   : 2;
		
	}GPIO_CRL;
	
  struct{
		
		unsigned long MODE_8   : 2;
		unsigned long CNF_8    : 2;
		unsigned long MODE_9   : 2;
		unsigned long CNF_9    : 2;
		unsigned long MODE_10  : 2;
		unsigned long CNF_10   : 2;
		unsigned long MODE_11  : 2;
		unsigned long CNF_11   : 2;
		unsigned long MODE_12  : 2;
		unsigned long CNF_12   : 2;
		unsigned long MODE_13  : 2;
		unsigned long CNF_13   : 2;
		unsigned long MODE_14  : 2;
		unsigned long CNF_14   : 2;
		unsigned long MODE_15  : 2;
		unsigned long CNF_15   : 2;
		
	}GPIO_CRH;
	
 	struct{
		unsigned long IDR_0 : 1;
		unsigned long IDR_1 : 1;
		unsigned long IDR_2 : 1;
		unsigned long IDR_3 : 1;
		unsigned long IDR_4 : 1;
		unsigned long IDR_5 : 1;
		unsigned long IDR_6 : 1;
		unsigned long IDR_7 : 1;
		unsigned long IDR_8 : 1;
		unsigned long IDR_9 : 1;
		unsigned long IDR_10 : 1;
		unsigned long IDR_11 : 1;
		unsigned long IDR_12 : 1;
		unsigned long IDR_13 : 1;
		unsigned long IDR_14 : 1;
		unsigned long IDR_15 : 1;
	}GPIO_IDR;
	
	struct{
		unsigned long ODR_0 : 1;
		unsigned long ODR_1 : 1;
		unsigned long ODR_2 : 1;
		unsigned long ODR_3 : 1;
		unsigned long ODR_4 : 1;
		unsigned long ODR_5 : 1;
		unsigned long ODR_6 : 1;
		unsigned long ODR_7 : 1;
		unsigned long ODR_8 : 1;
		unsigned long ODR_9 : 1;
		unsigned long ODR_10 : 1;
		unsigned long ODR_11 : 1;
		unsigned long ODR_12 : 1;
		unsigned long ODR_13 : 1;
		unsigned long ODR_14 : 1;
		unsigned long ODR_15 : 1;
	}GPIO_ODR;
	
  struct{
	 	struct{
			unsigned short BS_0 : 1;
			unsigned short BS_1 : 1;
			unsigned short BS_2 : 1;
			unsigned short BS_3 : 1;
			unsigned short BS_4 : 1;
			unsigned short BS_5 : 1;
			unsigned short BS_6 : 1;
			unsigned short BS_7 : 1;
			unsigned short BS_8 : 1;
			unsigned short BS_9 : 1;
			unsigned short BS_10 : 1;
			unsigned short BS_11 : 1;
			unsigned short BS_12 : 1;
			unsigned short BS_13 : 1;
			unsigned short BS_14 : 1;
			unsigned short BS_15 : 1;
	  }GPIO_BS;
	
	 	struct{
			unsigned short BR_0 : 1;
			unsigned short BR_1 : 1;
			unsigned short BR_2 : 1;
			unsigned short BR_3 : 1;
			unsigned short BR_4 : 1;
			unsigned short BR_5 : 1;
			unsigned short BR_6 : 1;
			unsigned short BR_7 : 1;
			unsigned short BR_8 : 1;
			unsigned short BR_9 : 1;
			unsigned short BR_10 : 1;
			unsigned short BR_11 : 1;
			unsigned short BR_12 : 1;
			unsigned short BR_13 : 1;
			unsigned short BR_14 : 1;
			unsigned short BR_15 : 1;
		}GPIO_BR;
		
	}GPIO_BSRR;
  struct{
		
		unsigned long BRR_0 : 1;
		unsigned long BRR_1 : 1;
		unsigned long BRR_2 : 1;
		unsigned long BRR_3 : 1;
		unsigned long BRR_4 : 1;
		unsigned long BRR_5 : 1;
		unsigned long BRR_6 : 1;
		unsigned long BRR_7 : 1;
		unsigned long BRR_8 : 1;
		unsigned long BRR_9 : 1;
		unsigned long BRR_10 : 1;
		unsigned long BRR_11 : 1;
		unsigned long BRR_12 : 1;
		unsigned long BRR_13 : 1;
		unsigned long BRR_14 : 1;
		unsigned long BRR_15 : 1;
		
	}GPIO_BRR;
  struct{
		
	  unsigned long LCKR_0 : 1;
		unsigned long LCKR_1 : 1;
		unsigned long LCKR_2 : 1;
		unsigned long LCKR_3 : 1;
		unsigned long LCKR_4 : 1;
		unsigned long LCKR_5 : 1;
		unsigned long LCKR_6 : 1;
		unsigned long LCKR_7 : 1;
		unsigned long LCKR_8 : 1;
		unsigned long LCKR_9 : 1;
		unsigned long LCKR_10 : 1;
		unsigned long LCKR_11 : 1;
		unsigned long LCKR_12 : 1;
		unsigned long LCKR_13 : 1;
		unsigned long LCKR_14 : 1;
		unsigned long LCKR_15 : 1;
		unsigned long LCKR_16 : 1;
	}GPIO_LCKR;
	
} Gpio_TypeDef;

#define GPIO_A   ((Gpio_TypeDef*)0x40010800)
#define GPIO_B   ((Gpio_TypeDef*)0x40010C00)
#define GPIO_C   ((Gpio_TypeDef*)0x40011000)
#define GPIO_D   ((Gpio_TypeDef*)0x40011400)
#define GPIO_E   ((Gpio_TypeDef*)0x40011800)

#endif
