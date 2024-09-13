/**
 * Programa: Palindromo
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

typedef char cadena[256];

void removeSpaces(char *originalPhrase, char *newPhrase);
bool isPalindromo(cadena phrase);

int main(int argc, char const *argv[])
{
    cadena phrase, newPhrase;

    printf("\n---------- Palindromo ----------\n");

    printf("\nIntroduce una frase:\n");
    scanf("%[^\n]", phrase);

    removeSpaces(phrase, newPhrase);

    printf("\nLa frase '%s' %s\n\n", phrase, isPalindromo(newPhrase) ? "es un Palindromo" : "no es un Palindromo");

    return 0;
}

/**
 * @brief Quita los espacios de la cadena original y pone la frase en minúsculas
 * 
 * @param originalPhrase - cadena original
 * @param newPhrase  - cadena sin espacios
 */
void removeSpaces(char *originalPhrase, char *newPhrase) 
{
    int j = 0;
    
    for (int i = 0; originalPhrase[i] != '\0'; i++) //Remove spaces
        if (originalPhrase[i] != ' ')
            newPhrase[j++] = tolower((char)originalPhrase[i]); //Convert to lowercase

    newPhrase[j] = '\0'; //Finish the new String
}

bool isPalindromo(cadena phrase)
{
    int length = strlen(phrase);

    for (int i = 0; i < length / 2; i++)
    {
        if (phrase[i] != phrase[length - 1 - i])
            return false;
    }

    return true;    
}