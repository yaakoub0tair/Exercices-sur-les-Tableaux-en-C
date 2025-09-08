#include <stdio.h>

int main() {
    int tail, i;
    printf("Donner la taille du tableau :\n");
    scanf("%d", &tail);

    int tab[tail];
    for (i = 0; i < tail; i++) {
        printf("Saisir l'element %d du tableau :\n", i + 1);
        scanf("%d", &tab[i]);
    }

    int temp;
    for (i = 0; i < tail - 1; i++) {
        for (int j = 0; j < tail - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    printf("Tableau trie en ordre croissant :\n");
    for (i = 0; i < tail; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
