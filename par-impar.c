#include<stdio.h>
#include<stdlib.h>

const int N = 10;

int main(int argc, char const *argv[]) 
{
	int numero, contPar, contImpar, i;

	contPar = 0;
	contImpar = 0;

	printf("Contador de numeros Pares e Impares\n");
	printf("Ingresa %d numeros positivos\n");

	for (i = 0; i < N; i++) {

		scanf("%d", &numero);

		if(numero > 0) {

			if(numero % 2 == 0)
				contPar = contPar + 1;
			else
				contImpar = contImpar + 1;


		} 
		else {
			printf("El numero %d no es positivo\n", numero);
			i--;
		}
	}

	return 0;
}