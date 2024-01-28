//#include "stm32f10x.h"
#include "gpio.h"
#include "rcc.h"
void delay(int _Time){// Hàm delay
	unsigned int Count;
	while(_Time--){
		for (Count = 0; Count < 1000; Count++);
	}
}


int main (void){
	
	//RCC->APB2ENR |= RCC_APB2ENR_IOPCEN;
	RCC->APB2_ENR.IOPCEN  = 1; 
	GPIO_C->GPIO_CRH.MODE_13 = 0x11;
	GPIO_C->GPIO_CRH.CNF_13  = 0x00;
	while(1){
		GPIO_C->GPIO_ODR.ODR_13 = !GPIO_C->GPIO_ODR.ODR_13; 
		delay(1000); 
	}
}

