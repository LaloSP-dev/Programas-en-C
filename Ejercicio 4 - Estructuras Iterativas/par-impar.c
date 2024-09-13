/**
 * Programa: Contador de números pares e impares
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 */

#include <stdio.h>
#include <stdlib.h>

const int N = 10;

int main(int argc, char const *argv[])
{
    int number, cont, nEven, nOdd;

    nEven = 0;
    nOdd = 0;

    printf("\n---------- Contador de números Pares e Impares ----------\n");

    for (cont = 0; cont < N; cont++)
    {
         printf("\nIngresa un número positivo: ");
         scanf("%d", &number);

         if (number >= 0)
         {
            if (number % 2 == 0)
                nEven++;
            else
                nOdd++;   
            
         } 
         else 
         {
            printf("El número %d no es positivo\n", number);
            cont--;
         }
    }
    
    printf("\nEl numero de números pares es: %d\n", nEven);
	printf("\nEl numero de números impares es: %d\n\n", nOdd);

    return 0;
}
