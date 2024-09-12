/**
 * Programa: Números de Fibonacci
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    long int f1 = 1, f2 = 1, f3;
    int number;
    char option = 's';

    printf("\n---------- Números de Fibonacci ----------\n\n");

    while (option == 's' || option == 'S')
    {
        f1 = 1;
        f2 = 1;
        f3 = 0;

        printf("Que número de Fibonacci deseas obtener: ");
        scanf("%d", &number);

        if (number == 1 || number == 2)
        {
            printf("\n\nEl número en Fibonacci es: %ld\n", f1);
        }
        else
        {
            for (int i = 3; i <= number; i++)
            {
                f3 = f1 + f2;
                f1 = f2;
                f2 = f3;
            }

            printf("\n\nEl número en Fibonacci es: %ld\n", f3);
        }

        printf("\n\n¿Deseas obtener otro número? s/n\n");
        getc(stdin);
        scanf("%c", &option);

        if (option == 's')
        {
            // Limpiar las últimas 7 líneas de la consola
            for (int i = 0; i < 8; i++)
                printf("\033[A\033[2K"); // Sube una línea y la limpia
        }
    }

    printf("\n¡Adios!\n\n");

    return 0;
}
