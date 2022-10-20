#pragma once
#include <stdlib.h>
#include <stdbool.h>
#define sizeCarre 3
#define SIZETAB1 100

// Exercice 1
int somme(int n);

// Exercice 2
float rangedRand(float range_min, float range_max);

// Exercice 2.a
int remplirTab(float tab[], int tabSize, int nbVal, float min, float max);

// Exercice 2.b
void afficherTab(float tab[], int tabSize, int nbVal);

// Exercice 2.c
int maxTab(float tab[], int tabSize, int nbVa);

// Exercice 3
int compterCar(char chaine[], int tailleMax);

// Exercice 4
int occur(char mot[], int tailleMax, char car);

// Exercice 5
int swap(int *A, int *B);

int ordonne(int *A, int *B);

// Exercice 6
bool isMagic(int carre[sizeCarre][sizeCarre]);

// Exercice 7
int triangleDePascal(int rang);