#include <stdio.h>

int main() {
    int n, i, pos = 0, neg = 0;
    double x;

    printf("Donner N : ");
    scanf("%d", &n);

    double t[n];
    for (i = 0; i < n; i++) {
        printf("Donner valeur %d : ", i + 1);
        scanf("%lf", &x);
        t[i] = x;

        if (x > 0) pos++;
        else if (x < 0) neg++;
    }

    printf("Nombre de valeurs positives = %d\n", pos);
    printf("Nombre de valeurs negatives = %d\n", neg);

    return 0;
}
