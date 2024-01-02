#ifndef ATLETAS_CORREDORES
#define ATLETAS_CORREDORES

#include <stdio.h>
#include <stdlib.h>

#define MAX_CAD 256
#define MAX 200
#define NC 6

typedef char cadena[MAX_CAD];

typedef struct
{
	int distancia;
	int segs;
} Tcarrera;

typedef struct
{
	cadena name;
	unsigned int edad;
	Tcarrera tiempos[NC];
} Tcorredor;

typedef struct
{
	Tcorredor Corredores[MAX];
	int size;
} TSist_Atletas;

typedef struct
{
	int hrs;
	int min;
	int seg;
} Ctime;

int menu();
void altaCorredores(TSist_Atletas *Atletas);
int menuConsultas();
int menuDistanciaCarreras();
void despliegueConsultas(TSist_Atletas atletas);
void atletaMejorTiempo(TSist_Atletas atletas);
void listadoTiemposByAtleta(TSist_Atletas atletas);
void listadoTiemposByAtleta(TSist_Atletas atletas);
int buscarAtleta(TSist_Atletas atletas, cadena name);
Ctime *formatoTiempo(TSist_Atletas atleta, int posicion);
void nombresOrdenados(TSist_Atletas *atletas);
void listadoAllAtletas(TSist_Atletas atletas);
float promedioCarrerasByCorredor(Tcarrera *carreras);
void listadoPromedioCarrerasOfAllAtletas(TSist_Atletas atletas);
void listadoAtletasByEdad(TSist_Atletas atletas);
void bajasAtletasByNombre(TSist_Atletas *atletas);
FILE *abrirArchivo(cadena name, cadena modo);
void crearArchivoTxt(TSist_Atletas atletas, cadena name);
void crearArchivoTxt(TSist_Atletas atletas, cadena name);

#endif