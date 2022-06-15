#include <stdio.h>
int op1 = 1;
int op2 = 0;

int main()
{
    printf("Bienvenido a platzi store: \n");
    printf("Opcion 0 para platzi bebidas \n");
    printf("Opcion 1 para platzi comidas \n");
    printf("Opcion 2 para platzi postres \n");
    switch (op1)
    {
        case 0:
            printf("Usted eligio la opcion 0, vera nuestro menu de bebidas elija una:\n");
            printf("Opcion 0 para platzi cola cero \n");
            printf("Opcion 1 para platzi cola normal \n");
            printf("Opcion 2 para platzi piña colada \n");
            switch (op2)
            {
                case 0:
                    printf("Usted eligio una platzi cola cero, mmm rico");
                break;
                case 1:
                    printf("Usted eligio una platzi cola con azucar, mmm rico");
                break;
                case 2:
                    printf("Usted eligio una platzi piña colada con azucar, mmm rico");
                break;
                default:
                    printf("Opcion invalida");
                break;
            }
        break;
        case 1:
            printf("Usted eligio la opcion 1, vera nuestro menu de comidas elija una:\n");
            printf("Opcion 0 para platzi Hamburguesa \n");
            printf("Opcion 1 para platzi Perro Caliente \n");
            printf("Opcion 2 para platzi Pizza \n");
            switch (op2)
            {
                case 0:
                    printf("Usted eligio una Hamburguesa, mmm rico");
                break;
                case 1:
                    printf("Usted eligio un Perro Caliente, mmm rico");
                break;
                case 2:
                    printf("Usted eligio una Pizza, mmm rico");
                break;
                default:
                    printf("Opcion invalida");
                break;
            }
        break;
        case 2:
            printf("Usted eligio la opcion 2, vera nuestro menu de postres elija una:\n");
            printf("Opcion 0 para Merengon \n");
            printf("Opcion 1 para Fresas con crema \n");
            printf("Opcion 2 para Helado \n");
            switch (op2)
            {
                case 0:
                    printf("Usted eligio un Merengon, mmm rico");
                break;
                case 1:
                    printf("Usted eligio Fresas con crema, mmm rico");
                break;
                case 2:
                    printf("Usted eligio un Helado, mmm rico");
                break;
                default:
                    printf("Opcion invalida");
                break;
            }
        break;
        default:
            printf("Esta opcion no esta permitida");
        break;
    }
    return 0;
}