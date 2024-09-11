#include <stdio.h>

int inverserEntier(int N)
{
    int reverse = 0;

    while (N != 0)
    {
        int chifre = N % 10;
        reverse = reverse * 10 + chifre;

        N = N / 10;
    }
    return reverse;
}

int main()
{
    int N;

    printf("Enter un entier \n");
    scanf("%d",&N);

    int nombreInverse = inverserEntier(N);

    printf("Le nombre inverse est: %d\n",nombreInverse);

    return 0;

}