#include <stdio.h>
#include <string.h>

char string1[60]; //cadena
char string2[60];

int main()
{
    

    printf("Escribe una frase\n");
    gets(string1);

    strrev(string1);//nuestro string en reversa

    printf("el string al reves es: %s\n", string1);
    
    return 0;
}

/* salida
$ ./"string01.exe"
Escribe una frase
anita lava la tina
el string al reves es: anit al aval atina
*/
