//#include<iostream>
#include <stdlib.h>
//#include <wchar.h>
//#include <locale.h>
//#include <stdlib.h>

//using namespace std;
//int main(int argc, char **argv)
//stado completo á –> \xA0 é –> \x82 í –> \xA1 ó –> \xA2 ú –> \xA3 Á -> \xB5 É -> \x90 Í -> \xD6 Ó -> \xE0 Ú -> \xE9 ñ –> \xA4 Ñ –> \xA5 ¿ -> \A8 ¡ -> \AD
//Canción >> Canci\xA2n
int	main(void)
{
	//setlocale(LC_CTYPE, "Spanish");
    int totalPrimosEcontrados;
	int total = 10;
	int numeroEstudiar;
	int divisor;
	
	totalPrimosEcontrados = 0;
	for (numeroEstudiar = 1; numeroEstudiar <= total; numeroEstudiar++)
	{
		divisor = 0;
		do 
		{
			divisor++;
			if(divisor > 1 && divisor < numeroEstudiar)
				if (numeroEstudiar % divisor == 0)
					break;
		} while (divisor < numeroEstudiar);
		if (divisor < numeroEstudiar)
			continue;
//		else 
//			printf("[%d] no es primo\n", numeroEstudiar);
		totalPrimosEcontrados++;
		printf("[%d] Encontrado n\xA3mero primo\n", numeroEstudiar);
	}
	printf("Total primos encontrados del 1 al %d, = %d\n", total, totalPrimosEcontrados);
	return (0);
}