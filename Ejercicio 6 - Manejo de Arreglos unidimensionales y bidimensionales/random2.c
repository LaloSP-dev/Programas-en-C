/**
 * Programa: Manejo de arreglos y números random
 * Autor: Eduardo Sanchez
 * Version: 1.1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ELEMS 20
#define MAX 10

typedef char cadena[256]; // Se crea un nuevo tipo llamado cadena

void inicializaArreglo(int arreglo[], int size, int maxValor);
void desplegarArreglo(int arreglo[], int size, cadena mensaje);

int main(int argc, char const *argv[])
{
    int arreglo1[NUM_ELEMS], arreglo2[MAX];

    srand(time(NULL));
    
    printf("\n---------- Números Aleatorios ----------\n\n");

    inicializaArreglo(arreglo1, NUM_ELEMS, 101);
    desplegarArreglo(arreglo1, NUM_ELEMS, "Arreglo con valores entre 0 y 100");

    inicializaArreglo(arreglo1, NUM_ELEMS, 21);
    desplegarArreglo(arreglo1, NUM_ELEMS, "Arreglo con valores entre 0 y 20");
    return 0;
}

void inicializaArreglo(int arreglo[], int size, int maxValor)
{
    // Se inicializa en arreglo con números aleatorios
    for (int i = 0; i < size; i++)
        arreglo[i] = rand() % maxValor;
}

void desplegarArreglo(int arreglo[], int size, cadena mensaje)
{
    printf("%s\n", mensaje);

    // Se despliega el arreglo ya inicializado con números aleatorios
    for (int i = 0; i < size; i++)
        printf("%d ", arreglo[i]);

    printf("\n\n");
}