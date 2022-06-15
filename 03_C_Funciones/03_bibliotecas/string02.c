#include <stdio.h>
#include <string.h>

char string1[60]; //cadena
char string2[60];

int main()
{
    

    printf("Escribe una frase\n");
    gets(string1);

    //strrev(string1);//nuestro string en reversa
    //printf("el string al reves es: %s\n", string1);
    
    gets(string2);
    
    if (strcmp(string1, string2) == 0) // compara las string --> si son iguales retorna 0
        printf("Ingresaste dos strings identicos\n");
    else
    {
        strcat(string1, string2);
        printf("Ingresaste dos cosas distintas, si las unimos el resultado es> %s\n", string1);
    }        
    return 0;
}

/* salida
$ ./"strcmp.exe" 
Escribe una frase
el lenguaje
es c
Ingresaste dos cosas distintas, si las unimos el resultado es> el lenguajees c
*/
