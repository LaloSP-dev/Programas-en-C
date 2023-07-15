#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_CAD 256
#define MAX_VACAS 2

typedef char cadena[MAX_CAD];

typedef struct
{
    int num_pac;
    cadena nombre;
    int edad;
    float produc;
} Tipo_vaca;

void Inicializa_un_registro(Tipo_vaca *ap_vaca, int num_paciente);
float rand_float_entre_0_y_1(int num_dec);
void Despliega_un_registro(Tipo_vaca vaca);
void inicializa_arreglo_de_registros(Tipo_vaca *vacas);
void despliega_arreglo_de_registros(Tipo_vaca *vacas);

int main(int argc, char const *argv[])
{
    Tipo_vaca Ganado[MAX_VACAS];

    srand(time(NULL));

    inicializa_arreglo_de_registros(Ganado);
    despliega_arreglo_de_registros(Ganado);

    return 0;
}

void Inicializa_un_registro(Tipo_vaca *ap_vaca, int num_paciente)
{
    ap_vaca->num_pac = num_paciente;

    printf("Escribe el nombre de la vaca: ");
    scanf("%[^\n]", ap_vaca->nombre);
    getc(stdin);

    ap_vaca->edad = (rand() % 35) + 1;

    ap_vaca->produc = rand_float_entre_0_y_1(2) + (rand() % 100);
}

float rand_float_entre_0_y_1(int num_dec)
{
    float decimal = 0.0;
    int nd = 1, i;

    if (num_dec > 0)
    {
        for (i = 1; i <= num_dec; i++)
            nd = nd * 10;
        decimal = (rand() % nd + 1) / (float)nd;
    }

    return decimal;
}

/**
 * @brief Despliega los datos del registro
 *
 * -15 -> indica que se debe asignar un ancho de campo de 15 caracteres para el valor
 * El uso del signi '-' indica que el campo debe aliniarse a la izquierda
 *
 * @param vaca
 */
void Despliega_un_registro(Tipo_vaca vaca)
{

    printf("%-15d%-15s%-15d%-15.2f\n", vaca.num_pac, vaca.nombre, vaca.edad, vaca.produc);
}

void inicializa_arreglo_de_registros(Tipo_vaca *vacas)
{
    int i;

    for (i = 0; i < MAX_VACAS; i++)
        Inicializa_un_registro(&(vacas[i]), i + 100);
}

void despliega_arreglo_de_registros(Tipo_vaca *vacas)
{
    int i;

    printf("\nInformacion del GANADO\n");
    printf("%-15s%-15s%-15s%-15s\n", "No.Paciente", "Nombre", "Edad", "Productividad");
    for (i = 0; i < MAX_VACAS; i++)
        Despliega_un_registro(vacas[i]);
}