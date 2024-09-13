/**
 * Programa: Manejo de arreglos y números random
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ELEMS 20 // Se define una constante

int main(int argc, char const *argv[])
{
    int numeros[NUM_ELEMS]; // Se declara un arreglo de enteros

    printf("\n---------- Números Aleatorios ----------\n");

    srand(time(NULL)); // Se genera una nueva semilla por cada ejecución

    for (int i = 0; i < NUM_ELEMS; i++)
        numeros[i] = rand() % 101; // Se aasigna números aleatorios entre 0 y 100

    // Se despliegan todos los numeros generados
    for (int i = 0; i < NUM_ELEMS; i++)
        printf("%d ", numeros[i]);

    printf("\n\n");
    return 0;
}
