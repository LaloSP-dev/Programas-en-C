#include "atletas.h"

int main(int argc, char const *argv[])
{
    TSistAtletas atletas;
    int option;

    option = 0;

    do
    {
        option = menu();

        switch (option)
        {
        case 1:
            break;

        case 2:
            break;

        case 3:
            displeyaQueriesMenu();
            break;

        case 4:
            break;

        case 5:
            break;

        case 6:
            printf("\nFin del programa...Adios!\n\n");
            break;

        default:
            printf("\nOpción no valida...\nSelecciona otra opción\n\n");
            break;
        }
    } while (option != 6);

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
    printf("6) Salir\n");
    printf("Selecciona una opción: ");
    scanf("%d", &option);

    return option;
}

int queriesMenu()
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

void displeyaQueriesMenu()
{
    int option;

    option = 0;

    do
    {
        option = queriesMenu();

        switch (option)
        {
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
            printf("\nRegresando al menú principal\n");
            waitToPressEnter();
            break;

        default:
            break;
        }
    } while (option != 6);
    
}

int raceDistanceMenu()
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

/**
 * @brief Método que espera que el usuario presione 'Enter'
 */
void waitToPressEnter()
{
    printf("\nPresione 'Enter' para continuar...");
    getchar(); // Consumir el salto de linea previo
    getchar(); // Esperar a que el usuario presione 'Enter'
}