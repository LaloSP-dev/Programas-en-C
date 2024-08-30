/**
 * Programa: Divisores de un número
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int number, cont, divisor;
    cont = 0;
    divisor = 1;

    printf("\n---------- Divisores de un Número ----------\n");

    printf("\nIngresa un número entero: ");
    scanf("%d", &number);

    printf("\nLos divisores del numero %d son:\n", number);

    do
	{
		if (number % divisor == 0)
		{

			printf("%d ", divisor);
			cont++;
		}

		divisor = divisor + 1;

	} while (!(divisor > number)); /*Hacemos uso del ciclo repite-hasta que en C no existe pero se puede 
                                    implementar usando do-while y negando con el operador ! la condición.
									Condicion sin negar divisores <= numero*/

    printf("\n\nEl número total de divisores de %d es: %d\n\n", number, cont);

    return 0;
}
