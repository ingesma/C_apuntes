// const int COSTHOTDOG = 100;
// const float BILL = 100.58;
// const char NEWLINE = '\n'

#include <stdio.h>
#include <stdlib.h>

#define PIZZACOST 1.5
#define p printf

const char NEWLINE = '\n';

int main (int argc, const char* argv[])
{
    float costPizza;
    float numberOfSlices = 3;

    costPizza = PIZZACOST * numberOfSlices;

    p("%.2f", costPizza);
    p("%c", NEWLINE);

    return 0;
}

//
//Con el comando extern indicamos que una variable la utilizaremos en archivos externos de donde la estamos declarando. Muy útil cuando tenemos multiples archivos de C en un proyecto y una buena práctica también. Indicamos la definición de varables internas donde la vamos a utilizar como en una función por ejemplo.
//
//Es muy importante saber que al exceder el rango de valores se desborda la memoria y el número empieza a contar desde el primer número del rango inferior de nuevo. Post sobre desbordamiento de memoria
//
//Los placeholders o marcadores de posición son etiquetas que le indican al compilador, lo que debe imprimir en el lugar donde se encuentra la etiqueta.
//Para incluir varios placeholders en una misma instrucción printf, solo es necesario ponerlos en la posición en la que se desea reemplazar la etiqueta, y luego poner las variables que serán reemplazadas en el mismo orden en el que se pusieron las etiquetas.
//
//Existen varios placeholders que podemos usar.
//
//<h4>Formato de escritura de variables</h4>
//| Formato | Explicación |
//| %u | Escribe enteros sin signo de 2 bytes (unsigned in) |
//| %d %i | Escribe enteros de 2 bytes (int) |
//| %ld | Escribe enteros de largo alcance (long) |
//| %f | Escribe reales de 4 bytes (float) |
//| %lf | Escribe reales de doble precisión de 8 bytes (double) |
//| %e %E | Escribe el forma exponencial |
//| %g | Despliega un valor en punto flotante %f o en la notación exponencial %e (o %E) |
//| %c | Escribe un caracter de un byte (char) |
//| %s | Escribe una cadena de caracteres, que terminan con \0 |
//
//Si despues de convertir el valor a notación exponencial, el exponente del valor es menor a -4 o es mayor o igual a la precisión especificada usará %e o %E (por omisión en el caso de %g o %G, 6 dígitos significativos). De lo contrario se utilizará %f.