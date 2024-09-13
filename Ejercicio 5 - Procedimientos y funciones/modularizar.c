/**
 * Programa: Cantidad de billetes
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 */

#include <stdio.h>
#include <stdlib.h>

int billetes(int dinero, int denominacion);
void monedas(int dinero);

int main(int argc, char const *argv[])
{
    char option;
    int dinero;

    do
    {
        printf("\nIngresa la cantidad de dinero: ");
        scanf("%d", &dinero);

        printf("\n");

        dinero = billetes(dinero, 1000);
        dinero = billetes(dinero, 500);
        dinero = billetes(dinero, 200);
        dinero = billetes(dinero, 100);
        dinero = billetes(dinero, 50);
        dinero = billetes(dinero, 20);
        monedas(dinero);

        printf("\n¿Quieres dar otra cantidad? s/n\n");
        getc(stdin);
        scanf("%c", &option);

    } while (option != 'n' && option != 'N');

    printf("\n¡Adios!\n\n");

    return 0;
}

int billetes(int dinero, int denominacion)
{
    int billetes;

    billetes = dinero / denominacion;

    if (billetes > 1)
        printf("Se entregan %d billetes de %d pesos\n", billetes, denominacion);
    else if (billetes == 1)
        printf("Se entrega %d billete de %d pesos\n", billetes, denominacion);

    dinero = dinero % denominacion;

    return dinero;
}

void monedas(int dinero)
{
    printf("Se entregan %d pesos en monedas\n", dinero);
}