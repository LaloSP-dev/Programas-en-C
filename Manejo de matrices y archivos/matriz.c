#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_CAD 256

typedef char cadena[MAX_CAD];

float **crea_matriz_float(int rengs, int cols);
float *crea_arreglo_float(int size);
float rand_float_entre_0_y_1(int num_dec);
void Inicializa_Aleatorio(float **Matriz, int rengs, int cols);
void Despliega_Matriz(float **Matriz, int rengs, int cols);
void suma_renglones(float **Matriz, float *Arreglo, int rengs, int cols);
void Despliega_Arreglo(float *Arreglo, int size);
FILE *Abre_Archivo(cadena name, cadena modo);
void escribe_matriz_en_archivo_txt(float **Matriz, int rengs, int cols, cadena name);
void escribe_matriz_a_archivo_bin(float **Matriz, int rengs, int cols, cadena name);

int main(int argc, char const *argv[])
{
	float **Matriz;
	float *Arreglo;
	int rengs, cols;

	srand(time(NULL));

	printf("Ingresa el tama%co de la matriz:\n", 164);
	printf("Renglones: ");
	scanf("%d", &rengs);
	printf("Columnas: ");
	scanf("%d", &cols);

	Matriz = crea_matriz_float(rengs, cols);
	Inicializa_Aleatorio(Matriz, rengs, cols);
	escribe_matriz_en_archivo_txt(Matriz, rengs, cols, "DatosMatriz.txt");
	escribe_matriz_a_archivo_bin(Matriz, rengs, cols, "DatosMatriz.bin");
	Despliega_Matriz(Matriz, rengs, cols);

	Arreglo = crea_arreglo_float(rengs);
	suma_renglones(Matriz, Arreglo, rengs, cols);
	Despliega_Arreglo(Arreglo, rengs);

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

/**
 * @brief Pide memoria al sistema para crear un arreglo de tipo int
 *
 * @param size
 * @return float*
 */
float *crea_arreglo_float(int size)
{
	float *ap_elems;

	ap_elems = (float *)malloc(sizeof(float) * size);

	if (ap_elems == NULL)
		printf("ERROR...memoria insuficiente\n");

	return ap_elems;
}

/**
 * @brief Genera números aleatorios entre 0 y 1
 *
 * @param num_dec
 * @return float
 */
float rand_float_entre_0_y_1(int num_dec)
{
	float decimales = 0.0;
	int nd = 1, r;

	if (num_dec > 0)
	{
		for (r = 1; r <= num_dec; r++)
			nd = nd * 10;

		decimales = (rand() % (nd + 1)) / (float)nd;
	}

	return decimales;
}

void Inicializa_Aleatorio(float **Matriz, int rengs, int cols)
{
	int r, c;

	for (r = 0; r < rengs; r++)
		for (c = 0; c < cols; c++)
			Matriz[r][c] = rand_float_entre_0_y_1(1) + (rand() % 10);
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
void suma_renglones(float **Matriz, float *Arreglo, int rengs, int cols)
{
	int r, c;
	float suma = 0.0;

	for (r = 0; r < rengs; r++)
	{
		for (c = 0; c < cols; c++)
			suma = suma + Matriz[r][c];
		Arreglo[r] = suma;
		suma = 0.0;
	}
}

void Despliega_Arreglo(float *Arreglo, int size)
{
	int i;

	printf("\n");
	for (i = 0; i < size; i++)
		printf("%5.1f ", Arreglo[i]);

	printf("\n\n");
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

/**
 * @brief Escribe la matriz en un archivo de texto
 *
 * @param Matriz
 * @param rengs
 * @param cols
 * @param name
 */
void escribe_matriz_en_archivo_txt(float **Matriz, int rengs, int cols, cadena name)
{
	FILE *ap;
	int r, c;

	ap = Abre_Archivo(name, "w"); // se abre para escritura de modo texto

	if (ap != NULL)
	{
		fprintf(ap, "%d %d\n", rengs, cols);

		for (r = 0; r < rengs; r++)
		{
			for (c = 0; c < cols; c++)
				fprintf(ap, "%5.1f", Matriz[r][c]);
			fprintf(ap, "\n");
		}
		fclose(ap); // se cierra el archivo para que se guarde en disco
	}
}

/**
 * @brief Escribe la matriz en un archivo binario
 *
 * @param Matriz
 * @param rengs
 * @param cols
 * @param name
 */
void escribe_matriz_a_archivo_bin(float **Matriz, int rengs, int cols, cadena name)
{
	FILE *ap;

	ap = Abre_Archivo(name, "wb");

	if (ap != NULL)
	{
		fwrite(&rengs, sizeof(int), 1, ap);				  // se escribe el numero de renglones
		fwrite(&cols, sizeof(int), 1, ap);				  // se escribe el numero de columnas
		fwrite(*Matriz, sizeof(float), rengs * cols, ap); // se escribe directamente toda la matriz
		fclose(ap);										  // se cierrael archivo para que se guarde en disco
	}
}