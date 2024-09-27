/**
 * Arreglos bidimensionales
 * Autor: Eduardo Sanchez
 * Version: 1.1.0
 */

#include <stdio.h>
#include <stdlib.h>

#define RENGS 5
#define COLS 4

void inicializaMatriz(int matriz[RENGS][COLS]);
void despliegaMatriz(int matriz[RENGS][COLS]);
void sumaMatriz(int matrizA[RENGS][COLS], int matrizB[RENGS][COLS], int matrizC[RENGS][COLS]);
void multiplicaMatriz(int matrizA[RENGS][COLS], int escalar);

int main(int argc, char const *argv[])
{
    int matrizA[RENGS][COLS], matrizB[RENGS][COLS], matrizC[RENGS][COLS];

    inicializaMatriz(matrizA);
    despliegaMatriz(matrizA);

    inicializaMatriz(matrizB);
    despliegaMatriz(matrizB);

    sumaMatriz(matrizA, matrizB, matrizC);
    despliegaMatriz(matrizC);

    multiplicaMatriz(matrizA, 5);
    despliegaMatriz(matrizA);

    return 0;
}

void inicializaMatriz(int matriz[RENGS][COLS])
{
    for (int r = 0; r < RENGS; r++)
        for (int c = 0; c < COLS; c++)
            matriz[r][c] = rand() % 10 + 1;
}

void despliegaMatriz(int matriz[RENGS][COLS])
{
    printf("\n--------------------\n");

    for (int i = 0; i < RENGS; i++)
    {
        for (int j = 0; j < COLS; j++)
            printf("%4d", matriz[i][j]);

        printf("\n");
    }
}

void sumaMatriz(int matrizA[RENGS][COLS], int matrizB[RENGS][COLS], int matrizC[RENGS][COLS])
{
    for (int i = 0; i < RENGS; i++)
        for (int j = 0; j < COLS; j++)
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
}

void multiplicaMatriz(int matrizA[RENGS][COLS], int escalar)
{
    for (int i = 0; i < RENGS; i++)
        for (int j = 0; j < COLS; j++)
            matrizA[i][j] = matrizA[i][j] * escalar;
}