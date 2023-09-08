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
 * @param atletas
 */
void atletaMejorTiempo(TSist_Atletas atletas)
{
	int distanciaC, mejorT, otroT, posMejorT;

	do
	{
		distanciaC = menuDistanciaCarreras();

		if (distanciaC >= 1 && distanciaC <= 6)
		{
			printf("\n---------- Atleta con Mejor Tiempo ----------\n");

			mejorT = atletas.Corredores[0].tiempos[distanciaC - 1].segs;
			posMejorT = 0;

			for (int i = 1; i < atletas.size; i++)
			{
				otroT = atletas.Corredores[i].tiempos[distanciaC - 1].segs;

				if (otroT < mejorT)
				{
					mejorT = otroT;
					posMejorT = i;
				}
			}

			printf("\nEl corredor <<%s>> tuvo el mejor tiempo con <<%d>> segundos en la Carrera de <<%d>> metros\n", atletas.Corredores[posMejorT].name, atletas.Corredores[posMejorT].tiempos[distanciaC - 1].segs, atletas.Corredores[posMejorT].tiempos[posMejorT].distancia);
		}
		else if (distanciaC == 7)
		{
			printf("\nRegresando a Menu de Consultas...\n");
			sleep(3);
		}
		else
		{
			printf("\nError...Opcion no valida\n");
		}

	} while (distanciaC != 7);
}