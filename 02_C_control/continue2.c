#include <stdio.h>

int main()
{
    int n = 30; // array de 30 posiciones
    int i; //
    for (i = 0; i <= 10; i++)
    {
        if (i == 5)
        {
            continue; // Cuando i es igual a 5 se termina la iteración y pasa la siguiente.
        }
        printf("\n i = %d", i);
    }
}

