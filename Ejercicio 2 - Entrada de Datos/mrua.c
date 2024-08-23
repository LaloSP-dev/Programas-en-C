/**
 * Programa: Problema de Fisica
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int d0 = 0, vi = 0, vf = 80, t = 50;
    double a, d;

    printf("\n---------- Problema de Fisica ----------\n");

    printf("\nUn avion parte del reposo y debe alcanzar los 80m/s en 50s.\n");
    printf("¿Que distancia debe tener la pista de despegue?\n");

    /**
     * Datos que se tienen
     * d0 = 0 m, vi = 0 m/s, vf = 80 m/s, t = 50 s, d = ?
     */

    /**
     * Se calcula primero la Aceleración
     * a = (vf - vi) / t
     */

    a = (vf - vi) / (double) t;

    printf("\nAceleracion (a) = %.2lf m/s^2\n\n", a);

    /**
     * Fórmula para calcular la distancia
     * d = d0 + v0 * t + (a * t^2) / 2
     */
    
    d = d0 + (vi * t) + (a * pow(t, 2) / (double) 2);

    printf("La distancia es = %.2lf m\n\n", d);

    return 0;
}
