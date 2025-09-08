#include <stdio.h>

int main() {
    int n, i;

    printf("Donner la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrer les elements du tableau :\n");
    for(i = 0; i < n; i++) {
        printf("Element %d : ", i+1);
        scanf("%d", &tab[i]);
    }
    printf("\nLes nombres impairs dans le tableau sont :\n");
    for(i = 0; i < n; i++) {
        if(tab[i] % 2 != 0) {
            printf("%d ", tab[i]);
        }
    }

    return 0;
}
