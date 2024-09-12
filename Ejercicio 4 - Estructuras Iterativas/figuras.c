/**
 * Programa: Anidamiento de ciclos
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("\nPrimera figura\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("\t");

        for (int j = 0; j < 10; j++)
            printf("* ");

        printf("\n");    
    }
        
    printf("\n");

    printf("Segunda figura\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("\t");

        for (int j = 0; j < 10; j++)
            if (j >= i)
                printf("* ");
            else
                printf("  ");
        
        printf("\n");
    }
    
    printf("\n");

    return 0;
}
