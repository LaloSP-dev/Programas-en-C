#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char cadena[256];

float **crearMatrizFloat(int rengs, int cols);
float *creaArregloFloat(int size);
float numeroDecimalRandom(int numDecimal);
void inicializaMatrizAleatorio(float **Matriz, int rengs, int cols);
void despliegaMatriz(float **Matriz, int rengs, int cols);
void sumaRenglonesMatriz(float **Matriz, float *Arreglo, int rengs, int cols);
void desplegarArreglo(float *Arreglo, int rengs);
void escribeMatrizArchivoTxt(float **Matriz, int rengs, int cols, cadena name);
void escribeMatrizArchivoBinario(float **Matriz, int rengs, int cols, cadena name);

int main(int argc, char const *argv[])
{
    float **Matriz;
    float *Arreglo;
    int rengs = 0, cols = 0;

    printf("Ingresa el tamaño de los renglones: ");
    scanf("%d", &rengs);

    printf("Ingresa el tamaño de las columnas: ");
    scanf("%d", &cols);

    srand(time(NULL));

    Matriz = crearMatrizFloat(rengs, cols);
    inicializaMatrizAleatorio(Matriz, rengs, cols);
    despliegaMatriz(Matriz, rengs, cols);

    Arreglo = creaArregloFloat(rengs);
    sumaRenglonesMatriz(Matriz, Arreglo, rengs, cols);
    desplegarArreglo(Arreglo, rengs);

    escribeMatrizArchivoTxt(Matriz, rengs, cols, "Matriz.txt");
    escribeMatrizArchivoBinario(Matriz, rengs, cols, "Matriz.bin");

    return 0;
}

float **crearMatrizFloat(int rengs, int cols)
{
    float *apElems;
    float **apMat = NULL;

    apElems = (float *)malloc(sizeof(float) * rengs * cols);

    if (apElems != NULL)
    {
        apMat = (float **)malloc(sizeof(float *) * rengs);

        if (apMat != NULL)
            for (int i = 0; i < rengs; i++)
                apMat[i] = &apElems[i * cols];
    }

    return apMat;
}

float *creaArregloFloat(int size)
{
    float *apElems;

    apElems = (float *) malloc(sizeof(float) * size);

    if (apElems == NULL)
        printf("ERROR...memoria insuficiente");
    
    return apElems;
}

/**
 * @brief Genera un número aleatorio entre 0 y 1 
 * 
 * @param numDecimal 
 * @return 
 */
float numeroDecimalRandom(int numDecimal)
{
    float num = 0.0;
    int nd = 1;

    if (numDecimal > 0)
    {
        for (int i = 0; i < numDecimal; i++)
            nd = nd * 10;

        num = (rand() % (nd + 1)) / (float)nd;
    }
    
    return num;
}

void inicializaMatrizAleatorio(float **Matriz, int rengs, int cols)
{
    for(int i = 0; i < rengs; i++)
        for(int j = 0; j < cols; j++)
            Matriz[i][j] = (rand() % 10) + numeroDecimalRandom(1);
}

void despliegaMatriz(float **Matriz, int rengs, int cols)
{
    printf("\n--------------------\n");

    for(int i = 0; i < rengs; i++)
    {
        for(int j = 0; j < cols; j++)
            printf("%5.1f", Matriz[i][j]);
        
        printf("\n");
    }

    printf("\n");
}

/**
 * @brief Suma de renglones de la Matriz
 * 
 * Guarda cada entrada r del arreglo la suma del reglon i-ésimo
 * de la matriz 
 * 
 * @param Matriz 
 * @param Arreglo 
 * @param rengs 
 * @param cols 
 */
void sumaRenglonesMatriz(float **Matriz, float *Arreglo, int rengs, int cols)
{
    for (int r = 0; r < rengs; r++) {
        
        float suma = 0.0;

        for (int  c = 0; c < cols; c++)
            suma = suma + Matriz[r][c];

        Arreglo[r] = suma;
    }
}

void desplegarArreglo(float *Arreglo, int rengs)
{
    printf("\n--------------------\n");

    for (int i = 0; i < rengs; i++)
        printf("%.2f ", Arreglo[i]);
    
    printf("\n");
}

FILE *abreArchivo(cadena name, cadena modo)
{
    FILE *ap = NULL;

    ap = fopen(name, modo);

    if (ap == NULL)
        printf("\nERROR...No se puede abrir el archivo %s\n", name);
    else
        printf("\nArchivo %s abierto exitosamente\n", name);
    
    return ap;
}

void escribeMatrizArchivoTxt(float **Matriz, int rengs, int cols, cadena name)
{
    FILE *ap;

    ap = abreArchivo(name, "w");

    if (ap != NULL)
    {
        fprintf(ap, "%d %d\n", rengs, cols);

        for (int r = 0; r < rengs; r++)
        {
            for (int c = 0; c < cols; c++)
                fprintf(ap, "%5.1f", Matriz[r][c]);
            
            fprintf(ap, "\n");
        }
    }

    fclose(ap);
}

void escribeMatrizArchivoBinario(float **Matriz, int rengs, int cols, cadena name) 
{
    FILE *ap;

    ap = abreArchivo(name, "wb");

    if (ap != NULL)
    {
        fwrite(&rengs, sizeof(int), 1, ap);
        fwrite(&cols, sizeof(int), 1, ap);
        fwrite(*Matriz, sizeof(float), rengs * cols, ap);

        fclose(ap);
    }
}