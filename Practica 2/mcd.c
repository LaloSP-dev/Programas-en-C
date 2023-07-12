#include<stdio.h>
#include<stdlib.h>

void maximo_comun_divisor(int A, int B);

int main(int argc, char const *argv[])
{
	int A, B;

	printf("Introduce dos numeros enteros:\n");
	printf("Numero 1: ");
	scanf("%d", &A);
	printf("Numero 2: ");
	scanf("%d", &B);

	maximo_comun_divisor(A, B);

	return 0;
}


void maximo_comun_divisor(int A, int B)
{
	int aux, *apA, *apB;

	/*Se asigna la dirección de las variables*/
	apA = &A;
	apB = &B;

	printf("\nValor de A = %d B = %d\n\n", A, B);
	printf("&A = %p &B = %p\n\n", &A, &B);
	printf("apA = %p apB = %p\n\n", apA, apB);
	printf("*apA = %d *apB = %d\n\n", *apA, *apB);

	/*Código para calcular el maximo comun divisor*/

	if(A < B) {

		aux = A;
		A = B;
		B = aux;

	}

	while(A % B != 0) {

		aux = A;
		A = B;
		B = aux % B;

	}

	printf("El MCD es: %d\n", B);
}