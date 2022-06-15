#include <stdio.h> 

int power(int base, int n);  //declarando función

int main() //int main(int argc, char **argv) //declarar acción   //ejecutando o llamando a la función
{
    int n;
    n=3;
    printf("n = %d El resultado de la potencia = %d\n", n, power(2,n)); // estamos declarando llamando a la función power y pasando el 3 pasando las cosas por valor no por referencia
    printf("El valor del exponente original sigue siendo: %d\n", n);
    //borro el ciclo for
    /*int i; 
    int n = 10;
    for (i = 0; i < n; i++)
    {
        printf("n = %d El resultado de la potencia = %d\n", i, power(2,i));// va a ir diciendo el valor de n cada vez
    }*/
    return 0;
}
int power(int base, int n) // definir función para retornar una potencia // al pasar este argumento a la función c genera una copia
{
    //int i, p;
    int p;
    //p = 1;
    //for (i = 1; i <= n; i++) //el programa trabaja con una copia del valor pasado no con la variable original
    for (p = 1; n > 0; n--) // voy a utilizar n para hacer la lógica directo ir restando a n hasta que la condicion se deje de cumplir
    {
        p = p* base;
        printf("el valor temporal de n es: %d\n", n);
    }
    return p;
}

/* no estamos modificando n sino la copia de n
$ ./"powerofintegers02.exe" 
el valor temporal de n es: 3
el valor temporal de n es: 2
el valor temporal de n es: 1
n = 3 El resultado de la potencia = 8
El valor del exponente original sigue siendo: 3
*/
