/**
 * Programa: Cálculo de áreas de figuras
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 */

#include <stdio.h>
#include <stdlib.h>

// Declaración de Constante
#define PI 3.1416

int main(int argc, char const *argv[])
{
    int option;
    float base, altura, lado, radio, area;

    printf("\nSelecciona una opción para el cálculo del área\n");
    printf("1) Triángulo\n");
    printf("2) Rectángulo\n");
    printf("3) Cuadrado\n");
    printf("4) Círculo\n");
    printf("Opción: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("\n----- Área del Triángulo -----\n\n");
        printf("Ingresa la base: ");
        scanf("%f", &base);
        printf("Ingresa la altura: ");
        scanf("%f", &altura);

        area = (base * altura) / 2;

        printf("\nEl área del Triángulo es: %.2f\n\n", area);
        break;

    case 2:
        printf("\n----- Área del Rectángulo -----\n\n");
        printf("Ingresa la base: ");
        scanf("%f", &base);
        printf("Ingresa la altura: ");
        scanf("%f", &altura);

        area = base * altura;

        printf("\nEl área del Rectángulo es: %.2f\n\n", area);
        break;

    case 3:
        printf("\n----- Área del Cuadrado -----\n\n");
        printf("Ingresa el valor del lado: ");
        scanf("%f", &lado);

        area = lado * lado;

        printf("\nEl área del Cuadrado es: %.2f\n\n", area);
        break;

    case 4:
        printf("\n----- Área del Círculo -----\n\n");
        printf("Ingresa la radio: ");
        scanf("%f", &radio);

        area = PI * radio * radio;

        printf("\nEl área del Círculo es: %.2f\n\n", area);
        break;

    default:
        printf("\nOpción no valida...\n\n");
        break;
    }

    return 0;
}
