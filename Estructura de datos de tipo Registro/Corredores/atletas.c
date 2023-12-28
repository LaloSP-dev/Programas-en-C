#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "atletas.h"
#include <unistd.h>

int main(int argc, char const *argv[])
{
	TSist_Atletas Atletas;
	int opcion;

	opcion = 0;

	Atletas.size = 0;
	do
	{
		opcion = menu();
		switch (opcion)
		{
		case 1:
			alta_corredores(&Atletas);
			break;

		case 3:
			despliegue_consultas(Atletas);
			break;

		case 6:
			printf("\nFin del programa...Adios\n");
			break;

		default:
			printf("\nERROR...Valor no valido\n");
			break;
		}
	} while (opcion != 6);

	return 0;
}

int menu()
{
	int opc;

	printf("\n---------- Menu Principal ----------\n");
	printf("1) Altas Corredores\n");
	printf("2) Bajas Corredores\n");
	printf("3) Consultas\n");
	printf("4) Guardar datos en archivo\n");
	printf("5) Cargar datos de archivo\n");
	printf("6) Salir\n");
	printf("Opcion: ");
	scanf("%d", &opc);

	return opc;
}

int menu_consultas()
{
	int opc;

	printf("\n---------- Menu Consultas ----------\n");
	printf("1) Nombre del corredor que obtuvo el tiempo mas corto en una distancia en especifico\n");
	printf("2) Listado de la informacion de un corredor, mostrando sus tiempos\n");
	printf("3) Listado de la informacion de todos los corredores ordenados por nombre\n");
	printf("4) Listado de la informacion de todos los corredores con el promedio de sus carreras\n");
	printf("5) Listado de la informacion de todos los corredores entre un intervalo de edades, con el promedio de sus carreras\n");
	printf("6) Regresar al Menu Principal\n");
	printf("Opcion: ");
	scanf("%d", &opc);

	return opc;
}

int menuDistanciaCarreras()
{
	int opc;

	printf("\nSelecciona la distancia de una carrera:\n");
	printf("1) Carrera de 100 metros\n");
	printf("2) Carrera de 200 metros\n");
	printf("3) Carrera de 400 metros\n");
	printf("4) Carrera de 5000 metros\n");
	printf("5) Carrera de 10000 metros\n");
	printf("6) Carrera de 42200 metros\n");
	printf("7) Regresar al Menu Consultas\n");
	printf("Opcion: ");
	scanf("%d", &opc);

	return opc;
}

void despliegue_consultas(TSist_Atletas atletas)
{
	int opcion;

	do
	{
		opcion = menu_consultas();

		switch (opcion)
		{
		case 1:
			atletaMejorTiempo(atletas);
			break;

		case 2:
			listadoTiemposCorredor(atletas);
			break;

		case 3:
			nombresOrdenados(&atletas);
			desplegarAtletas(atletas);
			break;

		case 4:
			break;

		case 5:
			break;

		case 6:
			printf("\nRegresando al Menu Principal...\n");
			break;

		default:
			printf("\nError...Opcion no valida\n");
			break;
		}

	} while (opcion != 6);
}

/**
 * @brief Da de alta a los corredores
 *
 * @param atletas
 */
void alta_corredores(TSist_Atletas *atletas)
{
	printf("\n---------- Altas Corredores ----------\n");

	if (atletas->size < MAX)
	{
		printf("Numero del Atleta: %d\n", (atletas->size) + 1);

		printf("Nombre del Corredor: ");
		getc(stdin);
		scanf("%[^\n]", atletas->Corredores[atletas->size].name);

		printf("Edad del Corredor: ");
		scanf("%d", &atletas->Corredores[atletas->size].edad);

		// Se asiganan las distancias de las carreras
		atletas->Corredores[atletas->size].tiempos[0].distancia = 100;
		atletas->Corredores[atletas->size].tiempos[1].distancia = 200;
		atletas->Corredores[atletas->size].tiempos[2].distancia = 400;
		atletas->Corredores[atletas->size].tiempos[3].distancia = 5000;
		atletas->Corredores[atletas->size].tiempos[4].distancia = 10000;
		atletas->Corredores[atletas->size].tiempos[5].distancia = 42200;

		printf("Introduce los tiempos del corredor en segundos: \n");
		for (int i = 0; i < NC; i++)
		{
			printf("Tiempo en carrera de %d metros: ", atletas->Corredores[atletas->size].tiempos[i].distancia);
			scanf("%d", &atletas->Corredores[atletas->size].tiempos[i].segs);
		}
		(atletas->size)++;
	}
	else
	{
		printf("\nLista de Atletas Llena...\n");
	}
}

/**
 * @brief Consulta al atleta con mejor tiempo en una carrera en especifico
 *
 * Estamos suponiendo que solo un corredor puede tener el mejor tiempo
 *
 * @param atletas Lista de atletas
 */
void atletaMejorTiempo(TSist_Atletas atletas)
{
	int distanciaC, mejorT, auxMejorT, posicionMejorT;

	if (atletas.size == 0)
	{
		printf("\n---------- Atleta con Mejor Tiempo ----------\n");
		printf("No hay corredores dados de alta\n");
	}
	else
	{
		do
		{
			distanciaC = menuDistanciaCarreras();
			posicionMejorT = 0;

			if (distanciaC > 0 && distanciaC <= 6)
			{
				mejorT = atletas.Corredores[0].tiempos[distanciaC - 1].segs;

				printf("\n---------- Atleta con Mejor Tiempo ----------\n");

				for (int i = 0; i < atletas.size; i++)
				{
					auxMejorT = atletas.Corredores[i].tiempos[distanciaC].segs;

					if (auxMejorT < mejorT)
					{
						mejorT = auxMejorT;
						posicionMejorT = i;
					}
				}

				printf("\nEl corredor <<%s>> tuvo el mejor tiempo con <<%d>> segundos en la Carrera de <<%d>> metros\n", atletas.Corredores[posicionMejorT].name, mejorT, atletas.Corredores[posicionMejorT].tiempos[distanciaC - 1].distancia);
				printf("\n");
			}
			else if (distanciaC == 7)
			{
				printf("\nRegresando a Menu de Consultas...\n\n");
			}
			else
			{
				printf("\nError...Opcion no valdia\n\n");
			}

		} while (distanciaC != 7);
	}
}

