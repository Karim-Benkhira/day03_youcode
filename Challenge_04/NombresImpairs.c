#include <stdio.h>
int afficherNombresImpairs(int N)
{
    int i =0;
    int nember = 1;

    while (i < N)
    {
        printf("%d",nember);

        nember = nember + 2;
        i++;
    }
    return nember;
}

int main()
{
    int N;

     printf("Entrez un nombre entier: ");
     scanf("%d",&N);

     if (N <= 0) {
        printf("Veuillez entrer un nombre entier positif.\n");
    } else {
        afficherNombresImpairs(N);
        printf("\n");
    }
}