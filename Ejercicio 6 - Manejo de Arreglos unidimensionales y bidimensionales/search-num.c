/**
 * Búsqueda de un número en Arreglo
 * Autor: Eduardo Sanchez
 * Version: 1.1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ELEMS 40

typedef char cadena[256];

void inicializaArreglo(int *arreglo, int size, int minValor, int maxValor);
void desplegarArreglo(int *arreglo, int size, cadena mensaje);
int cuenta(int *arreglo, int size, int number);
void despliegaPosiciones(int *arreglo, int size, int number);
int busca(int *arreglo, int size, int number);

int main(int argc, char const *argv[])
{
    int arreglo[NUM_ELEMS];
    int number;

    srand(time(NULL));

    printf("\nIngresa un número entero: ");
    scanf("%d", &number);

    inicializaArreglo(arreglo, NUM_ELEMS, 10, 40);
    desplegarArreglo(arreglo, NUM_ELEMS, "Arreglo con valores entre 10 y 40");

    if (busca(arreglo, NUM_ELEMS, number) < NUM_ELEMS)
    {
        printf("\nEl número %d aparece %d veces en el arreglo\n", number, cuenta(arreglo, NUM_ELEMS, number));
        despliegaPosiciones(arreglo, NUM_ELEMS, number);
        printf("El número %d aparece por primera vez en la posición: %d\n\n", number, busca(arreglo, NUM_ELEMS, number));
    }
    else
        printf("\nEl número %d no existe en el arreglo\n\n", number);

    return 0;
}

void inicializaArreglo(int *arreglo, int size, int minValor, int maxValor)
{
    // Se inicializa en arreglo con números aleatorios
    for (int i = 0; i < size; i++)
        arreglo[i] = rand() % (maxValor - minValor + 1) + minValor;
}

void desplegarArreglo(int *arreglo, int size, cadena mensaje)
{
    printf("\n%s\n\n", mensaje);

    // Se despliega el arreglo ya inicializado con números aleatorios
    for (int i = 0; i < size; i++)
        printf("%d ", arreglo[i]);

    printf("\n\n");
}

int cuenta(int *arreglo, int size, int number)
{
    int cont = 0;

    for (int i = 0; i < size; i++)
        if (arreglo[i] == number)
            cont++;

    return cont;
}

void despliegaPosiciones(int *arreglo, int size, int number)
{
    printf("\nPosiciones donde se encuentra el número %d son:\n", number);

    for (int i = 0; i < size; i++)
        if (arreglo[i] == number)
            printf("%d ", i);

    printf("\n\n");
}

int busca(int *arreglo, int size, int number)
{
    int i = 0;

    while (arreglo[i] != number && i < size)
        i++;

    return i;
}