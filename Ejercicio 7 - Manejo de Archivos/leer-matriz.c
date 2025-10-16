#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_CAD 256

typedef char cadena[MAX_CAD];

float **creaMatrizFloat(int rengs, int cols);
void despliegaMatriz(float **Matriz, int rengs, int cols);
FILE *abrirArchivo(cadena name, cadena modo);
float **leerMatrizArchivoTxt(int *rengs, int *cols, cadena name);
float **leerMatrizArchivoBinario(int *rengs, int *cols, cadena name);

int main(int argc, char const *argv[])
{
    float **Matriz1, **Matriz2;
    int rengs = 0, cols = 0;

    Matriz1 = leerMatrizArchivoTxt(&rengs, &cols, "Matriz.txt");
    despliegaMatriz(Matriz1, rengs, cols);

    Matriz2 = leerMatrizArchivoBinario(&rengs, &cols, "Matriz.bin");
    despliegaMatriz(Matriz2, rengs, cols);

    return 0;
}

/**
 * @brief Pide memoria al sistema para crear una matriz de reales
 *
 * @param rengs
 * @param cols
 * @return float**
 */
float **creaMatrizFloat(int rengs, int cols)
{
    float *apElmen;
    float **apMat;

    apElmen = (float *)malloc(sizeof(float) * rengs * cols);

    if (apElmen != NULL)
    {
        apMat = (float **)malloc(sizeof(float *) * rengs);

        if (apMat != NULL)
            for (int i = 0; i < rengs; i++)
                apMat[i] = &(apElmen[i * cols]);
    }

    return apMat;
}

/**
 * @brief Despliega una Matriz
 * @param Matriz
 * @param rengs
 * @param cols
 */
void despliegaMatriz(float **Matriz, int rengs, int cols)
{
    printf("\n-------------------------------\n");

    for (int r = 0; r < rengs; r++)
    {
        for (int c = 0; c < cols; c++)
            printf("%5.1f ", Matriz[r][c]);

        printf("\n\n");
    }
}

/**
 * @brief Se encarga de abrir un archivo
 *
 * invoca a la instrucción fopen
 *
 * @param name - Nombre del archivo
 * @param modo - Modo de apertura
 * @return FILE*
 */
FILE *abrirArchivo(cadena name, cadena modo)
{
    FILE *ap = NULL;

    ap = fopen(name, modo);

    if (ap == NULL)
        printf("\nERROR...no se pudo abrir el archivo %s\n", name);
    else
        printf("\nArchivo %s abierto exitosamente\n", name);

    return ap;
}

/**
 * @brief Lee un archivo de texto
 * @param rengs 
 * @param cols 
 * @param name 
 * @return 
 */
float **leerMatrizArchivoTxt(int *rengs, int *cols, cadena name)
{
    FILE *ap;
    float **Matriz = NULL;

    ap = abrirArchivo(name, "r"); // Se abre para lectura modo texto

    if (ap != NULL)
    {
        fscanf(ap, "%d", rengs);
        fscanf(ap, "%d", cols);

        Matriz = creaMatrizFloat(*rengs, *cols);

        for (int r = 0; r < *rengs; r++)
            for (int c = 0; c < *cols; c++)
                fscanf(ap, "%f", &(Matriz[r][c]));

        fclose(ap);
    }

    return Matriz;
}

/**
 * @brief Lee un archivo binario
 * @param rengs 
 * @param cols 
 * @param name 
 * @return 
 */
float **leerMatrizArchivoBinario(int *rengs, int *cols, cadena name)
{
    FILE *ap;
    float **Matriz;

    ap = abrirArchivo(name, "rb"); // Se abre para lectura modo binario

    if (ap != NULL)
    {
        fread(rengs, sizeof(int), 1, ap); // Se lee número de renglones
        fread(cols, sizeof(int), 1, ap);  // Se lee número de columnas

        Matriz = creaMatrizFloat(*rengs, *cols);

        fread(*Matriz, sizeof(float), (*rengs) * (*cols), ap); // Se leen todos los bytes de la matriz

        fclose(ap);
    }

    return Matriz;
}