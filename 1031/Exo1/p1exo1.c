#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>
/*****************************************************************************************/
/* TDPRG1031 v1.1 PARTIE I exercice no 1                                                 */
/* pascal.ricq at junia.com                                                              */
/*                                                                                       */
/*****************************************************************************************/

int main()
{

	setlocale(LC_ALL, "fr-FR");

	int A;
	int B;
	int C;

	/* Permuter deux valeurs */
	printf("\nValeur de A : ");
	scanf("%d", &A);
	printf("\nValeur de B : ");
	scanf("%d", &B);
	printf("\nValeur de C : ");
	scanf("%d", &C);

	printf("%s %d %d %d ", "Vous avez choisi ces 3 valeurs respectives : ", A, B, C);
	// Ordonner 3 valeurs
	if (A > B)
	{
		int temp = A;
		A = B;
		B = temp;
	}
	if (B > C)
	{
		int temp = B;
		B = C;
		C = temp;
	}
	if (A > B)
	{
		int temp = A;
		A = B;
		B = temp;
	}

	printf("%s %d %d %d", "Les valeurs ordonnées dans l'ordre croissants sont les suivantes : ", A, B ,C);

	return EXIT_SUCCESS;
}
