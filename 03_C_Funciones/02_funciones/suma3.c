#include <stdio.h>
int a, b;
    a = 100;
    b = 100;
int add(int a, int b); //declarando función

int main()
{
    //add(100, 100); //ejecutando o llamando a la función   //The result is: 4199786
    printf("The result is: %d", add(100, 100)); //The result is: 200
    return 0;
}

int add(int a, int b)
{
    int add; //definiendo la lógica de la función
    //int a, b, sum;
    //a = 100;
    //b = 100;
    add = a + b;
    //printf("The result is: %d", add);
    return add;
}


//$ ./"suma3.exe"
//The result is: 4199786
