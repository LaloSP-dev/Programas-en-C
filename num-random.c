#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ELEMS 20
#define MAX 10

typedef char cadena[256];

void Inicializa_arreglo(int *Arreglo, int size, int max_valor);
void Despliega_arreglo(int *Arreglo, int size, cadena mensaje);

int main(int argc, char const *argv[])
{
	int Numeros[NUM_ELEMS];
	int Datos[MAX];

	srand(time(NULL));
	
	Inicializa_arreglo(Numeros, NUM_ELEMS, 101);
	Despliega_arreglo(Numeros, NUM_ELEMS, "Arreglo con valores entre 0 y 100");

	Inicializa_arreglo(Datos, MAX, 21);
	Despliega_arreglo(Datos, MAX, "Arreglo con valores entre 0 y 20");

	return 0;
}

void Inicializa_arreglo(int *Arreglo, int size, int max_valor) 
{
	int i;

	/*Se iniciliza el arreglo con numeros aleatorios*/
	for (i = 0; i < size; i++)
		Arreglo[i] = rand() % max_valor;
}

void Despliega_arreglo(int *Arreglo, int size, cadena mensaje)
{
	int i;

	printf("%s\n", mensaje);
	
	/*Se despliega el arreglo ya inicializado con numeros aleatorios*/
	for (i = 0; i < size; i++)
		printf("%d ", Arreglo[i]);

	printf("\n");
}