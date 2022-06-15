#include <stdio.h>

int main()
{
    int n = 30; // array de 30 posiciones
    int i; //
    for (i = 0; i < n; i++)
    {
        continue; //evita que se imprima la iteración
        printf("el valor actual de i es %d \n", i);
    }
    printf("el valor actual de i es %d \n", i);
    printf("se hicieron las %d \n", i);
}

