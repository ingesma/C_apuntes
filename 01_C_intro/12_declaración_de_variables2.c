#include <stdio.h>
#include <math.h>

//Variable Declartions

int a, b, c, d, e;
float f, g, h;

int main()
{
    //Variable initialization
    a = 1;
    b = 30;
    //We want to calculate (a+b)/(1+a*b/30^2)
    c = (a+b);
    d = a*b;
    e = pow(30,2);
    f = (float)d/e;
    g = f+1;
    h = c/g;

    printf("Value of sum %f", h);
    return 0;
}


//*Placeholders usados en C
//%c - a character (caracter)
//%s - a string (alfanumérico o cadena)
//%d - a decimal integer (numero entero): Se utiliza para representar una parte de la memoria como un número entero.
//%o - an octal integer (numero octal)
//%x - a hexadecimal integer (numero hexadecimal)
//%f - for floats (decimal) *//


//VALORES ENTEROS:
//
//int = 4 Bytes (-2147483648 to 2147483647)
//
//unsigned int = 4 Bytes (0 to 4294967295)
//
//short = 2 Bytes (-32768 to 32767)
//
//unsigned short = 2 Bytes (0 to 65535)
//
//long = 8 Bytes (-9223372036854775808 to 9223372036854775807)
//
//unsigned long = 8 Bytes (0 to 18446744073709551615)
//
//FLOTANTES:
//
//float = 4 Bytes (1.2E-38 to 3.4E+38) 6 decimal places
//
//double = 8 Bytes (2.3E-308 to 1.7E+308) 15 decimal places
//
//long double = 10 Bytes (3.4E-4932 to 1.1E+4932) 19 decimal places
//
//CARÁCTER:
//
//char = 1 Byte (-128 to 127)
//
//unsigned char = 1 Byte (0 to 255)

