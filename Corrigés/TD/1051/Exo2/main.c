#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int RangedRand(int range_min, int range_max)
{
	// Generate random numbers in the half-closed interval
	// [range_min, range_max). In other words,
	// range_min <= random number < range_max
	double val = (double)rand() / (RAND_MAX + 1) * (range_max - range_min) + range_min;

	return ((int)val);
}

int main()
{

	srand((unsigned int)time(NULL));

	// Exo-2
	// Exo 2-a.
	// Initialiser un tableau de 10 lignes et 10 colonnes avec des valeurs entières aléatoires comprises entre 1 et 20
	// Utilisez la fonction int RangedRand(int range_min, int range_max)
#define ONETABSIZE 10

	int array[ONETABSIZE][ONETABSIZE];

	// printf("%d\n", ONETABSIZE);

	for (int i = 0; i < ONETABSIZE - 1; i++)
	{
		for (int j = 0; j < ONETABSIZE - 1; j++)
		{
			array[i][j] = RangedRand(1, 10);
		}
	}
	// Exo 2-b
	// Afficher le tableau
	for (int i = 0; i <= ONETABSIZE - 1; i++)
	{
		printf("{");
		for (int j = 0; j <= ONETABSIZE - 1; j++)
		{
			printf(" %d,", array[i][j]);
		}
		printf("}\n");
	}

	// Exo 2-c
	// Remplir un second tableau de mêmes dimensions avec les valeurs du premier tableau
	// en créant une symétrie par rapport à une diagonale
	int array2[ONETABSIZE][ONETABSIZE];

	for (int i = 0; i < ONETABSIZE - 1; i++)
	{
		printf("{");
		for (int j = 0; j <= i; j++)
		{
			array2[i][j] = array[i][j];
			array2[j][i] = array[i][j];
		}
		printf("}\n");
	}

	// Exo 2-d
	// afficher le deuxième tableau

	for (int i = 0; i < ONETABSIZE - 1; i++)
	{
		printf("{");
		for (int j = 0; j < ONETABSIZE - 1; j++)
		{
			printf(" %d ", array2[i][j]);
		}
		printf("}\n");
	}

	system("pause");

	return EXIT_SUCCESS;
}