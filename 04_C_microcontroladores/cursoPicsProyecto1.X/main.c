/*
 * File:   main.c
 * Author: ricar
 * este código parpadea un led
 * Created on February 11, 2020, 8:53 AM
 */

#define _XTAL_FREQ 8000000

#include <xc.h>
#include "pic18f4550Configs.h"
// 0 = Output y 1 = input
void main(void) {
    
    TRISB2 = 0; // TRIS se utiliza para definir si un pin va a ser entra o salida
    TRISB0 = 1;
    while(1)
    {
        if(PORTBbits.RB0 == 1)
        {
            LATBbits.LATB2 = 1;
        }
        else {
            LATBbits.LATB2 = 0;
        }
        
        
        /*
        LATB0 = 1; // esto enciende nuestro led
        LATB1 = 1;
        LATB2 = 1;
        __delay_ms(30);
        LATB0 = 0;
        LATB1 = 0;
        LATB2 = 0;
        __delay_ms(30);
     */
    }
    return;
}
