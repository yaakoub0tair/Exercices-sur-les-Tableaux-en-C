#include <stdio.h>
int main(){
    int taille,somme=0;
    printf("donner la taille du tableau :\n");
    scanf("%d",&taille);
    int tab[taille];
    for (int i = 0; i < taille; i++)
    {
      printf("donner le %d element:\n",i+1);
      scanf("%d",&tab[i]);
      somme=somme+tab[i];

    }
    for ( int i = 0; i < taille; i++)
    {
        printf("l'element de l'indice %d est :%d\n",i+1,tab[i]);
    }
    printf("la somme de les elements du tableau est :%d",somme);


    return 0;
}
