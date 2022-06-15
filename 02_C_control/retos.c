//Reto 1 y 2 (pedir nombre y apellido)
#include <stdio.h>

char nombre[15], apellido[15];

int main()
{
    printf("Como te llamas?: ");
    scanf("%s", &nombre);
    printf("Como te apellidas?: ");
    scanf("%s", &apellido);
    printf("Hola %s %s!\n", nombre, apellido);
    return 0;
}

//Reto 3 mensajes multilinea
#include <stdio.h>
int main()
{
    printf("Platzi cuenta con cursos de: \n");
    printf("[Desarrollo e Ingenieria]\n");
    printf("[Marketing]\n");
    printf("[Diseno y UX]\n");
    printf("[Negocios]\n");
    printf("[Ingles]\n");
    return 0;
}

//Reto 4 y 5 Suma de enteros y multiplicacion 
#include <stdio.h>
float a, b, c, d;

int main()
{
    printf("Introduce un numero: \n");
    scanf("%f", &a);
    printf("Introduce otro numero: \n");
    scanf("%f", &b);
    printf("Introduce otro numero: \n");
    scanf("%f", &c);
    d = (a + b) * c;
    printf("El resultado de la suma es igual a: %f \n", d);
    return 0;
}

//Reto 6 cuantas pizzas quedan?
#include <stdio.h>

int x;

int main()
{
    printf("Cuantas pizzas traes?: \n");
    scanf("%d", &x);
    while (x != 0)
    {
        int y = 0;
        int z = 0;
        printf("Cuantas rebanadas de pizza quieres tomar?: \n");
        scanf("%d", &y);
        z = x - y;
        x -= y;
        printf("Quedan en total %d pizzas. \n", z);
    }
    
    printf("Lo siento Uwu");
    
    return 0;
}

//Reto 7 Edad futura y pasada
#include <stdio.h>
int edad, x, y;
char nom[25];

int main()
{
    printf("Hola!, Como te llamas?: \n");
    scanf("%s", &nom);
    printf("Cuantos anos tienes?: \n");
    scanf("%d", &edad);

    x = edad - 1;
    y = edad + 1;
    printf("%s el ano pasado tenias %d y el proximo ano cumpliras %d \n", nom, x, y);
    return 0;
}

//Reto 8 divide la cuenta
#include <stdio.h>
int  personas;
float cuenta, porcentaje, propina, iva, total, cu;

int main()
{
    printf("Cuanto fue de la cuenta?: \n");
    scanf("%f", &cuenta);
    printf("Cuanto quieres dejar de propina?: \n");
    //dar el numero con punto decimal
    scanf("%f", &porcentaje);
    printf("Cuantas personas son?: \n");
    scanf("%d", &personas);

    iva = cuenta * 0.15;
    propina = cuenta * porcentaje;
    total = cuenta + iva + propina;
    cu = total / personas;

    printf("El total de la cuenta con todo y propina e iva es %f y seran %f entre cada uno\n", total, cu);
    return 0;
}

//Reto 9 Calculando días 
#include <stdio.h>
int dias, horas, minutos, segundos;
 
int main()
{
    printf("Cuantos dias han pasado?\n");
    scanf("%d", &dias);

    horas = dias * 24;
    minutos = horas * 60;
    segundos = minutos * 60;
    printf("Hay %d segundos en %d minutos en %d horas en %d dias\n", segundos, minutos, horas, dias);
    return 0;
}

//Reto 10 conversor de millas
#include <stdio.h>
float millas, metros;

int main()
{
    printf("Cuantas millas son?: \n");
    scanf("%f", &millas);

    metros = millas * 1.609344;
    printf("El resultado de la conversion de millas a metros es de:%f \n", metros);    
    return 0;
}

//Reto 11 Cuantas veces un numero en otro
#include <stdio.h>
int mayor, menor;
float numero;

int main()
{
    printf("Introduce un numero menor a 100\n");
    scanf("%d", &menor);
    printf("Introduce un numero mayor a 1000\n");
    scanf("%d", &mayor);
    if (menor < 100 && mayor > 1000)
    {
        numero = mayor / menor;
        printf("El numero %d cabe %f veces en el %d\n", menor, numero, mayor);
    }
    
    return 0;
}