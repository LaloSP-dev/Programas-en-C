#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10
#define MAX_CAD 256

typedef char cadena[MAX_CAD];

int Menu();
void Inertar(cadena *Nombres, int *size, int tam_max);
void Desplegar(cadena *Nombres, int size);
void Eliminar(cadena *Nombres, int *size);
int Busca(cadena *Nombres, int size, cadena name);
void Guardar_nombres_en_archivo_txt(cadena *Nombres, int size, cadena name_arch);
void Lee_nombres_de_archivo_txt(cadena *Nombres, int *size, int tam_max, cadena name_arch);

int main(int argc, char const *argv[])
{
	int size, opcion, pos;
	cadena Nombres[MAX], name;

	size = 0;

	do {
		opcion = Menu();

		switch(opcion) {

			case 1:
				Inertar(Nombres, &size, MAX);
				break;

			case 2:
				Eliminar(Nombres, &size);
				break;

			case 3:
				printf("\n------- Buscar nombre -------\n");
				printf("\nDa un nombre a buscar en el arreglo: ");
				getc(stdin);
				scanf("%[^\n]", name);

				pos = Busca(Nombres, size, name);

				if(pos == size)
					printf("\nEl nombre <<%s>> no se encuentra en el arreglo\n",name);
				else
					printf("\nEl nombre <<%s>> si se encuentra en la posicion %d del arreglo\n",name,pos);
				break;

			case 4:
				Desplegar(Nombres, size);
				break;

			case 5:
				Guardar_nombres_en_archivo_txt(Nombres, size, "Lista de nombres.txt");
				break;

			case 6:
				Lee_nombres_de_archivo_txt(Nombres, &size, MAX, "Lista de nombres.txt");
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
	printf("5) Guardar lista en archivo\n");
	printf("6) Lee lista del archivo\n");
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
		getc(stdin);
		scanf("%[^\n]", name);
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

			printf("\nEL nombre <<%s>> fue introducido\n", name);
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

void Eliminar(cadena *Nombres, int *size)
{
	int posicion, opcion, i;

	printf("\n------- Eliminar Nombre -------\n");

	if (*size > 0) {

		printf("Da la posicion del nombre: ");
		scanf("%d", & posicion);

		if (posicion >= *size || posicion < 0)
			printf("\nError...Posicion incorrecta\n");
		else {

			printf("\nSeguro que quieres borrar el nombre <<%s>>?\n", Nombres[posicion]);
			printf("\t1) SI      2)NO\n");
			printf("Opcion de Confirmacion: ");
			scanf("%d", & opcion);

			if(opcion < 1 || opcion > 2)
				printf("\nError...Opcion no valida\n");
			else
				if(opcion == 1) {
					
					for (i = posicion; i < *size; i++) 
					strcpy(Nombres[i], Nombres[i + 1]);

					(*size)--;

					printf("\nEliminacion exitosa\n");
				
				}
				else
					if(opcion == 2)
						printf("\nEliminacion cancelada\n");
		}

	} else
		printf("\nNo hay nombres en el lista\n");
}

int Busca(cadena *Nombres, int size, cadena name)
{
	int posicion;

	posicion = 0;

	while (strcmp(Nombres[posicion], name) != 0 && posicion < size)
		posicion++;

	return posicion;
}

FILE *Abre_archivo(cadena name, cadena modo)
{
	FILE *ap = NULL;

	ap = fopen(name, modo); /*Función en C para abrir un archivo*/

	if(ap == NULL)
		printf("\nERROR...No se pudo abrir el archivo %s\n", name);
	else
		printf("\nArchivo %s, Abierto exitosamente\n", name);

	return ap;
}

/*Se vacia el archivo del arreglo en un archivo de texto*/
void Guardar_nombres_en_archivo_txt(cadena *Nombres, int size, cadena name_arch)
{
	FILE *ap;
	int i;

	ap = Abre_archivo(name_arch, "w");

	if(ap != NULL) {
		
		for (i = 0; i < size; i++)
			fprintf(ap, "%s\n", Nombres[i]); /*Se escribe los nombres en el archivo*/

		fclose(ap); /*Se cierra el archivo para que se guarde en disco*/
	}
}

/*Lee el archivo txt*/
void Lee_nombres_de_archivo_txt(cadena *Nombres, int *size, int tam_max, cadena name_arch)
{
	FILE *ap;
	cadena name;
	char *apname;

	ap = Abre_archivo(name_arch, "r"); /*Se abre para lectura de archivo de texto*/

	if(ap != NULL) {

		*size = 0;

		apname = fgets(name, MAX_CAD, ap);

		while(apname != NULL && *size < tam_max) {

			name[strlen(name) - 1] = '\0';
			strcpy(Nombres[*size], name);
			(*size)++;
			apname = fgets(name, 256, ap);

		}

		fclose(ap); /*Se cierra el archivo para que se guarde en disco*/
	}
}