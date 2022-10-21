#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
#include "header.h"

#define TAILLE 27
#define TAILLE_MAX 100

int position(char t[], char charactere)
{
    bool is_there = 0;
    int position;
    for (int i = 0; i < TAILLE - 1; i++)
    {
        if (t[i] == charactere)
        {
            is_there = 1;
            position = i;
        }
    }
    if (is_there == 1)
    {
        return position;
    }
    else
    {
        return -1;
    }
}

int main(void)
{
    // make sure to write every variables and comments in english

    char alphabetClair[TAILLE];
    char alphabetChiffre[TAILLE] = "julescartvwxyzbdfghikmnopq";
    char texteClair[TAILLE_MAX] = "bon courage";
    char texteChiffre[TAILLE_MAX];

    char valeur = 97;

    printf("|");
    for (int i = 0; i < TAILLE - 1; i++)
    {
        alphabetClair[i] = valeur;
        valeur++;
        printf(" %c |", alphabetClair[i]);
    }
    printf("\n");

    char kar = 3;
    int pos = position(alphabetClair, kar);
    printf("\n%d\n", pos);
    printf("Le texte en clair est : %s\n", texteClair);

    for (int i = 0; i < TAILLE_MAX; i++)
    {
        char space = ' ';
        if (texteClair[i] == space)
        {
            texteChiffre[i] = space;
        }
        else
        {
            int new_position = position(alphabetClair, texteClair[i]);
            if (new_position == -1)
            {
                printf("Le texte à chiffrer contient un caractère qui n’existe pas dans le tableau alphabetClair\n");
                break;
            }
            texteChiffre[i] = alphabetChiffre[new_position];
        }
    }

    printf("Le texte chiffre est : %s\n", texteChiffre);

    system("pause");

    return EXIT_SUCCESS;
}
