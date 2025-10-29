#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int totalDigits(int number);
bool isArmstrongDigit(int number);

int main(int argc, char const *argv[])
{
    int number;

    printf("---------- Numeros Armstrong ----------\n\n");

    printf("Introduce un número: ");
    scanf("%d", &number);

    printf("\nEl numero %d %s\n\n", number, isArmstrongDigit(number) ? "es un Número Armstrong" : "no es un Número Armstrong");

    return 0;
}

/**
 * @brief Verifica si el número dado es un número de Armstrong
 * @param number 
 * @return - true or false
 */
bool isArmstrongDigit(int number)
{
    int originalNumber, totalDigit, sum, digit;

    sum = 0;
    originalNumber = number;
    totalDigit = totalDigits(number);

    while (number != 0)
    {
        digit = number % 10;
        sum += pow(digit, totalDigit);
        number /= 10;
    }
    
    return (originalNumber == sum);
}

/**
 * @brief Calcula el total de digitos que tiene el número
 * @param number 
 * @return - Total digit
 */
int totalDigits(int number)
{
    int total = 0;

    while (number != 0)
    {
        number /= 10;
        total++;
    }
    
    return total;
}