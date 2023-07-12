#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char cadena[256];

int main(int argc, char const *argv[])
{
	int inicio, fin;
	cadena frase;

	printf("Frases que son Palindromos\n");
	printf("Ingresa una frase sin espacios:\n\n");
	scanf("%s", frase);

	inicio = 0;
	fin = strlen(frase) - 1;

	while(inicio <= fin && frase[inicio] == frase[fin]) {

		inicio++;
		fin--;

	}

	if (inicio > fin)
		printf("La frase dada es un PALINDROMO\n");
	else
		printf("La frase dada NO es un PALINDROMO\n");

	return 0;
}