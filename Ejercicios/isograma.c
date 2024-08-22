#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef char cadena[256];

bool esIsograma(cadena frase);

int main(int argc, char const *argv[])
{
  cadena frase;

  while (1)
  {
    printf("\n----------ISOGRAMAS----------\n");
    printf("Escribe una frase: ");
    getc(stdin);
    scanf("%[^\n]", frase);

    if (strcmp("n", frase) == 0)
      break;

     printf("\n%s\n", esIsograma(frase) ? "Es un ISOGRAMA" : "NO es un ISOGRAMA");
  }

  return 0;
}

bool esIsograma(cadena frase)
{
  int longuitud = strlen(frase);
  int letras[256] = {0}; // Almacena las letras que ya hemos encontrado

  for (int i = 0; i < longuitud; i++)
  {
    int valorLetra = frase[i]; // Obtiene el valor ascii de la letra

    // Vericar que la letra ha sido encontrada
    if (valorLetra != 32 && valorLetra != 45 && letras[valorLetra] > 0)
      return false;

    letras[valorLetra]++; // Marca la letra como encontrada
  }

  return true;
}