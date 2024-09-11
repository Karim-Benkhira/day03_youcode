#include <stdio.h>

int calculerSomme(int N)
{
    int some = 0;

    for(int i = 1;i <= N;i++)
    {
        some  = i + some;
    }
    return some;
}

int main()
{
    int n;

    printf("Entrez un nombre entier: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Veuillez entrer un nombre naturel positif.\n");
    } else {
        int resultat = calculerSomme(n);
        printf("La somme des %d premiers nombres naturels est: %d\n", n, resultat);
    }
    return 0;
}