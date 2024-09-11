#include <stdio.h>

void afficherNombresPairs(int n) {
    int count = 0;
    int nombre = 2;
    
    while (count < n) {
        printf("%d ", nombre);
        nombre = nombre + 2;
        count++;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Entrez un nombre entier: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Veuillez entrer un nombre entier positif.\n");
    } else {
        afficherNombresPairs(n);
    }

    return 0;
}
