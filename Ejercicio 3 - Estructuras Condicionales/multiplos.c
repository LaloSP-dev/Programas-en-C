/**
 * Programa: Múltiplos
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number1, number2;

    printf("\n---------- MÚLTIPLOS ----------\n");

    printf("\nIngresa el primer numero: ");
    scanf("%d", &number1);

    printf("\nIngresa el segundo numero: ");
    scanf("%d", &number2);

    if (number1 % number2 == 0 || number2 % number1 == 0)
    {
        if (number1 >= number2)
            printf("\n%d es múltiplo de %d\n\n", number1, number2);
        else
            printf("\n%d es múltiplo de %d\n\n", number2, number1);
    }
    else
        printf("\n%d y %d no son múltiplos\n\n", number1, number2);

    return 0;
}
