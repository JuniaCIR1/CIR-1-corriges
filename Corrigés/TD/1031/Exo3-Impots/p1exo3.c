#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <math.h>
/*****************************************************************************************/
/* TDPRG1031 PARTIE I exercice no 3                                                      */
/* pascal.ricq at junia.com 25/09/2022                                                   */
/*	                                                                                     */
/*****************************************************************************************/
/* Calcul montant impot sur le revenu */

float main()
{
	setlocale(LC_ALL, "fr-FR"); // gestion des accents dans la console
	float revenu_annuel;
	float impositions = 0;
	float tranche;
	printf("Donnez moi votre revenu annuel et je calculerai vos impositions : ");
	scanf_s("%f", &revenu_annuel);
	float reste_impose = revenu_annuel;

	if (revenu_annuel > 10225)
	{
		tranche = 10225;
		if (reste_impose < tranche)
		{
			impositions += reste_impose * 1 - reste_impose;
		}
		else
		{
			impositions += tranche * 1 - tranche;
		}
		reste_impose -= tranche;
		if (reste_impose < 0)
		{
			reste_impose = 0;
		}
		printf("%.2f | %.2f\n", reste_impose, impositions);
	}
	if (10226 < revenu_annuel < 26070)
	{
		tranche = 26070 - 10226;
		if (reste_impose < tranche)
		{
			impositions += reste_impose * 1.11 - reste_impose;
		}
		else
		{
			impositions += tranche * 1.11 - tranche;
		}
		reste_impose -= tranche;
		if (reste_impose < 0)
		{
			reste_impose = 0;
		}
		printf("%.2f | %.2f\n", reste_impose, impositions);
	}
	if (26071 < revenu_annuel < 74545)
	{
		tranche = 74545 - 26071;
		if (reste_impose < tranche)
		{
			impositions += reste_impose * 1.30 - reste_impose;
		}
		else
		{
			impositions += tranche * 1.30 - tranche;
		}
		reste_impose -= tranche;
		if (reste_impose < 0)
		{
			reste_impose = 0;
		}
		printf("%.2f | %.2f\n", reste_impose, impositions);
	}
	if (74546 < revenu_annuel < 160336)
	{
		tranche = 160336 - 74546;
		if (reste_impose < tranche)
		{
			impositions += reste_impose * 1.41 - reste_impose;
		}
		else
		{
			impositions += tranche * 1.41 - tranche;
		}
		reste_impose -= tranche;
		if (reste_impose < 0)
		{
			reste_impose = 0;
		}
		printf("%.2f | %.2f\n", reste_impose, impositions);
	}
	if (revenu_annuel > 160336)
	{
		impositions += reste_impose * 1.45 - reste_impose;
		if (reste_impose < 0)
		{
			reste_impose = 0;
		}
		printf("%.2f | %.2f\n", reste_impose, impositions);
	}

	printf("Votre revenu net est : %f\n", revenu_annuel - impositions);
}