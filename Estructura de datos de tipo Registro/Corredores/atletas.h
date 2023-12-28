#ifndef ATLETAS_CORREDORES
#define ATLETAS_CORREDORES

#include <stdio.h>

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
void alta_corredores(TSist_Atletas *Atletas);
int menu_consultas();
int menuDistanciaCarreras();
void despliegue_consultas(TSist_Atletas atletas);
void atletaMejorTiempo(TSist_Atletas atletas);
void listadoTiemposCorredor(TSist_Atletas atletas);
void listadoTiemposCorredor(TSist_Atletas atletas);
int buscarAtleta(TSist_Atletas atletas, cadena name);
Ctime *formatoTiempo(TSist_Atletas atleta, int posicion);
void nombresOrdenados(TSist_Atletas *atletas);
void desplegarAtletas(TSist_Atletas atletas);

#endif