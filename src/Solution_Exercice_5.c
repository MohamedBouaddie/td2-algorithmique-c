#include <stdio.h>

int main() {
    int n1, n2, i, j;
    long double s = 0;

    printf("Donner N1 : ");
    scanf("%d", &n1);
    printf("Donner N2 : ");
    scanf("%d", &n2);

    double t1[n1], t2[n2];

    printf("Saisir tableau 1 :\n");
    for (i = 0; i < n1; i++) {
        printf("t1[%d] : ", i);
        scanf("%lf", &t1[i]);
    }

    printf("Saisir tableau 2 :\n");
    for (j = 0; j < n2; j++) {
        printf("t2[%d] : ", j);
        scanf("%lf", &t2[j]);
    }

    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            s += (long double)t1[i] * (long double)t2[j];
        }
    }

    printf("Schtroumpf = %Lg\n", s);
    return 0;
}
