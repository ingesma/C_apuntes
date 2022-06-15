#include <stdio.h>

main (){

	int opt1, opt2;
	
	printf("Bienvenido a la cafeteria, eligue una opcion:\n");
	printf ("Opcion 0 bebidas \n");
	printf ("Opcion 1 comida \n");
	printf ("Opcion 2 postre \n");
	scanf ("%d", &opt1);
	
switch(opt1){
	case 0 :
		printf ("Elegiste el menu de bebidas, escoje una opcion:\n");
		printf ("Opcion 0 fanta \n");
		printf ("Opcion 1 juguito \n");
		printf ("Opcion 2 cerveza \n");
		scanf ("%d", &opt2);
		switch(opt2){
			case 0:
				printf ("Elegiste una fanta");
			break;
			case 1:
				printf ("Elegiste un juguito");
			break;
			case 2:
				printf ("Elegiste una cerveza");
			break;
		}
		break;
		
	case 1:
		printf ("Elegiste el menu de comida, escoje una opcion:\n");
		printf ("Opcion 0 hamburguesa \n");
		printf ("Opcion 1 tacos \n");
		printf ("Opcion 2 pizza \n");
		
		scanf ("%d", &opt2);
		switch(opt2){
			case 0:
				printf ("Elegiste una hamburguesa");
			break;
			case 1:
				printf ("Elegiste un tacos");
			break;
			case 2:
				printf ("Elegiste una pizza");
			break;
		}
		break;	
	
	case 2:
		printf ("Elegiste el menu de postres, escoje una opcion:\n");
		printf ("Opcion 0 brownie \n");
		printf ("Opcion 1 pay de queso \n");
		printf ("Opcion 2 pan de elote \n");
		
		scanf ("%d", &opt2);
		switch(opt2){
			case 0:
				printf ("Elegiste una brownie");
			break;
			case 1:
				printf ("Elegiste un pay de queso");
			break;
			case 2:
				printf ("Elegiste una pan de elote");
			break;
		}
		break;
	default:
		printf ("No elegiste una opcion valida");
	break;
	}
return 0;
}


include <stdio.h>
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
}```