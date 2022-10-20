#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

/*****************************************************************************************/
/* TDPRG1041 v1.0 PARTIE I exercice no 1                                                 */
/* pascal.ricq at junia.com                                                              */
/*                                                                                       */
/*****************************************************************************************/

int main()
{

	setlocale(LC_ALL, "fr-FR");

	// Moyenne des valeurs saisies, fin de saisie = -1

	int somme_val = 0;
	int valeur = 0;
	int compteur = 0;

	do
	{
		printf("Calcul de moyenne | Saisissez une valeur : \n");
		scanf("%d", &valeur);
		somme_val += valeur;
		compteur++;
	} while (valeur != -1);

	printf("%.2f\n", (float)(somme_val + 1) / (float)(compteur - 1));

	system("pause");

	return EXIT_SUCCESS;
}