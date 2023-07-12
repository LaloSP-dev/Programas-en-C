#include<stdio.h>

int main(int argc, char const *argv[])
{
	int numero, divisores, cont;

	numero = 0;
	divisores = 1;
	cont = 0;

	printf("\nPrograma que calcula los divisores de un numero\n\n");

	printf("Introduce un numero: ");
	scanf("%d", &numero);
	printf("\nLos divisores de %d son:\n", numero);

	do {

		if(numero % divisores == 0) {

			printf("%d ", divisores);
			cont++;
		}

		divisores = divisores + 1;

	} while (!(divisores > numero)); /*Hacemos uso del ciclo repite-hasta que en C no existe
									   pero se puede implementar usando do-while y negando con el operador ! la condición
									   Condicion sin negar divisores <= numero*/

	printf("\n\nEl numero total de divisores de %d es: %d\n", numero, cont);

	return 0;
}