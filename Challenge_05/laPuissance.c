#include <stdio.h>

int calculerPuissance(int base,int exposant)
{
    int R =1;
    for (int i = 0; i < exposant; i++)
    {
        R = R * base;
    }
    return R;
}


int main()
{
    int base,exposant;

    printf("Entrez la base: \n");
    scanf("%d", &base);

    printf("Entrez l'exposant: \n");
    scanf("%d",&exposant);

    int resultat = calculerPuissance(base, exposant);

    printf("%d^%d = %d\n", base, exposant, resultat);
}