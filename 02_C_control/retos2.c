/*He reutilizado varias variables y comentado todo el codigo para no estar creando
nuevas variables o nuevos archivos para cada reto. Esta escrito en C.
Espero esto le sirva a alguien XD*/
#include <stdio.h>
#include <stdlib.h>

char name[10];
char surname[10];
int edad, edadX, edadY;

float x, y, z;
float resultado, resultadoFinal;

float friend;
//Variables reto 6
int xPizza;
int yPizza;
int resultadoPizza;
//variables reto 9
int xDay, dayHour, dayMin, daySec;
//Variables reto 10
int opt;
float cant, resultadoConversion;
//Variables reto 11
float num1, num2, resultadoNum;

int main()
{
    //Reto 1
    /* 
    printf("Reto 1\n\n");
    printf("Escribe tu nombre: %s",name);
    scanf("%s",name);
    printf("Hola, %s \n\n",name);
    */

    //Reto 2
    /*
    printf("Reto 2 \n\n");
    printf("Escribe tu nombre: %s",name);
    scanf("%s",name);
    printf("Escribe tu apellido: %s", surname);
    scanf("%s", surname);
    printf("Hola, %s %s",name , surname);
    */

    //Reto 3 
    

    //Reto 4
    /*
    printf("Reto 4\n");

    printf("Ingrese x: ");
    scanf("%f", &x);
    printf("Ingrese y: ");
    scanf("%f", &y);

    resultado = x + y;

    printf("El resultado de la suma es: %f ", resultado);
    */

    //Reto 5
    /*
    printf("Reto 5\n");
    
    printf("Ingrese x: ");
    scanf("%f", &x);
    printf("Ingrese y: ");
    scanf("%f", &y);
    printf("Ingrese z: ");
    scanf("%f", &z);

    resultado = (x + y )* z;
    printf("El resultado de sumar %f y %f y despues multiplicarlo por %f es: %f ", x , y , z , resultado);
    */

    //Reto 6
    /*
    printf("========================================================\n");
    printf("=======Bienvenido al sistema de control de Pizza========\n");
    printf("========================================================\n\n");
    
    printf("1.-Cuantos pedazos de Pizza haz traido: ");
    scanf("%d", &xPizza );
    printf("\n");
    printf("2.-Cuantos pedazos de Pizza te haz comido : ");
    scanf("%d", &yPizza);
    printf("\n");

    resultadoPizza = xPizza - yPizza;

    printf("Quedan %d pedazos de pizza ", resultadoPizza);
    */

    //Reto 7
    /*
    printf("Reto 7 \n\n");
    printf("Escribe tu primer nombre:");
    scanf("%s", &name);
    printf("Escribe tu primer apellido:");
    scanf("%s", &surname);
    printf("Cual es tu edad actual:");
    scanf("%d", &edad);
    edadX = edad - 1;
    edadY = edad + 1;
    printf("%s %s el a%co pasado tenias %d y el proximo a%co tendras %d", name , surname , 164 , edadX, 164 , edadY);
    */

    //Reto 8
    /*
    printf("==========================\n");
    printf("=====Divide la cuenta=====\n");
    printf("==========================\n\n");

    printf("Total a pagar: ");
    scanf("%f", &x);
    printf("Total amigos: ");
    scanf("%f", &y);
    printf("Porcentaje de propina a dejar: ");
    scanf("%f", &z);
    printf("\n");

    z = z/100;
    resultado = ((x + (0.15 * x)) / y);
    resultadoFinal = resultado + ( z* resultado);

    printf("A cada persona le toca pagar: %f", resultadoFinal);
    */

    //Reto 9
    /*
   printf("   =============================\n");
   printf("   ====== Calculando dias ======\n");
   printf("   =============================\n\n");

   printf(" - Ingresa la cantidad de dias: ");
   scanf("%d", &xDay);
   printf("\n");

   dayHour = xDay * 24;
   dayMin = 1440 * xDay;
   daySec = 86400 * xDay;

   printf(" - Total horas en %d dias: %d horas \n", xDay , dayHour);
   printf(" - Total minutos en %d dias: %d minutos\n", xDay , dayMin);
   printf(" - Total segundos en %d dias: %d segundos\n\n", xDay , daySec);
    */
    //Reto 10
    /*
    printf("   =================================================\n");
    printf("   ====== Convertidor de unidades de longitud ======\n");
    printf("   =================================================\n\n");

    printf("   Elige una de las siguientes opciones de conversion\n\n");
    //KM a
    printf("1- Kilometros a Metros\n");
    printf("2- Kilometros a Millas\n\n");
    //Millas a
    printf("3- Millas a Kilometros\n");
    printf("4- Millas a Metros\n\n");
    //Metros a
    printf("5- Metros a Kilometros\n");
    printf("6- Metros a Millas\n\n");
    printf(" - Que tipo de conversion eliges: ");
    scanf("%d", &opt);
    printf("\n");

    //Kilometros a Metros
    if (opt == 1)
    {
        printf("   ======================================================\n\n");
        printf("   ========== Seleccionaste Kilometros a Metros =========\n\n");
        printf("   ======================================================\n\n");
        printf(" - KM a Metros: ");
        scanf("%f", &cant);

        printf("\n");

        resultadoConversion = cant * 1000;

        printf("   La conversion de %f km a metros es de: %f m", cant, resultadoConversion);
    }
    //Kilometros a Millas
    elseif (opt == 2)
    {
        printf("   ======================================================\n\n");
        printf("   ========== Seleccionaste Kilometros a Millas =========\n\n");
        printf("   ======================================================\n\n");
        printf(" - KM a Millas: ");
        scanf("%f", &cant);

        printf("\n");

        resultadoConversion = cant / 1.609344;

        printf("   La conversion de %f km a millas es de: %f mi\n", cant, resultadoConversion);
    }
    //Millas a Kilometros
    elseif (opt == 3)
    {
        printf("   ======================================================\n\n");
        printf("   ========== Seleccionaste Millas a Kilometros =========\n\n");
        printf("   ======================================================\n\n");
        printf(" - Millas a Kilometros: ");
        scanf("%f", &cant);

        printf("\n");

        resultadoConversion = cant * 1.60934;

        printf("   La conversion de %f mi a km es de: %f km\n", cant, resultadoConversion);
    }
    //Millas a Metros
    elseif (opt == 4)
    {
        printf("   ==================================================\n\n");
        printf("   ========== Seleccionaste Millas a metros =========\n\n");
        printf("   ==================================================\n\n");
        printf(" - Millas a Metros: ");
        scanf("%f", &cant);

        printf("\n");

        resultadoConversion = cant * 1609.34;

        printf("   La conversion de %f mi a m es de: %f m\n", cant, resultadoConversion);
    }
    //Metros a Kilometros
    elseif (opt == 5)
    {
        printf("   ======================================================\n\n");
        printf("   ========== Seleccionaste Metros a Kilometros =========\n\n");
        printf("   ======================================================\n\n");
        printf(" - Metros a Kilometros: ");
        scanf("%f", &cant);

        printf("\n");

        resultadoConversion = cant * 0.001;

        printf("   La conversion de %f m a km es de: %f km\n", cant, resultadoConversion);
    }
    //Metros a Millas
    elseif (opt == 6)
    {
        printf("   ==================================================\n\n");
        printf("   ========== Seleccionaste Metros a Millas =========\n\n");
        printf("   ==================================================\n\n");
        printf(" - Metros a Millas: ");
        scanf("%f", &cant);

        printf("\n");

        resultadoConversion = cant * 0.000621371;

        printf("   La conversion de %f m a mi es de: %f mi\n", cant, resultadoConversion);
    }
    else
    {
        printf("   Opcion invalida!");
    }*/
    //Reto 11
    /*
    printf("   ==================================================\n\n");
    printf("   ====== Cuantas veces cabe un numero en otro ======\n\n");
    printf("   ==================================================\n\n");

    printf("   Ingresa un numero mayor a 1000: ");
    scanf("%f", &num1);
    printf("\n");
    printf("   Ingresa un numero menor a 100: ");
    scanf("%f", &num2);

    printf("\n");

    if (num1 >= 1000 && num2 <= 100)
    {
        printf("   Tu numero a mayor a mil es %g y tu numero menor a cien es %g\n\n", num1, num2);
        resultadoNum = num1 / num2;
        printf("   Tu numero menor a cien cabe %g veces en tu numero mayor a mil ", resultadoNum);

    }
    else
    {
        printf("   Error!... Ingresa un numero mayor a 1000 y uno menor 100");
    }
    */
}