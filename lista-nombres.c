#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define MAX_CAD 256

typedef char cadena[MAX_CAD];

int Menu();

int main(int argc, char const *argv[])
{
	int size, opcion;
	cadena Nombres[MAX];

	size = 0;

	do {
		opcion = Menu();

		switch(opcion) {

			case 1:
				break;

			case 2:
				break;

			case 3:
				break;

			case 4:
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