/**
 * Programa: Entrada de datos
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char nombre[100], escuela[256];
	int edad;
	float promedio;
	char letraPais;

	printf("\n¡Hola!\n");
	printf("\n¿Cual es tu nombre?\n");
	//Permite especificar el tamaño de datos a leer, evitando desbordamientos de buffer
	fgets(nombre, sizeof(nombre), stdin);

	//Eliminar el salto de línea si fgets lo leyó
	nombre[strcspn(nombre, "\n")] = '\0';

	printf("\n¿Que edad tienes?\n");
	scanf("%d", &edad);

	printf("\n¿Que promedio obtuviste en la prepa?\n");
	scanf("%f", &promedio);

	printf("\n¿Como se llama tu escuela?\n");
	getc(stdin);
	scanf("%[^\n]", escuela);

	printf("\nEscribe la primer letra de tu pais:\n");
	getc(stdin);
	scanf("%c", &letraPais);

	printf("\n%s tienes %d años, estudias en %s y tienes %.2f de promedio, la inicial de tu pais es: %c\n\n", nombre, edad, escuela, promedio, letraPais);

	return 0;
}
