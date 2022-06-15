#include <stdio.h>
#include <time.h>

time_t seconds; //time definitions

int main()
{
    seconds = time( NULL);
    printf("El numero de horas desde EPOCH 1ro de Enero de 1970 a las 00:00 es:%ld \n", seconds/3600);//pasarlo a horas
    return 0;
}

