#include <stdio.h>
#include <math.h>

//Variable Declartions

int a, b, c;
float f, g, h;

int main()
{
    //Variable initialization
    a = 1;
    b = 2147483648; //sobrepasa memmoria de int
    
    c = a+b;
    printf("Value of sum is: %d", c);
    return 0;
}


