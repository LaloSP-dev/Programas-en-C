/**
 * Programa: Cálculo del Importe y el IVA
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TASA 0.16

typedef char cadena[256];

void studentData();
float calculateAmount(float price, int total);
float calculateIVA(float amount);
float calculateTotalPay(float amount, float iva);

int main(int argc, char const *argv[])
{
    cadena name, nameDish;
    float price, amount, iva, totalPay;
    int total;

    studentData();

    printf("Ingresa el nombre del cliente: ");
    scanf("%[^\n]", name);
    getc(stdin);

    printf("\n\n          ********** DATOS DEL PEDIDO DE COMIDA **********\n");
    printf("\nIngrese el nombre del platillo: ");
    getc(stdin);
    scanf("%[^\n]", nameDish);

    printf("\nIngrese el precio del platillo sin IVA: ");
    scanf("%f", &price);

    printf("\nIngrese la cantidad del platillo: ");
    scanf("%d", &total);

    amount = calculateAmount(price, total);
    printf("\nImporte sin IVA: %.2f\n", amount);

    iva = calculateIVA(amount);
    printf("\nIVA: %.2f", iva);

    printf("\n\n          DATOS DEL CLIENTE Y TOTAL A PAGAR CON IVA\n");
    
    printf("\nNombre del cliente: %s\n", name);

    totalPay = calculateTotalPay(amount, iva);
    printf("\nTotal a pagar del pedido con IVA: %.2f\n\n", totalPay);

    return 0;
}

void studentData() 
{
    printf("\n\n          ********** DATOS DEL ESTUDIANTE **********\n\n");
    printf("Nombre del estudiante: XXXXX XXXXX XXXXX\n");
    printf("Matricula: XXXXXXXXXX\n");
    printf("Grupo: XXXXXX\n\n");
}

/**
 * @brief Calcula el monto total sin IVA
 * 
 * @param price - precio del platillo
 * @param total - cantidad del platillo
 * @return - monto total
 */
float calculateAmount(float price, int total) 
{
    return price * total;
}

/**
 * @brief Calcula el IVA del platillo
 * 
 * @param amount - monto total sin IVA
 * @return - IVA del platillo
 */
float calculateIVA(float amount) 
{
    return amount * TASA;
}

/**
 * @brief Calcula el total a pagar con IVA 
 * 
 * @param amount - monto sin IVA
 * @param iva - IVA del platillo
 * @return  - Total a pagar
 */
float calculateTotalPay(float amount, float iva)
{
    return amount + iva;
}