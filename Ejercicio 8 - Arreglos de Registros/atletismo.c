#include "atletas.h"

int main(int argc, char const *argv[])
{

    return 0;
}

int menu()
{
    int option;

    printf("\n---------- MENU PRINCIPAL ----------\n");
    printf("1) Altas de corredores\n");
    printf("2) Bajas de corredores\n");
    printf("3) Consultas\n");
    printf("4) Guardar datos en archivos\n");
    printf("5) Cargar datos en archivos\n");
    printf("Selecciona una opción: ");
    scanf("%d", &option);

    return option;
}

int menuConsultas()
{
    int option;

    printf("\n---------- MENU CONSULTAS ----------\n");
    printf("1) Nombre del corredor que obtuvo el tiempo más corto en un nivel especifico de distancia\n");
    printf("2) Listado de tiempos de un corredor\n");
    printf("3) Listado de la información de todos los corredores ordenados por nombre\n");
    printf("4) Listado de la información de todos los corredores con el promedio de sus carreras\n");
    printf("5) Listado de la información de todos los corredores entre un intervalo de tiempo con el promedio de sus carreras\n");
    printf("6) Regresar al menú principal\n");
    printf("Opción: ");
    scanf("%d", &option);

    return option;
}

int menuDistanciaCarreras()
{
    int option;

    printf("\nSelecciona la distancia de una carrera\n");
    printf("1) Carrera de 100 metros\n");
    printf("2) Carrera de 200 metros\n");
    printf("3) Carrera de 400 metros\n");
    printf("4) Carrera de 5000 metros\n");
    printf("5) Carrera de 10000 metros\n");
    printf("6) Carrera de 42200 metros\n");
    printf("Opción: ");
    scanf("%d", &option);

    return option;
}