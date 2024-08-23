/**
 * Programa: Adivinar número pensado por el usuario
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    unsigned int result;

    printf("\n---------- ADIVINAR NUMERO ----------\n");

    printf("\nPiensa en un numero y oprime enter cuando lo haya hecho\n");
    getc(stdin);

    printf("\nMultiplique el numero por 5 y oprime enter cuando lo haya hecho\n");
    getc(stdin);

    printf("\nSume 12 a lo que quedo y oprime enter cuando lo haya hecho\n");
    getc(stdin);

    printf("\nMultiple por 10 lo que quedo y oprime enter cuando lo haya hecho\n");
    getc(stdin);

    printf("\nSume 5 a lo que quedo y oprime enter cuando lo haya hecho\n");
    getc(stdin);

    printf("\nMultiplique lo que quedo por 2 y oprime enter cuando lo haya hecho\n");
    getc(stdin);

    printf("\n¿Que numero te quedo?\n");
    scanf("%d", &result);

    //Formula para adivinar el numero pensado por el usuario
    result = (result - 250) / 100;

    printf("\nEl numero pensado fue: %d\n\n", result);

    return 0;
}
