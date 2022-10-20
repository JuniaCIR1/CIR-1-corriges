#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
#include "header.h"



short fun(short t[], int k)
{
    int i = 0;
    while (i < 10 && t[i] < k)
    {
        printf("%d : %d\n", i, t[i]);
        i++;
    }
    return t[i];
}

int valoriser(short t[], int nbVal)
{
    int compteur = 0;
    for(int i = 0; i < nbVal; i++)
    {
        if (t[i] < t[i+1])
        {
            t[i] += 1;
            compteur++;
        }
    }
    return compteur;
}


int main(void)
{
    // make sure to write every variables and comments in english

    short tab[GLOBAL_VARIABLE] = {2};

    printf("tab[0] : %d \n", tab[0]);
    printf("tab[1] : %d \n", tab[1]);
    printf("taille : %d \n", sizeof(tab));

    for (int i = 0; i < GLOBAL_VARIABLE; i++)
    {
        printf("%d ", tab[i]);
    }

    printf("\n");

    for (int i = 3; i <= 8; i++)
    {
        tab[i] = 2 * i;
    }

    tab[0] = fun(tab, 7);

    int modif = valoriser(tab, GLOBAL_VARIABLE);

    for (int i = 0; i < GLOBAL_VARIABLE; i++)
    {
        printf("%d ", tab[i]);
    }

    printf("nombre de modifications : %d", modif);


    printf("\n %d\n", sizeof(double));

    system("pause");

    return EXIT_SUCCESS;
}
