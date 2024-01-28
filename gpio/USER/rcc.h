#ifndef _RCC_H_
#define _RCC_H_

#include<stdint.h>

typedef struct
{
	uint32_t CR;
  uint32_t CFGR;
  uint32_t CIR;
  uint32_t APB2RSTR;
  uint32_t APB1RSTR;
  uint32_t AHBENR;
 	struct{
		
		unsigned long AFIOEN 	   		: 1;
		unsigned long RESERVED_1 		: 1;
		unsigned long IOPAEN 			  : 1;
		unsigned long IOPBEN 			  : 1;
		unsigned long IOPCEN 			  : 1;
		unsigned long IOPDEN 			  : 1;
		unsigned long IOPEEN 			  : 1;
		unsigned long IOPFEN 			  : 1;
		unsigned long IOPGEN 			  : 1;
		unsigned long ADC1EN 	  	  : 1;
		unsigned long ADC2EN 	  	  : 1;
		unsigned long TIM1EN        : 1;
		unsigned long SPI1EN        : 1;
		unsigned long TIM8EN 		    : 1;	
		unsigned long USART1EN 		  : 1;		
		unsigned long ADC3EN        : 1;
		unsigned long RESERVED_2 		: 3;
		unsigned long TIM9EN 		    : 1;		
		unsigned long TIM10EN 		  : 1;		
		unsigned long TIM11EN 		  : 1;	
		
	}APB2_ENR;
	uint32_t APB1ENR;
  uint32_t BDCR;
  uint32_t CSR;

}RCC_TypeDef;


#define RCC   ((RCC_TypeDef*)0x40021000)

#endif
