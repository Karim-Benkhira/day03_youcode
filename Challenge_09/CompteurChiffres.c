#include <stdio.h>

int  compterChiffres(int n)
{
    int i = 0;

    if(n == 0)
        return 1;
    
    while (n > 0)
    {
        n = n / 10;
        i++;
    }
    return i;
    
}

int main()
{
    int Number;
    int numberchifre;


    printf("Entrez un entier positif: ");
    scanf("%d",&Number);

    if(Number < 0)
        printf("Veuillez entrer un entier positif.\n");
    else
    {
        numberchifre = compterChiffres(Number);
        printf("Nombre de chiffres = %d\n",numberchifre);
    }

}