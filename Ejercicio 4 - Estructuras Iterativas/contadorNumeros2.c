/**
 * Programa: Contador de números
 * Autor: Eduardo Sanchez
 * Version: 1.1.0
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int number, cont;

    printf("\n---------- Contador de Números ----------\n");

    printf("\nDa varios numeros y para terminar da un 0\n");

    cont = 0;

    do
    {
        scanf("%d", &number);

        if (number != 0)
        {
            cont++;
        }

    } while (number != 0);

    printf("\nDiste un total de %d números\n\n", cont);

    return 0;
}
