/**
 * Programa: Desplegar los numeros primos que estan entre 50 y 1000
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int cont;

    printf("\n---------- Números primos entre 50 y 1000 ----------\n");
    printf("Los números primos entre el 50 y 1000 son:\n");

    for (int i = 50; i <= 1000; i++)
    {
        cont = 0;

        for (int j = 1; j <= i; j++)
            if (i % j == 0)
            {
                cont++;
            }

        if (cont == 2)
            printf("%d ", i);
    }

    printf("\n\n");
    
    return 0;
}
