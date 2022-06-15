#include <stdio.h>
#include <time.h>

time_t begin, end;

int main()
/*
tomar referencia de tiempo de un punto a otro
*/
{
    
    long i; //auxiliar i
    begin = time(NULL); //da el tiempo a la fecha
    for (i = 0; i < 600000000; i++); //consumidor de recursos
    end = time(NULL); //cuando termine el ciclo for vamos a reflejar el nuevo tiempo
    printf("El tiempo que duro nuestro for es: %f \n", difftime(end, begin)); //diferencial de tiempo
    return 0;
}

/*
$ ./"timedif.exe"
El tiempo que duro nuestro for es: 1.000000 
*/