/**
 * Manejo de archivos
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10
#define MAX_CAD 256

typedef char cadena[MAX_CAD];

int menu();
void insertName(cadena *names, int *size, int tam_max);
void deleteName(cadena *names, int *size);
int searchName(cadena *names, int size, cadena name);
void showListOfNames(cadena *names, int size);
void saveNamesToFile(cadena *names, int size, cadena nameFile);
void readFileNames(cadena *names, int *size, cadena nameFile);
void cleanConsole();
void waitToPressEnter();
void clearConsoleLines(int n);

int main(int argc, char const *argv[])
{
    int size, option, position;
    cadena names[MAX], name;

    size = 0;

    do
    {
        option = menu();

        switch (option)
        {
        case 1:
            insertName(names, &size, MAX);
            break;

        case 2:
            deleteName(names, &size);
            break;

        case 3:
            printf("\n---------- Buscar nombre ----------");
            printf("Introduce el nombre o s/S para salir\n\n");
            printf("Nombre: ");
            fgets(name, sizeof(name), stdin);

            position = searchName(names, size, name);

            if (position == size)
                printf("El nombre '%s' no se encuentra en el arreglo", name);
            else
                printf("El nombre '%s' se encuentra en la posición %d del arreglo", name, position);

            waitToPressEnter();

            break;

        case 4:
            showListOfNames(names, size);
            break;

        case 5:
            saveNamesToFile(names, size, "nombres.txt");
            break;

        case 6:
            readFileNames(names, &size, "nombres.txt");
            break;

        case 7:
            printf("\nPrograma Cerrado\n\n");
            break;

        default:
            printf("\nOpción %d ... INVALIDA\n\n", option);
            break;
        }
    } while (option != 7);

    return 0;
}

/**
 * @brief Muestra el menu de opciones
 *
 * @return - Opción selecciona (int)
 */
int menu()
{
    int option;

    cleanConsole();

    printf("\n---------- Menu Principal ----------\n\n");
    printf("Selecciona una opción:\n");
    printf("1) Insertar nombre\n");
    printf("2) Eliminar nombre\n");
    printf("3) Buscar nombre\n");
    printf("4) Lista de nombres\n");
    printf("5) Guardar nombres en un archivo\n");
    printf("6) Leer nombres de un archivo\n");
    printf("7) Salir del programa\n");
    printf("Opción: ");
    scanf("%d", &option);

    return option;
}

/**
 * @brief Método para guardar los nombres dados por el usuario
 *
 * @param names - Arreglo de los nombres
 * @param size - Total de nombres introducidos
 * @param tam_max - tamaño de la constante MAX
 */
void insertName(cadena *names, int *size, int tam_max)
{
    cadena name;
    int position;
    printf("\n---------- Insertar Nombre ----------\n");

    if (*size == tam_max)
    {
        printf("\nLa lista se encuentra llena...");
        waitToPressEnter();
    }
    else
    {
        printf("\nUsuarios registrados: %d\n", *size);
        printf("\nEscribe el nombre o escribe s/S para volver al menu. ");

        printf("\n\nNombre: ");
        getc(stdin);
        scanf("%[^\n]", name);

        if (strcmp(name, "s") == 0 || strcmp(name, "S") == 0)
        {
            printf("\nRegresando al menu...");
            waitToPressEnter();
            return;
        }

        do
        {
            printf("Ingresa la posición: ");
            scanf("%d", &position);

            // Validar la posición
            if (position < 0 || position >= tam_max)
            {
                printf("\nERROR...posición no valida, debe ser entre 0 y 9");
                waitToPressEnter();

                clearConsoleLines(4);
            }
            else
            {
                if (position < *size)
                {
                    for (int i = *size; i > position; i--)
                        strcpy(names[i], names[i - 1]);

                    strcpy(names[position], name);
                }
                else if (position >= *size) // Si 'position' es mayor o igual que 'size' lo guarda en la posición donde se encuentre 'size'
                    strcpy(names[*size], name);

                (*size)++;

                printf("\nEl nombre '%s' Guardado...", name);
                waitToPressEnter();
            }
        } while (position < 0 || position >= tam_max);
    }
}

/**
 * @brief Elimina un nombre por su posición
 *
 * @param names - Arreglo de nombres
 * @param size - Total de nombres introducidos
 */
