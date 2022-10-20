#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

/*****************************************************************************************/
/* TDPRG1041 v1.0 PARTIE II exercice no 2                                                */
/* pascal.ricq at junia.com                                                              */
/*                                                                                       */
/*****************************************************************************************/

// A l'aide d'une boucle for, calculer la somme des n premiers entiers non nuls.

int main()
{

	setlocale(LC_ALL, "fr-FR");

	int integer = 10;
	int somme = 0;

	for (int i = 1; i <= integer; i++)
	{
		somme += i;
		printf("%d\n", i);
	}

	printf("= %d\n", somme);

	system("pause");

	return EXIT_SUCCESS;
}