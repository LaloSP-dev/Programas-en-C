#ifndef ATLETAS_CORREDORES
#define ATLETAS_CORREDORES

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_CAD 256
#define NC 6
#define MAX 200

typedef char cadena[MAX_CAD];

typedef struct
{
    int distancia;
    int segs;
} Tcarrera;

typedef struct
{
    cadena nombre;
    unsigned int edad;
    Tcarrera carreras[NC];
} Tcorredor;

typedef struct
{
    Tcorredor corredores[MAX];
    int size;
} TSistAtletas;

int menu();
int queriesMenu();
int raceDistanceMenu();

#endif