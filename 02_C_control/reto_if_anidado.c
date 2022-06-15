#include <stdio.h>
int opt1 = 2;
int opt2 = 0;

int main(){
    printf("bienvenido a platzi store :\n");
    printf("opcion 0 para platzi bebidas \n");
    printf("opcion 1 para platzi comidas \n");
    printf("opcion 2 para platzi postres \n");

    // este programa genera menus segun lo que el usuario elija
    if(opt1 == 0){
        printf("usted eligio la opcion 0, vera nuestro menu de bebidas elija una:\n");
        printf("opcion 0 para platzi cola cero \n");
        printf("opcion 1 para platzi cola normal \n");
        printf("opcion 2 para platzi pina colada \n");

        if (opt2 == 0)
            printf("usted eligio una platzi cola cero, mmm rico");
        else if (opt2 == 1)
            printf("usted eligio una platzi cola cpn azucar, mmm rico");
        else if (opt2 == 2)
            printf("usted eligio una platzi pina colada con azucar, mmm rico");
        else 
            printf("opcion invalida. Asegurese de escoger una opcion entre 0 y 2 en la opcion 2");
    }
    else if(opt1 ==1){
        //aqui va el menu de alimentos
        printf("usted eligio la opcion 1, vera nuestro menu de comidas elija una:\n");
        printf("opcion 0 para pavo asado \n");
        printf("opcion 1 para pescado frito \n");
        printf("opcion 2 para arroz con camarones \n");
        printf("opcion 3 para cordero al horno \n");

        if (opt2 == 0)
            printf("Usted eligio un delicioso pavo asado. Buen provecho!");
        else if (opt2 == 1)
            printf("Usted eligio un delicioso plato de pescado frito. Buen provecho!");
        else if (opt2 == 2)
            printf("Usted eligio un delicioso plato de arroz con camarones. Buen provecho!");
        else if (opt2 == 3)
            printf("Usted eligio un delicioso cordero al horno. Buen provecho!");
        else 
            printf("Opcion invalida. Asegurese de escoger una opcion entre 0 y 3 en la opcion 2");
    }
    else if(opt1 ==2){
        //aqui va el menu de postres
        if (opt2 == 0)
            printf("Usted eligio un postre de tres leches!");
        else if (opt2 == 1)
            printf("Usted eligio un postre de arroz con leche!");
        else if (opt2 == 2)
            printf("Usted eligio un postre de requesón!");
        else if (opt2 == 3)
            printf("Usted eligio un postre de buñuelos!");
        else 
            printf("Opcion invalida. Asegurese de escoger una opcion entre 0 y 3 en la opcion 2");
    }
    else {
        // mensaje de manejo de opcion invalida
        printf("Opcion invalida. Asegurese de escoger una opcion entre 0 y 2 en la opcion 1");
    }

    return 0;
}