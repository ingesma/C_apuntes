#include <stdio.h> 

int power(int base, int n);  //declarando función

int main() //int main(int argc, char **argv) //declarar acción   //ejecutando o llamando a la función
{
    int i;
    int n = 10;
    for (i = 0; i < n; i++)
    {
        printf("n = %d El resultado de la potencia = %d\n", i, power(2,i));//
    }
    return 0;
}
int power(int base, int n) // definir función para retornar una potencia
{
    int i, p;
    p = 1;
    for (i = 1; i <= n; i++) //el programa trabaja con una copia del valor pasado no con la variable original
    {
        p = p* base;
    }
    return p;
}

      