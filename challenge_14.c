#include <stdio.h>

int main() {
    int n, i;
    double somme = 0, moyenne;

    printf("Donner la taille du tableau : ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Erreur : la taille doit être > 0.\n");
        return 1; 
    }
    double tab[n];
    printf("Entrer les elements du tableau :\n");
    for(i = 0; i < n; i++) {
        printf("Element %d : ", i+1);
        scanf("%lf", &tab[i]);  
        somme += tab[i];
    }
    moyenne = somme / n;

    printf("\nLa moyenne des elements est : %.2lf\n", moyenne);

    return 0;
}
