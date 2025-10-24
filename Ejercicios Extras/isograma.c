#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

typedef char cadena[256];

bool isIsograma(cadena frase);

int main(int argc, char const *argv[])
{
    cadena frase;

    while (1)
    {
        printf("\n---------- ISOGRAMAS ----------\n");

        printf("\nIntroduce una frase: ");
        fgets(frase, sizeof(frase), stdin);
        frase[strcspn(frase, "\n")] = '\0';

        if (strcmp("n", frase) == 0)
            break;

        printf("\n%s\n", isIsograma(frase) ? "ES UN ISOGRAMA" : "NO ES UN ISOGRAMA");
    }

    return 0;
}

/**
 * @brief Verifica si la frase es un Isograma
 * @param frase
 * @return - true o false
 */
bool isIsograma(cadena frase)
{
    bool seen['z' - 'a' + 1] = {false}; // Almacena las letras que ya hemos encontrado
    cadena newfrase;
    size_t i = 0;

    if (!frase)
        return false;

    char c;

    while ((c = tolower(frase[i++])))
    {
        if (isalpha(c)) // Verifica si es una letra del alfabeto
            if (seen[c - 'a']) // Busca si esta repetida
                return false;
            
            seen[c - 'a'] = true; // Primera vez que aparece
    }

    return true;
}
