/**
 * Programa: Distancia entre dos puntos
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 * Descripción: Programa que calcula la distancia entre dos puntos
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float d, x1, x2, y1, y2;

    printf("\n---------- Distancia Entre Dos Puntos ----------\n");
    
    printf("\nIntroude las coordenadas\n");

    printf("x1 = ");
    scanf("%f", &x1);
    printf("x2 = ");
    scanf("%f", &x2);
    printf("y1 = ");
    scanf("%f", &y1);
    printf("y2 = ");
    scanf("%f", &y2);

    // Calculamos la distancia de las cooredenada dadas
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("\nLa distancia entre los puntos es: %f\n\n", d);
    
    return 0;
}
