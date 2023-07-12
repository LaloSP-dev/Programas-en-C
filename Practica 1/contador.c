#include <stdio.h>

int main(int argc, char const *argv[])
{
	int contador, numero;

	contador = 0;

	printf("Programa que calcula el total de numeros introducidos\n");
	printf("\nDa varios numeros y para terminar da un 0:\n");

	do
	{

		scanf("%d", &numero);
		contador++;

	} while (numero != 0);

	printf("\nTotal de numeros introducidos: %d", contador);

	return 0;
}