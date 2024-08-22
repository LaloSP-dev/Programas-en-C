/**
 * Programa: Costo de boletos de avion
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 * Descripción: Programa que pregunta al usuario la edad de 3 personas que viajarán en avión,
 * luego indica el costo a pagar por cada uno y el monto total
 */

#include <stdio.h>
#include <stdlib.h>

int costoBoleto(int edad, int numPersona);

int main(int argc, char const *argv[])
{
    int edad1, edad2, edad3;
    int costoTotal;
    int boleto1, boleto2, boleto3;

    printf("\n---------- Costos de Boletos de Avión -----------\n");

    printf("\nIntroduce la edad de la persona 1: ");
    scanf("%d", &edad1);
    printf("\nIntroduce la edad de la persona 2: ");
    scanf("%d", &edad2);
    printf("\nIntroduce la edad de la persona 3: ");
    scanf("%d", &edad3);

    printf("\nCosto de boleto por persona: 2000\n");
    boleto1 = costoBoleto(edad1, 1);
    boleto2 = costoBoleto(edad2, 2);
    boleto3 = costoBoleto(edad3, 3);

    printf("\nTotal a Pagar: %d pesos\n\n", boleto1 + boleto2 + boleto3);

    return 0;
}

int costoBoleto(int edad, int numPersona)
{
    int boleto;

    if (edad <= 2)
    {
        boleto = 0;
        printf("Costo persona %d (100%c descuento): %d pesos\n", numPersona, 37, boleto);
    }
    else if (edad > 2 && edad <= 12)
    {
        boleto = 2000 - (2000 * 0.3);
        printf("Costo persona %d (30%c descuento): %d pesos\n", numPersona, 37, boleto);
    }
    else if (edad >= 60)
    {
        boleto = 2000 - (2000 * 0.5);
        printf("Costo persona %d (50%c descuento): %d pesos\n", numPersona, 37, boleto);
    }
    else
    {
        boleto = 2000;
        printf("Costo persona %d (0%c descuento): 2000 pesos\n", numPersona, 37);
    }

    return boleto;
}
