/**
 * Programa: Contador de números
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int number, cont;

    printf("\n---------- Contador de Números ----------\n");

    printf("\nDa varios números y para terminar da un 0\n");
    scanf("%d", &number);

    cont = 0;

    while (number != 0)
    {
        cont++;
        scanf("%d", &number);
    }
    
    printf("\nDiste un total de %d números\n\n", cont);

    return 0;
}
