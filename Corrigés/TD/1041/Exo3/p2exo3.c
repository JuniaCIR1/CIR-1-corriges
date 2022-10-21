#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

/*****************************************************************************************/
/* TDPRG1041 v1.0 PARTIE II exercice no 3                                                */
/* pascal.ricq at junia.com                                                              */
/*                                                                                       */
/*****************************************************************************************/

// Afficher toutes les ann�es Bissextiles en partant de l'an 3000 jusqu'� l'an 2000.
// boucle for avec d�cr�ment.

int main() {

	setlocale(LC_ALL, "fr-FR");

	int annee_arrivee = 2000;

	for(int i = 3000; i > annee_arrivee; i--)
	{
		if((i%4 == 0 && i%100 != 0)||(i%400 == 0))
		{
			printf("\n%d est une annee bissextiles", i);
		}
	}

	system("pause");
	


	return EXIT_SUCCESS;
}