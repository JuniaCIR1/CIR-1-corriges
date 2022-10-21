# Questions :

## Partie 1 

1) Combien de cases le tableau tab comporte-t-il ?

Le tableau tab contient *10* cases.

2) Donnez l’affichage des lignes 13,14 et 15.

La ligne 13 affiche '2', la ligne 14 affiche '0', la ligne 15 affiche '20'.

3) Donnez le contenu de toutes les cases du tableau lors du passage à la ligne 20.

2 0 0 6 8 10 12 14 16 0
   
4) Donnez l’affichage produit par la ligne 21.

0 : 2 
1 : 0
2 : 0
3 : 6
   
5) Donnez le contenu de toutes les cases du tableau lors du passage à la ligne 22.

8 0 0 6 8 10 12 14 16 0
   
6) Ecrivez une fonction valoriser qui prend un tableau d’entiers en paramètre ainsi que
son nombre d’éléments et qui le parcourt de gauche à droite. La fonction doit
modifier les valeurs du tableau en ajoutant 1 à celles qui sont plus petites que leur
voisine de droite. La fonction renvoie le nombre de modifications qu’elle a effectuées.


Exemples de résultats attendus :
1|2|5|4|12 --(est transformé en)--> 2|3|5|5|12 (valeur de retour : 3)
15|4|0 --(est transformé en)--> 15|4|0 (valeur de retour : 0)
1|4|10 --(est transformé en)--> 2|5|10 (valeur de retour : 2)

```c
int valoriser(short t[], int nbVal)

{
    int compteur = 0;

    for(int i = 0; i < nbVal; i++)
    {

        if (t[i] < t[i+1])
        {
            t[i] += 1;
            compteur++;
        }
    }

    return compteur;

}
```


7) Ecrivez l’appel de fonction correspondant pour utiliser la fonction valoriser sur
l’ensemble des éléments de tab et afficher la valeur de retour de cet appel.

## Partie 2 

1) Donnez le code permettant d’initialiser le tableau alphabetClair contenant les lettres de « a » à « z »
sachant que le code ascii du caractère « a » est 97

```c
    char valeur = 97;

    for (int i = 0; i < 26; i++)
    {
        alphabetClair[i] = valeur;
        valeur++;
        printf("%c ", alphabetClair[i]);
    }
    printf("\n");
```

2) Ecrivez une fonction position qui prend en paramètre un tableau de caractères et un caractère, et
retourne la position de ce caractère dans le tableau s’il existe ou -1 s’il n’existe pas.

```c
int position(char t[], char charactere)
{
    bool is_there = 0;
    int position;
    for (int i = 0; i < TAILLE - 1; i++)
    {
        if (t[i] == charactere)
        {
            is_there = 1;
            position = i;
        }
    }
    if (is_there == 1)
    {
        return position;
    }
    else
    {
        return -1;
    }
}
```


3) Donnez le code permettant de faire le chiffrement d’une chaine de caractères en substituant chaque
caractère par son correspondant dans le tableau alphabetChiffre, sachant que le caractère
« espace » reste inchangeable.
Nous supposons que le texte à chiffrer ne contient que des caractères de « a » à « z » et des espaces.
Utilisez la fonction position dans votre programme.



4) Modifiez le code précédent afin d’arrêter le programme et d’afficher un message d’erreur si le texte
à chiffrer contient un caractère qui n’existe pas dans le tableau alphabetClair (autre que le caractère
« espace » bien sûr).



