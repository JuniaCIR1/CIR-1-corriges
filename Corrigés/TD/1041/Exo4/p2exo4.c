#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

/*****************************************************************************************/
/* TDPRG1041 v1.0 PARTIE II exercice no 4                                                */
/* pascal.ricq at junia.com                                                              */
/*                                                                                       */
/*****************************************************************************************/

// Calculez au bout de combien d'ann�es, un capital plac� � un certain taux d'int�r�ts capitalisables aura atteint le double de sa valeur.

int main()
{

	setlocale(LC_ALL, "fr-FR");

	printf("\n");

	int annee = 0;
	float capital = 5000;
	float taux_interets = 2;
	float capital_two = capital * 2;

	while (capital < capital_two)
	{
		capital = capital * (1 + taux_interets / 100);
		annee++;
	}

	printf("\nVotre capital aura double au bout de %d annee | capital = %f\n", annee, capital);

	system("pause");

	return EXIT_SUCCESS;
}