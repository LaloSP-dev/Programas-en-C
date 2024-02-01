#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool verifyNumberArmstrong(int originalNumber);
int totalDigitos(int number);

int main(int argc, char const *argv[])
{
    int number;

    printf("----- NUMEROS DE ARMSTRONG -----\n\n");
    printf("Ingresa un numero: ");
    scanf("%d", &number);

    if (verifyNumberArmstrong(number))
        printf("\nEl %d es un numero de Armstrong\n\n", number);
    else
        printf("\nEl %d no es un numero de Armstrong\n\n", number);
    

    return 0;
}

bool verifyNumberArmstrong(int number)
{
    int suma, n, digito, originalNumber;

    originalNumber = number;
    suma = 0;
    n = totalDigitos(number);

    while (number != 0)
    {
        digito = number % 10;
        suma += pow(digito, n);
        number /= 10;
    }

    return (originalNumber == suma);
}

int totalDigitos(int number)
{
    int total;

    total = 0;

    while (number != 0)
    {
        number /= 10;
        total++;
    }
    
    return total;
}