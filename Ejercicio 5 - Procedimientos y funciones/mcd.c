/**
 * Programa: Máximo Común Divisor
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 */

#include <stdio.h>
#include <stdlib.h>

void maximoComunDivisor(int A, int B);

int main(int argc, char const *argv[])
{
    int A, B;

    printf("\n---------- Máximo Común Divisor ----------\n");

    printf("\nIntroduce 2 números enteros\n\n");

    printf("Número 1: ");
    scanf("%d", &A);

    printf("Número 1: ");
    scanf("%d", &B);

    maximoComunDivisor(A, B);

    return 0;
}

void maximoComunDivisor(int A, int B)
{
    int *apA, *apB, aux;

    // Se asigna la dirección de los apuntadores
    apA = &A;
    apB = &B;

    printf("\nValor de A = %d B = %d\n\n", A, B);
    printf("&A = %p &B = %p\n\n", &A, &B);
    printf("apA = %p apB = %p\n\n", apA, apB);
    printf("*apA = %d *apB = %d\n\n", *apA, *apB);

    if (*apA < *apB)
    {
        aux = *apA;
        *apA = *apB;
        *apB = aux;
    }

    while (*apA % *apB != 0)
    {
        aux = *apA;
        *apA = *apB;
        *apB = aux % *apB;
    }

    printf("El MCD es: %d\n\n", *apB);
}