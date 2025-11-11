#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_CAD 256
#define MAX_VACAS 2

typedef char cadena[MAX_CAD];

typedef struct
{
    int numPaciente;
    cadena nombre;
    int edad;
    float productividadLechera;
} TipoVaca;

void inicializaRegistroVaca(TipoVaca *apVaca, int numPaciente);
float generadorDecimales(int numDecimales);
void despliegaRegistroVaca(TipoVaca vaca);
void inicializaRegsitrosGanado(TipoVaca *vacas);
void despliegaResgistrosGanado(TipoVaca *ganado);

int main(int argc, char const *argv[])
{
    TipoVaca ganado[MAX_VACAS];

    srand(time(NULL)); 

    inicializaRegsitrosGanado(ganado);
    despliegaResgistrosGanado(ganado);

    return 0;
}

/**
 * @brief Procedimiento para el registro de Vaca
 * @param apVaca 
 * @param numPaciente 
 */
void inicializaRegistroVaca(TipoVaca *apVaca, int numPaciente)
{
    apVaca->numPaciente = numPaciente;
    apVaca->edad = rand() % 36;
    apVaca->productividadLechera = generadorDecimales(2) + (rand() % 100);

    printf("Escribe nombre de la Vaca: ");
    scanf("%[^\n]", apVaca->nombre);
    getc(stdin);
}

/**
 * @brief Genera numeros decimales 
 * @param numDecimales 
 * @return 
 */
float generadorDecimales(int numDecimales)
{
    float decimal = 0.0;
    int nd = 1;

    if (numDecimales > 0)
    {
        for (int i = 1; i <= numDecimales; i++)
            nd = nd * 10;
        
        decimal = (rand() % nd + 1) / (float)nd;
    }
    
    return decimal;
}

/**
 * @brief Despliega registro de Vaca
 * -15 -> indica que se debe asignar un ancho de campo de 15 caracteres para el valor.
 * El uso del signo '-' inidca que el campo debe alinearse a la izquierda.
 * @param vaca 
 */
void despliegaRegistroVaca(TipoVaca vaca)
{
    printf("%-15d%-15s%-15d%-15.2f\n", vaca.numPaciente, vaca.nombre, vaca.edad, vaca.productividadLechera);
}

/**
 * @brief Iniciliza todo el ganado
 * @param vacas 
 */
void inicializaRegsitrosGanado(TipoVaca *vacas)
{
    printf("\n\n---------- REGISTRO GANADO ----------\n\n");

    for (int i = 0; i < MAX_VACAS; i++)
        inicializaRegistroVaca(&vacas[i], i + 100);
}

/**
 * @brief Muestra listado del Ganado
 * @param ganado 
 */
void despliegaResgistrosGanado(TipoVaca *ganado)
{
    printf("\n\n---------- LISTA GANADO ----------\n\n");

    printf("%-15s%-15s%-15s%-15s\n", "No. Paciente", "Nombre", "Edad", "Produc. Lechera");

    for (size_t i = 0; i < MAX_VACAS; i++)
        despliegaRegistroVaca(ganado[i]);
    
    printf("\n");
}