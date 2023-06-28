#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float **crea_matriz_float(int rengs, int cols);
float *crea_arreglo_float(int tamanio);
void liberar_matriz_float(float **apmat, int rengs);
float rand_float_entre_0_y_1(int num_dec);
void Inicializa_aleatorio(float **matriz, int rengs, int cols);
void Despliega_matriz(float **matriz, int rengs, int cols);
void Suma_renglones(float **Matriz, float *Arreglo, int rengs, int cols);
void Despliega_suma_arreglo(float *Arreglo, int size);

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
	Inicializa_aleatorio(Matriz, rengs, cols);
	Despliega_matriz(Matriz, rengs, cols);

	Arreglo = crea_arreglo_float(rengs);

	Suma_renglones(Matriz, Arreglo, rengs, cols);
	Despliega_suma_arreglo(Arreglo, rengs);



	return 0;
}

/*
Funcion que pide memoria al sistema
para crear una matriz de reales (float)
de tamaño: rengs x cols
*/

float **crea_matriz_float(int rengs, int cols)
{
	float *ap_elems;
	float **apmat = NULL;
	int r;

	ap_elems = (float *)malloc(sizeof(float)*rengs*cols);

	if(ap_elems != NULL) {

		apmat = (float **)malloc(sizeof(float *)*rengs);

		if(apmat != NULL)
			for(r = 0; r < rengs; r++)
				apmat[r] = &(ap_elems[r * cols]);
	}

	return apmat;
}

float *crea_arreglo_float(int tamanio)
{
	float *ap_elems;

	ap_elems = (float *)malloc(sizeof(float *)*tamanio);

	if(ap_elems == NULL)
		printf("ERROR_memoria insuficiente");

	return ap_elems;
}

void liberar_matriz_float(float **apmat, int rengs)
{
	if(apmat != NULL) {

        free(apmat[0]);  /* Libera el bloque de elementos de la matriz */
        free(apmat);     /* Libera el arreglo de punteros a las filas */
    
    }
}

/*
Procedimiento que genera números aleatorios entre 0 y 1
considerando cifras decimales
*/

float rand_float_entre_0_y_1(int num_dec)
{
	float decimales = 0.0;
	int i, nd = 1;

	if(num_dec > 0) {

		for(i = 1; i <= num_dec; i++)
			nd = nd * 10;

		decimales = (rand() % (nd + 1)) / (float) nd;

	}

	return decimales;
}

void Inicializa_aleatorio(float **Matriz, int rengs, int cols)
{
	int i, j;

	for(i = 0; i < rengs; i++)
		for(j = 0; j < cols; j++)
			Matriz[i][j] = rand_float_entre_0_y_1(1) + (rand() % 10);
}

void Despliega_matriz(float **Matriz, int rengs, int cols)
{
	int i, j;

	printf("\n--------------------------------\n");

	for(i = 0; i < rengs; i++) {
		
		for(j = 0; j < cols; j++)
			printf("%5.1f", Matriz[i][j]);
		printf("\n");
	
	}
}

void Suma_renglones(float **Matriz, float *Arreglo, int rengs, int cols)
{
	int i, j;
	float suma;

	suma = 0;

	for(i = 0; i < rengs; i++) {
		for(j = 0; j < cols; j++)
			suma = suma + Matriz[i][j];
		Arreglo[i] = suma;
		suma = 0;
	}
}

void Despliega_suma_arreglo(float *Arreglo, int size)
{
	int i;

	printf("\n");
	for(i = 0; i < size; i++)
		printf("%5.1f", Arreglo[i]);
}