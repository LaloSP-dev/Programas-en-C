#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ELEMS 40

typedef char cadena[256];

void Inicializa_arreglo(int *Arreglo, int size, int min_valor, int max_valor);
void Despliega_arreglo(int *Arreglo, int size, cadena mensaje);
int Cuenta(int *Arreglo, int size, int numero);
void Despliega_posiciones(int *Arreglo, int size, int num);
int Busca(int *Arreglo, int size, int num);

int main(int argc, char const *argv[])
{
	int Numeros[NUM_ELEMS];
	int numero;

	srand(time(NULL));

	Inicializa_arreglo(Numeros, NUM_ELEMS, 20, 11);
	Despliega_arreglo(Numeros, NUM_ELEMS, "Arreglo con valores entre 20 y 30\n");

	printf("Da un numero a buscar en el arreglo: ");
	scanf("%d", & numero);

	if (Busca(Numeros, NUM_ELEMS, numero) < NUM_ELEMS) {

		printf("\nEl numero %d aparece %d en el arreglo\n", numero, Cuenta(Numeros, NUM_ELEMS, numero));
		printf("\n");

		Despliega_posiciones(Numeros, NUM_ELEMS, numero);

		printf("\nEl numero %d aparece por primera vez en la posicion: %d\n", numero, Busca(Numeros, NUM_ELEMS, numero));
	
	} else {
		printf("\nEl numero %d no existe en el arreglo\n", numero);
	}

	return 0;
}

void Inicializa_arreglo(int *Arreglo, int size, int min_valor, int max_valor)
{
	int i;

	for (i = 0; i < size; i++)
		Arreglo[i] = (rand() % max_valor) + min_valor;
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
		if(Arreglo[i] == numero)
			cont = cont + 1;

	return cont;
}

void Despliega_posiciones(int *Arreglo, int size, int num)
{
	int i;

	printf("Posiciones donde se encuentra el numero %d:\n", num);

	for (i = 0; i < size; i++)
		if (Arreglo[i] == num)
			printf("%d ", i);
}

int Busca(int *Arreglo, int size, int num) 
{
	int i;

	i = 0;

	while (Arreglo[i] != num && i < size)
		i++;

	return i;
}
