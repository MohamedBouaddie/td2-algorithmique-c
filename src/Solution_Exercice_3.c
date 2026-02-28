#include <stdio.h>

int main() {
    int n, i;
    double somme = 0, produit = 1, moyenne;

    printf("Donner N : ");
    scanf("%d", &n);

    double t[n];
    for (i = 0; i < n; i++) {
        printf("Donner t[%d] : ", i);
        scanf("%lf", &t[i]);
        somme += t[i];
        produit *= t[i];
    }

    moyenne = somme / n;

    printf("Somme = %g\n", somme);
    printf("Produit = %g\n", produit);
    printf("Moyenne = %g\n", moyenne);

    return 0;
}
