#include <stdio.h>

void demo(); //declarando función

int main()
{
    demo(); //ejecutando o llamando a la función
    return 0;
}

void demo()
{
    int a, b, sum; //definiendo la lógica de la función
    a = 100;
    b = 100;
    sum = a + b;
    printf("El resultado es %i", sum);
}

