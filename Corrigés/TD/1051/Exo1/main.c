#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAB1SIZE 100

int main()
{

	// LE SUJET COMPLET EST DISPONIBLE SUR LE DEPOT GITHUB

	// Exo1 - a

	// Initialiser un tableau de 100 nombres d�cimaux � la valeur 0.0

	int array[TAB1SIZE], arr_compteur = 0;

	for (int i = 0; i < TAB1SIZE - 1; i++)
	{
		array[i] = 0.0;
		arr_compteur++;
	}

	printf("Nombre d'elements dans le tableau : %d\n", arr_compteur + 1);
	// Demander � l'utilisateur de saisir des valeurs jusqu'� ce qu'il entre une valeur
	// n�gative et m�moriser le nombre de valeurs saisies

	int value;
	int compteur = 0;

	while (value > 0)
	{
		printf("\nSaisissez une valeur : ");
		scanf("%d", &value);
		if (value > 0)
		{
			array[compteur] = value;
			compteur++;
		}
	}

	// Exo1-b
	// Afficher le tableau

	for (int i = 0; i < TAB1SIZE; i++)
	{
		printf("%d ", array[i]);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}


	

	// Exo1-c
	// Demander � l'utilisateur une valeur � ins�rer � la position de son choix.
	// La premi�re case du tableau �tant la premi�re position.

	int tab_value;
	int value_position;

	printf("\nDonnez une valeur a inserer dans le tableau : ");
	scanf("%d", &tab_value);
	printf("\nDonnez la position de votre valeur : ");
	scanf("%d", &value_position);

	array[value_position - 1] = tab_value;

	// Exo1-d
	// Afficher le tableau

	for (int i = 0; i < TAB1SIZE; i++)
	{
		printf("%d ", array[i]);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}

	// Exo1-e
	// Demander � l'utilisateur de supprimer une valeur � la position de son choix.
	// On d�calera les �ventuelles valeurs qui suivent vers l'avant du tableau.

	int del_value_position;

	printf("\nDonnez la position de la valeur que vous souhaitez supprimer : ");
	scanf("%d", &del_value_position);

	if (del_value_position >= TAB1SIZE)
	{
		printf("L'element indique n'est pas dans le tableau\n");
	}
	else
	{

		for (int i = del_value_position - 1; i < TAB1SIZE - 1; i++)
		{
			array[i] = array[i + 1];
		}

		// Exo1-f
		// Afficher le tableau

		int second_arr_compteur = 0;

		for (int i = 0; i < TAB1SIZE - 1; i++)
		{
			printf("%d ", array[i]);
			second_arr_compteur++;
			if ((i + 1) % 10 == 0)
			{
				printf("\n");
			}
		}

		printf("\nNombre d'elements dans le tableau : %d\n", second_arr_compteur + 1);
	}

	// Exo1-g
	// Calculer et afficher la moyenne des valeurs dans le tableau
	float somme = 0;
	float denominateur = 0;

	for (int j = 0; j < TAB1SIZE - 2; j++)
	{
		if (array[j] != 0)
		{
			somme += array[j];
			denominateur++;
		}
	}
	float moyenne = (float)somme / denominateur;
	printf("\nLa moyenne de toute les valeurs du tableau est = %.2f\n", moyenne);

	system("pause");

	return EXIT_SUCCESS;
}
