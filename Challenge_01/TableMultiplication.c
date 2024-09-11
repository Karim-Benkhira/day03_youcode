#include <stdio.h>

int LireNumber()
{
    int Number;

    printf("Entrez un nombre:\n");
    scanf("%d",&Number);

    return Number;
}

void afficherTableMultiplication(int Number)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n",Number,i,Number * i);
    }
}

int main()
{
    afficherTableMultiplication(LireNumber());

    return 0;
}