#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
/*****************************************************************************************/
/* TDPRG1031 PARTIE I exercice no 4                                                      */
/* pascal.ricq at junia.com 25/09/2022                                                   */
/*	                                                                                     */
/*****************************************************************************************/
/* Existance d'un triangle */

int main()
{
	setlocale(LC_ALL, "fr-FR");

	int AB, BC, CA;

	printf("Chosissez les longueurs de vos cotes : ");
	scanf("%d %d %d", &AB, &BC, &CA);

	if (CA < (AB + BC) && BC < (CA + AB) && AB < (BC + CA))
	{
		printf("Votre triangle existe.\n");
	}
	else
	{
		printf("Votre triangle n'existe pas.\n");
	}

	system("pause");

	return (EXIT_SUCCESS);
}
