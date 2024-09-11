#include <stdio.h>

int calculerFactorielle(int n)
{
    int F = 1;

    for(int i = 1;i <= n;i++)
    {
        F *= i;
    }

    return F;
}

int main()
{
    int n;

    printf("Entrez un nombre entier positif: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Veuillez entrer un nombre positif.\n");
    } else {
        int resultat = calculerFactorielle(n);
        printf("%d! = %d\n", n, resultat);
    }

    return 0;
}