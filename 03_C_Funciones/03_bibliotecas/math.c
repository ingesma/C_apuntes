#include<stdio.h>
#include<math.h>

int x;
float result; //variable auxiliar

int main()
{
    printf("ingrese el valor de x: ");
    scanf("%d", &x); //recibe un valor de entrada input asignado a la variable x
    result = sin(x); // guardamos resultado en variable auxiliar
    printf("El valor ingresado es:%d \n", x);
    printf("El valor del seno de X es:%f\n", result);

    return 0;
}

/*
lo trabaja en radianes
$ ./"math.exe" 
ingrese el valor de x: 90
El valor ingresado es:90 
El valor del seno de X es:0.893997
*/

