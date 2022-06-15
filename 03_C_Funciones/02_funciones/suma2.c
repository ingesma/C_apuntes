#include <stdio.h>
int a, b;
    a = 100;
    b = 100;
void add(int a, int b); //declarando función

int main()
{
    add(100, 100); //ejecutando o llamando a la función
    return 0;
}

void add(int a, int b)
{
    int add; //definiendo la lógica de la función
    //int a, b, sum;
    //a = 100;
    //b = 100;
    add = a + b;
    printf("The result is: %d", add);
}


