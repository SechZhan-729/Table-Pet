#ifndef __EXTERNAL_INTERRUPT_H
#define __EXTERNAL_INTERRUPT_H

extern volatile uint8_t obstacle_flag;
void EXTI0_PB0_Init(void);
void EXTI0_IRQHandler(void);

#endif
