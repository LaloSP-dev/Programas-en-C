#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_CAD 256

typedef char cadena[MAX_CAD];

float **crea_matriz_float(int rengs, int cols);
void Despliega_Matriz(float **Matriz, int rengs, int cols);
float **lee_matriz_de_archivo_txt(int *rengs, int *cols, cadena name);

int main(int argc, char const *argv[])
{
    float **Matriz;
    int rengs = 0, cols = 0;

    Matriz = lee_matriz_de_archivo_txt(&rengs, &cols, "DatosMatriz.txt");
    Despliega_Matriz(Matriz, rengs, cols);

    return 0;
}

/**
 * @brief Pide memoria al sistema para crear una matriz de reales
 *
 * @param rengs
 * @param cols
 * @return float**
 */
float **crea_matriz_float(int rengs, int cols)
{
    float *ap_elems;
    float **apmat = NULL;
    int r;

    ap_elems = (float *)malloc(sizeof(float) * rengs * cols);

    if (ap_elems != NULL)
    {
        apmat = (float **)malloc(sizeof(float *) * rengs);

        if (apmat != NULL)
        {
            for (r = 0; r < rengs; r++)
                apmat[r] = &(ap_elems[r * cols]);
        }
    }

    return apmat;
}

void Despliega_Matriz(float **Matriz, int rengs, int cols)
{
    int r, c;

    printf("\n-------------------------------\n");
    for (r = 0; r < rengs; r++)
    {
        for (c = 0; c < cols; c++)
            printf("%5.1f ", Matriz[r][c]);
        printf("\n");
    }
    printf("\n");
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
FILE *Abre_Archivo(cadena name, cadena modo)
{
    FILE *ap = NULL;

    ap = fopen(name, modo);

    if (ap == NULL)
        printf("\nERROR...no se pudo abrir el archivo %s\n", name);
    else
        printf("\nArchivo %s abierto exitosamente\n", name);

    return ap;
}

float **lee_matriz_de_archivo_txt(int *rengs, int *cols, cadena name)
{
    FILE *ap;
    int r, c;
    float **Matriz = NULL;

    ap = Abre_Archivo(name, "r"); // se abre para lectura modo texto

    if (ap != NULL)
    {
        fscanf(ap, "%d", rengs);
        fscanf(ap, "%d", cols);

        Matriz = crea_matriz_float(*rengs, *cols);

        for (r = 0; r < *rengs; r++)
            for (c = 0; c < *cols; c++)
                fscanf(ap, "%f", &(Matriz[r][c]));

        fclose(ap);
    }

    return Matriz;
}