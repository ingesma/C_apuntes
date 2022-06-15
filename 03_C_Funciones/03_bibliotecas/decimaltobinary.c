// 1er paso Dividir el valor entre 2 yalmacenar el resto, mod, en un array
// 2do paso dividir otra vez entre 2 y almacenar el restante 
// repetir hasta que nuestro nÃºmero ya no se pueda dividir 

#include <stdio.h>
#include <stdlib.h>

int binaryNumber[12],n,i; //declaro el array

main()
{   
    system("cls");//arguments directo al sistema
    system("color 9F");
    printf("Ingrese un valor decimal\n");
    scanf("%d", &n);  //recibe un valor de entrada input variable n
    printf("Usted va a convetir el numero %d a binario\n",n);
    
    for ( i = 0; n > 0; i++) // repetir hasta que ya no se pueda dividir n

    {//array... serie de vectores que comienza en 0
        binaryNumber[i]= n%2;//almacenar el resto, mod, en un array... serie de vectores
        n = n/2; //Dividir el valor entre 2 
    }

    printf("El resultado de la conversion es: ");
    for ( i= i-1 ; i >= 0; i--) //desde i= i-1 la posición real del array vamos descontando
    {
        printf("%d",binaryNumber[i]);//vamos a sacar las posiciones del array 
    }
    
    return 0;
}