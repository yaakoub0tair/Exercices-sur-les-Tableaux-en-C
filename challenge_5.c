#include <stdio.h>
int main(){
     int taille,min;
    printf("donner la taille du tableau :\n");
    scanf("%d",&taille);
    int tab[taille];
    printf("donner le 1 element:\n");
      scanf("%d",&tab[0]);
      min=tab[0];
    for (int i = 1; i < taille; i++)
    {
      printf("donner le %d element:\n",i+1);
      scanf("%d",&tab[i]);
      if (min>tab[i])
      {
        min=tab[i];
      }

    }
    printf("l'element le plus petit dans ce tableau est :%d",min);


    return 0;
}
