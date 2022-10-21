#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

/*****************************************************************************************/
/* TDPRG1041 v1.0 PARTIE II exercice no 5                                                */
/* pascal.ricq at junia.com                                                              */
/*                                                                                       */
/*****************************************************************************************/

// Afficher la table de caracteres ASCII standard sauf pour les codes inferieurs a 32

int main()
{

	setlocale(LC_ALL, "fr-FR");

	char valeur = 0;

	for(int i = 0; i < 32; i++)
	{
		printf("%c | ", valeur);
		valeur++;
	}

	printf("\n");

	system("pause");

	return EXIT_SUCCESS;
}