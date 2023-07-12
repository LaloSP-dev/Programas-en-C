#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float **crea_matriz_float(int rengs, int cols);
float *crea_arreglo_float(int size);
float rand_float_entre_0_y_1(int num_dec);
void Inicializa_Aleatorio(float **Matriz, int rengs, int cols);
void Despliega_Matriz(float **Matriz, int rengs, int cols);
void suma_renglones(float **Matriz, float *Arreglo, int rengs, int cols);
void Despliega_Arreglo(float *Arreglo, int size);

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