void deleteName(cadena *names, int *size)
{
    int position, optionDelete;
    cadena nameRemoved;

    printf("\n---------- Eliminar nombre ----------\n");

    // Verificamos que el arreglo 'names' tenga elementos
    // Si 'size' es mayor de 0, tiene elementos
    if (*size > 0)
    {
        printf("\nIntroduce la posición del nombre a borrar o introduce -1 para volver al menu.\n\n");

        do
        {
            printf("Posición: ");
            scanf("%d", &position);

            if (position == -1)
            {
                printf("\nRegresando al menu...");
                waitToPressEnter();
                return;
            }

            // Validar la posición
            if (position < 0 || position >= *size)
            {
                if (*size == 1)
                    printf("\nERROR...posición no valida, la posición solo puede ser %d", *size - 1);
                else
                    printf("\nERROR...posición no valida, la posición debe ser entre 0 y %d", *size - 1);

                waitToPressEnter();

                clearConsoleLines(4);
            }
            else
            {
                // Repite hasta que sea valida la opción de borrar
                do
                {
                    strcpy(nameRemoved, names[position]);

                    printf("\n¿Seguro qué deseas borrar el nombre '%s'?\n", nameRemoved);
                    printf("1) SI      2) NO\n");
                    printf("Opción: ");
                    scanf("%d", &optionDelete);

                    // Validar que la opción de borrar
                    if (optionDelete == 2) // Opción NO
                    {
                        clearConsoleLines(5);
                    }
                    else if (optionDelete == 1) // Opción SI
                    {
                        for (int i = position; i < *size; i++)
                            strcpy(names[i], names[i + 1]);
                        
                        (*size)--;

                        printf("\nEl nombre '%s' se elimino exitosamente", nameRemoved);
                    }
                    else // Si la opción es diferente a 1 y 2
                    {
                        printf("\nLa opción %d no es valido", optionDelete);
                        waitToPressEnter();

                        clearConsoleLines(7);
                    }
                } while (optionDelete < 1 || optionDelete > 2);
            }
        } while (position < 0 || position >= *size && optionDelete == 2);
    }
    else
        printf("\nLa lista de nombres esta vacía");

    waitToPressEnter();
}

/**
 * @brief Busca la posición de un nombre
 *
 * @param names - Arreglo de nombres
 * @param size - Total de nombres introducidos
 * @param name - Nombre a buscar
 *
 * @return - posición del nombre
 */
int searchName(cadena *names, int size, cadena name)
{
    int positionName;

    positionName = 0;

    while (strcmp(names[positionName], name) != 0 && positionName < size)
        positionName++;

    return positionName;
}

/**
 * @brief Despliega la lista de nombres
 *
 * @param names - Arreglo de nombres
 * @param size - Total de nombres introducidos
 */
void showListOfNames(cadena *names, int size)
{
    printf("\n---------- Lista de nombres ----------\n");

    if (size != 0)
        for (int i = 0; i < size; i++)
            printf("%d. %s\n", i, names[i]);
    else
        printf("\nNo hay nombres dados de alta");

    waitToPressEnter();
}

/**
 * @brief Se encarga de abrir un archivo
 *
 * @param name - Nombre del archivo
 * @param type - Modo de apertura
 * @return - Apuntador de tipo FILE
 */
FILE *openFile(cadena name, cadena type)
{
    FILE *ap = NULL;

    ap = fopen(name, type); // Función de C para abrir un archivo

    if (ap == NULL)
        printf("\nERROR...No se pudo abrir el archivo '%s'\n", name);
    else
        printf("\nArchivo '%s' abierto exitosamente\n", name);

    waitToPressEnter();

    return ap;
}

/**
 * @brief Guarda los nombres de la lista en un archivo
 *
 * @param names - Arreglo de nombres
 * @param size - Total de nombres introducidos
 * @param nameFile - Nombre del archivo
 */
void saveNamesToFile(cadena *names, int size, cadena nameFile)
{
    FILE *ap;

    ap = openFile(nameFile, "w");

    if (ap != NULL)
    {
        for (int i = 0; i < size; i++)
            fprintf(ap, "%s\n", names[i]); // Se escriben los nombres en el archivo

        fclose(ap); // Se cierra el archivo para que se guarde en disco
    }
}

/**
 * @brief Lee los nombres de un archivo
 * @param names - Arreglo de nombres
 * @param size - Total de nombres introducidos
 * @param nameFile - Nombre del archivo
 */
void readFileNames(cadena *names, int *size, cadena nameFile)
{
    FILE *ap;
    cadena name;
    char *apName;

    ap = openFile(nameFile, "r"); // Se abre para lectura el archivo

    if (ap != NULL)
    {
        *size = 0;

        apName = fgets(name, MAX_CAD, ap);

        while (apName != NULL && (*size) < MAX)
        {
            name[strlen(name) - 1] = '\0';
            strcpy(names[*size], name);
            (*size)++;
            apName = fgets(name, 256, ap);
        }

        fclose(ap); // Se cierra el archivo para que se guarde en disco
    }
}

/**
 * @brief Limpia la consola
 */
void cleanConsole()
{
#ifdef _WIN32      // Verifica el sistema operativo
    system("cls"); // Comando para Windows
#else
    system("clear"); // Comando para Unix/Linux/macOS
#endif
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

/**
 * @brief Limpia las últimas n lineas de la consola
 *
 * @param n - Total de lineas a borrar
 */
void clearConsoleLines(int n)
{
    for (int i = 0; i < n; i++)
        printf("\033[A\033[2K"); // Sube una línea y la limpia
}