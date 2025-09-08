#include <stdio.h>
int main(){
    int taille;
    printf("donner la taille du tableau :\n");
    scanf("%d",&taille);
    int tab[taille];
    for (int i = 0; i < taille; i++)
    {
      printf("donner le %d element:\n",i+1);
      scanf("%d",&tab[i]);

    }
    for ( int i = 0; i < taille; i++)
    {
        printf("l'element de l'indice %d est :%d\n",i+1,tab[i]);
    }


    return 0;
}