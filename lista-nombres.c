#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10
#define MAX_CAD 256

typedef char cadena[MAX_CAD];

int Menu();
void Inertar(cadena *Nombres, int *size, int tam_max);
void Desplegar(cadena *Nombres, int size);

int main(int argc, char const *argv[])
{
	int size, opcion;
	cadena Nombres[MAX];

	size = 0;

	do {
		opcion = Menu();

		switch(opcion) {

			case 1:
				Inertar(Nombres, &size, MAX);
				break;

			case 2:
				break;

			case 3:
				break;

			case 4:
				Desplegar(Nombres, size);
				break;

			case 5:
				break;

			case 6:
				break;

			case 7:
				printf("\nFin del programa...%cAdios!", 173);
				break;

			default:
				break;
		}

	} while (opcion != 7);
	
	return 0;
}

int Menu()
{
	int opcion;

	printf("\nSelecciona una opcion:\n");

	printf("\n1) Insertar nombre\n");
	printf("2) Eliminar nombre\n");
	printf("3) Buscar nombre\n");
	printf("4) Lista de nombres\n");
	printf("7) Salir del programa\n");
	printf("Opcion: ");
	scanf("%d", & opcion);

	return opcion;
}

void Inertar(cadena *Nombres, int *size, int tam_max)
{
	cadena name;
	int posicion, i;

	printf("\n------- Insertar Nombre -------\n");
	if (*size == tam_max) {
		printf("\nLa lista se encuentra llena...\n");
	} else {
		
		printf("Ingresa un nombre: ");
		scanf("%s", name);
		printf("Ingresa la posicion: ");
		scanf("%d", & posicion);

		if (posicion < 0 || posicion > 9) {
			printf("\nERROR...posicion no valida debe ser entre 0 y 9.\n");
		} else {

			if (posicion < *size) {

				for (i = *size; i >= posicion; i--)
					strcpy(Nombres[i], Nombres[i - 1]);

				strcpy(Nombres[posicion], name);

			} else {

				if (posicion >= *size)
					strcpy(Nombres[*size], name);

			}

			(*size)++;
		}
	}
}

void Desplegar(cadena *Nombres, int size)
{
	int i;

	printf("\n------- Lista de Nombres -------\n");

	if (size == 0)
		printf("La lista de nombres esta vacia...\n");
	else {

		for (i = 0; i < size; i++)
			printf("%d) %s\n", i, Nombres[i]);
	
	}
}