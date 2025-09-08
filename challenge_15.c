#include <stdio.h>

int main() {
    int x, y, i;
    printf("Entrer la taille du tableau 1 : ");
    scanf("%d", &x);
    int num1[x];
    for (i = 0; i < x; i++) {
        printf("Entrer l'element %d : ", i + 1);
        scanf("%d", &num1[i]);
    }
    printf("Entrer la taille du tableau 2 : ");
    scanf("%d", &y);
    int num2[y];
    for (i = 0; i < y; i++) {
        printf("Entrer l'element %d : ", i + 1);
        scanf("%d", &num2[i]);
    }
    int num[x + y];
    for (i = 0; i < x; i++) {
        num[i] = num1[i];
    }
    for (i = 0; i < y; i++) {
        num[x + i] = num2[i];
    }
    printf("Le tableau merged est : ");
    for (i = 0; i < x + y; i++) {
        printf("%d ", num[i]);
    }
    return 0;
}