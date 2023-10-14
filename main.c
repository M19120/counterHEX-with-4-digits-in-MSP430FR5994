#include <msp430fr5994.h>
#include "bcd_7seg.h"


const unsigned char coding[16]={
    NUM0,NUM1,NUM2,NUM3,NUM4,NUM5,NUM6,NUM7,NUM8,NUM9,
    NUM_A,NUM_B,NUM_C,NUM_D,NUM_E,NUM_F
};

const unsigned char transistores[4]={
    CT_4,CT_3,CT_2,CT_1
};
void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;
    unsigned int counter,number;
    unsigned long i,j; // i: funciona para el ciclo de obtencion de valores ,j: para retardo entre displays
    unsigned long delay=0,aux=0;// aux: funciona para guardar el restante
    config_bcd(); //se manda llamar la función

    for(;;){
        aux = counter;
        for(i=0;i<3;i++){ //imprimir 4 displays
            for(j=0;j<500;j++); //evitar interferencias enre displays
                TR_OUT= transistores[i];
                number= aux&0xFF;
                SEG_OUT= coding[number];
                aux<<=4;
        }
        delay++;
        if(delay>70){
            delay=0;
            counter++;
            unsigned int clear= SEG_CLR;
        }
    }
}

void config_bcd(void){
    P3OUT |= 0xFF;
    P3DIR |= 0xFF;
    P3REN = 0;
    //P3SEL = 0;
    //P3SEL2=0; // vinculación de puertos a GPIO

    P1OUT|= 0x00;
    P1DIR = BIT2|BIT3|BIT4|BIT5;
    P2REN=0;
   // P1SEL=0;
   // P1SEL2= 0;


}

