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
    printf("Donner la valeur à remplacer: \n");
    scanf("%d", &x);
    printf("Donner la nouvelle valeur à remplacer: \n");
    int y;
    scanf("%d", &y);


    int trouve =0;

    for ( int i = 0; i < taille; i++)
    {
        if (tab[i] == x) {
            tab[i]=y;
            trouve = 1;
            break; 
        }
    }
    if (!trouve) {
        printf("element non trouvé dans le tableau.\n");
    }
    for ( int i = 0; i < taille; i++)
    {
        printf("l'element de l'indice %d est :%d\n",i+1,tab[i]);
    }


    return 0;
}