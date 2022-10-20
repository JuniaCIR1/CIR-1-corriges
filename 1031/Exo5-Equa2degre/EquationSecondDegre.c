#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <math.h>
/*****************************************************************************************/
/* TDPRG1031 PARTIE I exercice no 4                                                      */
/* pascal.ricq at junia.com 25/09/2022                                                   */
/*	                                                                                     */
/*****************************************************************************************/

/* Resolution Equation second degre */

float main()
{
	setlocale(LC_ALL, "fr-FR");

	int a = 1, b = 2, c = 1;

	int discriminant = pow(b, 2) - 4 * (a * c);

	printf("Votre discriminant est : %d\n", discriminant);

	if (discriminant > 0)
	{
		float x1 = (-b + sqrt(discriminant)) / (2 * a);
		float x2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("Solution x1 : %.2f\nSolution x2 : %.2f\n", x1, x2);
	}
	else if (discriminant == 0)
	{
		float x = (-b / (2 * a));
		printf("Solution x : %2.f\n", x);
	}
	else
	{
		printf("Votre racine est inferieure a 0");
	}

	return EXIT_SUCCESS;
}