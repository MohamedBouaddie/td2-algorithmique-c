#include <stdio.h>

int main() {
    double t[5], somme = 0;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Donner t[%d] : ", i);
        scanf("%lf", &t[i]);
        somme += t[i];
    }

    printf("Valeurs : ");
    for (i = 0; i < 5; i++) {
        printf("%g ", t[i]);
    }
    printf("\nSomme = %g\n", somme);

    return 0;
}
