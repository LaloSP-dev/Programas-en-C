#include <stdio.h>
#include <stdlib.h>

float **crea_matriz_float(int rengs, int cols);
void liberar_matriz_float(float **apmat, int rengs);
float rand_float_entre_0_y_1(int num_dec)

int main(int argc, char const *argv[])
{
	
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

		apmat = (float **)malloc(sizeof(float*)*rengs);

		if(apmat != NULL)
			for(r = 0; r < rengs; r++)
				apmat[r] = &(ap_elems[r * cols]);
	}

	return apmat;
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
	int j, nd = 1;

	if(num_dec > 0) {

		for(j = 1; j <= num_dec; j++)
			nd = nd * 10;

		decimales = (rand() % (nd + 1)) / (float) nd;

	}

	return decimales;
}