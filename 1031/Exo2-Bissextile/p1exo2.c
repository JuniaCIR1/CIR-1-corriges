#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
/*****************************************************************************************/
/* TDPRG1031 PARTIE I exercice no 2                                                      */
/* pascal.ricq at junia.com 25/09/2022                                                   */
/*	                                                                                     */
/*****************************************************************************************/
/* Annee bissextile */
int main()
{
	setlocale(LC_ALL, "fr-FR");

	int annee = 2004;

	// printf("\nEntrez votre annee : ");
	// scanf("%d", &annee);

	if ((annee % 100 != 0 && annee % 4 == 0) || (annee % 400 == 0))
	{
		printf("L'annee %d est Bissextile\n", annee);
	}
	else
	{
		printf("L'annee %d n'est pas Bissextile\n", annee);
	}

	system("pause");

	return (EXIT_SUCCESS);
}
