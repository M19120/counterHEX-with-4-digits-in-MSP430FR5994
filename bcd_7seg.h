/*
 * bcd_7seg.h
 *
 *  Created on: 12 oct 2023
 *      Author: martin
 */

#ifndef BCD_7SEG_H_
#define BCD_7SEG_H_

void config_7seg(void){
#define SEG_A BIT0
#define SEG_B BIT1
#define SEG_C BIT2
#define SEG_D BIT3
#define SEG_E BIT4
#define SEG_F BIT5
#define SEG_G BIT6
#define SEG_DP BIT7

#define SEG_OUT P3OUT

#define CT_1 BIT2
#define CT_2 BIT3
#define CT_3 BIT4
#define CT_4 BIT5

#define TR_OUT P1OUT

#define SEG_CLR (0x00)
#define NUM0 (SEG_A|SEG_B|SEG_C|SEG_D|SEG_E|SEG_F)
#define NUM1 (SEG_B|SEG_C)
#define NUM2 (SEG_A|SEG_B|SEG_D|SEG_E|SEG_G)
#define NUM3 (SEG_A|SEG_B|SEG_C|SEG_D|SEG_G)
#define NUM4 (SEG_B|SEG_C|SEG_F|SEG_G)
#define NUM5 (SEG_A|SEG_C|SEG_D|SEG_F|SEG_G)
#define NUM6 (SEG_A|SEG_C|SEG_D|SEG_E|SEG_F|SEG_G)
#define NUM7 (SEG_A|SEG_B|SEG_C)
#define NUM8 (SEG_A|SEG_B|SEG_C|SEG_D|SEG_E|SEG_F|SEG_G)
#define NUM9 (SEG_A|SEG_B|SEG_C|SEG_F|SEG_G)
#define NUM_A (SEG_A|SEG_B|SEG_C|SEG_E|SEG_F|SEG_G)
#define NUM_B (SEG_C|SEG_D|SEG_E|SEG_F|SEG_G)
#define NUM_C (SEG_A|SEG_D|SEG_E|SEG_F)
#define NUM_D (SEG_B|SEG_C|SEG_D|SEG_E|SEG_G)
#define NUM_E (SEG_A|SEG_D|SEG_E|SEG_F|SEG_G)
#define NUM_F (SEG_A|SEG_E|SEG_F|SEG_G)
}



#endif /* BCD_7SEG_H_ */

