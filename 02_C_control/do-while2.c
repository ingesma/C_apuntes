#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main (void)
{
	int numero;
	int numeroPensado;
	int intentos;
	long i = time(NULL);

	numeroPensado = i % 11 + 1;
	intentos = 0;

	printf ("He pensado un número del 1 al 10\n");
	do
	{
		intentos++;
		printf ("¿cual dirás que es?\n");
		scanf("%d", &numero);
		if (numero < numeroPensado)
			printf ("Mi número pensado es mayor que %d\n", numero);
		else if (numero > numeroPensado)
			printf ("Mi número pensado es menor que %d\n", numero);
	} while (numero != numeroPensado );
	printf ("¡Enhorabuena! mi numero %d adivinado en %d intentos\n", numeroPensado, intentos);
}