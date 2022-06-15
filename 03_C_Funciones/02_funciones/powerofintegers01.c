#include <stdio.h> 

int power(int base, int n);  //declarando función

int main() //int main(int argc, char **argv) //declarar acción   //ejecutando o llamando a la función
{
    int i;
    int n = 10;
    for (i = 0; i < n; i++)
    {
        printf("n = %d El resultado de la potencia = %d\n", i, power(2,i));// va a ir diciendo el valor de n cada vez
    }
    return 0;
}
int power(int base, int n) // definir función para retornar una potencia
{
    //int i, p;
    int p;
    //p = 1;
    //for (i = 1; i <= n; i++) //el programa trabaja con una copia del valor pasado no con la variable original
    for (p = 1; n > 0; n--) // voy a utilizar n para hacer la lógica directo ir restando a n hasta que la condicion se deje de cumplir
    {
        p = p* base;
    }
    return p;
}

/* no estamos modificando n sino la copia de n
n = 4 El resultado de la potencia = 16
n = 5 El resultado de la potencia = 32
n = 6 El resultado de la potencia = 64
n = 7 El resultado de la potencia = 128
n = 8 El resultado de la potencia = 256
n = 9 El resultado de la potencia = 512
*/
