#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ELEMS 40

typedef char cadena[256];

int main(int argc, char const *argv[])
{
	int Numeros[NUM_ELEMS];

	srand(time(NULL));

	return 0;
}

void Inicializa_arreglo(int *Arreglo, int size, int min_valor, int max_valor)
{
	int i;

	for (i = 0; i < size; i++)
		Arreglo[i] = (rand() + min_valor) % max_valor;
}

void Despliega_arreglo(int *Arreglo, int size, cadena mensaje)
{
	int i;

	printf("%s\n", mensaje);

	for (i = 0; i < size; i++)
		printf("%d ", Arreglo[i]);

}

int Cuenta(int *Arreglo, int size, int numero)
{
	int i, cont;

	cont = 0;

	for (i = 0; i < size; i++)
		if(Arreglo[i] = numero)
			cont = cont + 1;

	return cont;
}

