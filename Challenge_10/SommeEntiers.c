#include <stdio.h>
int sommeNEntiers(int n)
{
    int some = 0;

    for(int i = 1;i <= n;i++)
    {
        some = some +i;
    }
    return some;
}


int main()
{
    int n;

    printf("Entrez un nombre entier: \n");
    scanf("%d",&n);

    if(n <= 0)
        printf("Veuillez entrer un nombre entier positif.\n");
    else 
    {
        int resultat = sommeNEntiers(n);
        printf("La somme des %d premiers entiers naturels est: %d\n", n, resultat);
    }

    return 0;
}