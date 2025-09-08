#include <stdio.h>
int main(){
     int taille,max;
    printf("donner la taille du tableau :\n");
    scanf("%d",&taille);
    int tab[taille];
    printf("donner le 1 element:\n");
      scanf("%d",&tab[0]);
      max=tab[0];
    for (int i = 1; i < taille; i++)
    {
      printf("donner le %d element:\n",i+1);
      scanf("%d",&tab[i]);
      if (max<tab[i])
      {
        max=tab[i];
      }

    }
    printf("l'element le plus grand dans ce tableau est :%d",max);


    return 0;
}
