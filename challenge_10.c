#include <stdio.h>
int main(){
     int taille,x;
    printf("donner la taille du tableau :\n");
    scanf("%d",&taille);
    int tab[taille];
    for (int i = 0; i < taille; i++)
    {
      printf("donner le %d element:\n",i+1);
      scanf("%d",&tab[i]);

    }
    printf("Donner l'élément à rechercher : ");
    scanf("%d", &x);


    int trouve =0;

    for ( int i = 0; i < taille; i++)
    {
        if (tab[i] == x) {
            printf("Élément trouvé à la position %d (indice %d).\n", i + 1, i);
            trouve = 1;
            break; 
        }
    }
    if (!trouve) {
        printf("element non trouvé dans le tableau.\n");
    }


    return 0;
}