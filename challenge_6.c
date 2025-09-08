#include <stdio.h>
int main (){
    int fac,taille;
    printf("saisir la taille du tableau:\n");
    scanf("%d",&taille);
    int tab[taille];
    
    for (int i = 0; i < taille; i++)
    {
      printf("donner le %d element:\n",i+1);
      scanf("%d",&tab[i]);
    }
    printf("donner le factorielle :\n");
      scanf("%d",&fac);


      int tab_fac[taille];
      for (int i = 0; i < taille; i++)
    {
     tab_fac[i]=tab[i]*fac;
    }
    for (int i = 0; i < taille; i++)
    {
        printf("le produit du element original %d avec le facteur %d est : %d\n",tab[i],fac,tab_fac[i]);
    }

    return 0;
}
