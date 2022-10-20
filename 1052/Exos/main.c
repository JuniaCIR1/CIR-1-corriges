#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include "tdprg1052.h"

// Exercice 1

// Donner le code de d�claration, d'impl�mentation ainsi qu'un exemple d'appel de la fonction somme() qui
// renvoie sous la forme d'une valeur enti�re la somme des n premiers entiers positifs.
int somme(int n)
{
	int var = 0;
	for (int i = 0; i <= n; i++)
	{
		var += i;
	}
	return var;
}

// Exercice 2
// renvoie une valeur float al�atoire rang_min<= x < rang_max
float rangedRand(float range_min, float range_max)
{
	// Generate random numbers in the half-closed interval
	// [range_min, range_max). In other words,
	// range_min <= random number < range_max

	float u = (float)((double)rand() / ((double)RAND_MAX + 1) * ((double)range_max - (double)range_min)) + range_min;
	return (u);
}

// Exercice 2.a
int remplirTab(float tab[], int tabSize, int nbVal, float min, float max)
{
	for (int i = 0; i < tabSize; i++)
	{
		tab[i] = rangedRand(min, max);
	}
	return nbVal;
}

// Exercice 2.b
// afficherTab()

void afficherTab(float tab[], int tabSize, int nbVal)
{
	printf("\n tab contient :");
	for (int i = 0; i < tabSize; i++)
	{
		printf("%.2f ", tab[i]);
	}
	printf("\n");
}

// Exercice 2.c
// maxTab()

int maxTab(float tab[], int tabSize, int nbVa)
{
	float max = tab[0];
	int indice_max;

	for (int i = 1; i < tabSize; i++)
	{
		if (tab[i] > max)
		{
			max = tab[i];
			indice_max = i;
		}
	}
	return indice_max;
}

// Exercice 3
// compte le nombre de caract�res dans une cha�ne de caract�res

int compterCar(char chaine[], int tailleMax)
{
	int compteur = 0;
	for (int i = 0; i < tailleMax; i++)
	{
		compteur++;
	}
	return compteur - 1;
}

//	Exercice 4
// occur()
int occur(char mot[], int tailleMax, char car)
{
	int compteur = 0;
	for (int i = 0; i < tailleMax; i++)
	{
		if (mot[i] == car)
		{
			compteur++;
		}
	}
	return compteur;
}

// Exercice 5
// swap()
int swap(int *A, int *B)
{
	if ((A == NULL) | (B == NULL))
	{
		return -1;
	}

	int *temp;
	*temp = *B;
	*B = *A;
	*A = *temp;

	return 0;
}

// ordonne() A et B
int ordonne(int *A, int *B)
{
	if (A == NULL || B == NULL)
	{
		return -1;
	}

	if (*A > *B)
	{
		swap(A, B);
	}
	return *A, *B;
}

// Exercice 6

bool isMagic(int carre[sizeCarre][sizeCarre])
{
	bool valide = true;

	for (int i = 0; i < sizeCarre; i++)
	{
		int somme_j = 0;
		for (int j = 0; j < sizeCarre; j++)
		{
			somme_j += carre[i][j];
		}
		if (somme_j != sizeCarre)
		{
			valide = false;
		}
	}
	return valide;
}

// Exercice 7

// int triangleDePascal(int rang)
// {
// 	int array[rang];
// 	for (int i = 0; i < rang; i++)
// 	{

// 	}
// }

int main()
{
	setlocale(LC_ALL, "fr-FR"); // gestion des accents dans la console

	srand((unsigned int)time(NULL)); // init g�n�rateur nb al�atoires

	// test somme();
	// on peut v�rifier en calculant n(n+1)/2
	// le calcul s'arr�te pour n = 65536 (d�passement)

	int ret = 0;
	int n;
	n = 65536;

	while (ret >= 0)
	{
		ret = somme(n);
		printf("\nSomme des %d premiers entiers positifs = %d", n, ret);
		n++;
	}

	// Exercice 2.a
	int nbVal = 10;
	float tab[SIZETAB1];

	ret = remplirTab(tab, SIZETAB1, nbVal, 5.0F, 15.0F);
	printf("\n tab contient :");
	for (int i = 0; i < SIZETAB1; i++)
	{
		printf("%.2f ", tab[i]);
	}
	printf("\n");

	// Exercice 2.b
	afficherTab(tab, SIZETAB1, nbVal);
	// Exercice 2.c
	int posMax = maxTab(tab, SIZETAB1, nbVal);
	if (posMax >= 0)
	{
		printf("\nLa valeur Max est %f\n", tab[posMax]);
	}

	//  Exercice 3
	char mot[] = "Bonjour";
	printf("\nLa chaine %s contient %d caractere(s)\n", mot, compterCar(mot, _countof(mot)));

	//	Exercice 4
	char letter = 'o';
	char word[] = "toto";
	printf("Le nombre d'occurences du caractere %c dans la chaine %s est de : %d\n", letter, mot, occur(mot, _countof(mot), letter));

	//	Exercice 5

	int a = 5;
	int b = 6;

	printf("%d\n", ordonne(&a, &b));

	//  Exercice 6

	int carre[sizeCarre][sizeCarre] = {
		{2, 7, 6},
		{9, 5, 1},
		{4, 3, 8}};

	printf("\nCe carre");
	isMagic(carre) ? printf(" est") : printf(" n'est pas");
	printf(" magique\n");

	system("pause");

	return EXIT_SUCCESS;
}