/**
 * @brief Muestra el listado de información de un corredor dando su nombre, mostrando sus tiempos
 *
 * @param atletas
 */
void listadoTiemposCorredor(TSist_Atletas atletas)
{
	cadena name;
	Ctime *tiempos;
	int posCorredor, i;

	if (atletas.size > 0)
	{
		printf("\n---------- Lista de Tiempos ----------\n");

		printf("\nEscribe el nombre del Atleta: ");
		getc(stdin);
		scanf("%[^\n]", name);

		posCorredor = buscarAtleta(atletas, name);

		if (posCorredor < atletas.size)
		{
			printf("\n%-20s%-20s%-20s\n", "Nombre", "Carreras", "Tiempo");
			printf("-----------------------------------------------");

			tiempos = formatoTiempo(atletas, posCorredor);

			for (int i = 0; i < NC; i++)
				printf("\n%-20s%-20d%02d:%02d:%02d\n", atletas.Corredores[posCorredor].name, atletas.Corredores[posCorredor].tiempos[i].distancia, tiempos[i].hrs, tiempos[i].min, tiempos[i].seg);

			free(tiempos); // Libera la memoria cuando ya no se necesite
		}
		else
		{
			printf("No se encontro a ningun Atleta con el nombre << %s >>", name);
		}
	}
	else
	{
		printf("\n---------- Lista de Tiempos ----------\n");
		printf("\nNo hay corredores dados de alta\n");
	}
}

/**
 * @brief Busca solo a un atleta por el nombre y envia su posición
 *
 * @param atletas
 * @param name
 * @return int Regresa su posición del atleta
 */
int buscarAtleta(TSist_Atletas atletas, cadena name)
{
	int posicion = 0;

	while (posicion < atletas.size && strcmp(atletas.Corredores[posicion].name, name) != 0)
	{
		posicion++;
	}

	return posicion;
}

/**
 * @brief Pasa los tiempos de un corredor a un formato de hrs:min:seg
 * despues los imprime en consola
 *
 * @param atleta
 * @param posicion
 */
Ctime *formatoTiempo(TSist_Atletas atleta, int posicion)
{
	Ctime *tiempos = (Ctime *)malloc(NC * sizeof(Ctime));
	int hrs, min, seg, time;

	hrs = 0;
	min = 0;
	seg = 0;

	for (int i = 0; i < NC; i++)
	{
		time = atleta.Corredores[posicion].tiempos[i].segs;

		if (time % 3600 == 0) // Si time solo tiene horas
		{
			hrs = time / 3600;
			time = time % 3600;
		}
		else
		{
			// Si tiene horas y minutos
			hrs = time / 3600;
			time = time % 3600;
			if (time % 60 == 0)
			{
				min = time / 60;
				time = time % 60;
			}
			else
			{
				// Si tiene horas, minutos y segundos
				min = time / 60;
				time = time % 60;
				seg = time;
			}
		}
		tiempos[i].hrs = hrs;
		tiempos[i].min = min;
		tiempos[i].seg = seg;
	}

	return tiempos;
}

/**
 * @brief Metodo que ordena los nombres de los atletas en orden alfabetico
 *
 * strcmp -> Sirve para comparar dos cadenas
 * strcmp(cad1, cad2) == 0 -> Devuelve 0 si las cadenas son iguales
 * strcmp(cad1, cad2) > 0 -> Devuelve un numero positivo si la primera cadena es mayor que la segunda
 * strcmp(cad1, cad2) < 0 -> Devuelve un numero negativo si la segunda cadena es mayor que la primera
 * stricmp -> Sirve para comparar dos cadenas despreciando mayúsculas y minúsculas
 *
 * @param atletas
 */
void nombresOrdenados(TSist_Atletas *atletas)
{
	Tcorredor aux;

	for (int i = 0; i < atletas->size - 1; i++)
		for (int j = 0; j < atletas->size - 1; j++)
		{
			if (strcmp(atletas->Corredores[j].name, atletas->Corredores[j + 1].name) > 0)
			{
				aux = atletas->Corredores[j];
				atletas->Corredores[j] = atletas->Corredores[j + 1];
				atletas->Corredores[j + 1] = aux;
			}
		}
}

void desplegarAtletas(TSist_Atletas atletas)
{
	Ctime *tiempos;
			printf("\n---------- Lista de Informacion de los Atletas ----------\n");

	if (atletas.size > 0)
	{
		printf("\n%-20s%-20s%-20s%-20s\n", "Nombre", "Edad", "Carreras", "Tiempos");
		printf("-------------------------------------------------------------------");
		for (int i = 0; i < atletas.size; i++){

			tiempos = formatoTiempo(atletas, i);

			for (int j = 0; j < NC; j++)
				printf("\n%-20s%-20d%-20d%02d:%02d:%02d\n", atletas.Corredores[i].name, atletas.Corredores[i].edad, atletas.Corredores[i].tiempos[j].distancia, tiempos[j].hrs, tiempos[j].min, tiempos[j].seg);

			free(tiempos);
		}
	}
	else
		printf("\nNo hay corredores dados de alta\n");
}