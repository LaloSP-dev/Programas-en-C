/**
 * Programa: Par o Impar
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;

    printf("\n---------- PAR o IMPAR ----------\n");

    printf("\nIntroduce un numero: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("\nEl numero %d es PAR\n", number);
    }
    else
    {
        printf("\nEl numero %d es IMPAR\n", number);
    }

    return 0;
}