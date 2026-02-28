#include <stdio.h>

int main() {
    int n, i;

    printf("Donner N : ");
    scanf("%d", &n);

    double t[n];  
    for (i = 0; i < n; i++) {
        printf("Donner t[%d] : ", i);
        scanf("%lf", &t[i]);
    }

    printf("Tableau : ");
    for (i = 0; i < n; i++) {
        printf("%g ", t[i]);
    }
    printf("\n");

    return 0;
}
