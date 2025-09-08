#include <stdio.h>
int main(){
    int taille;
    printf("donner la taille du tableau:\n");
    scanf("%d",&taille);

    int tab[taille];
    for (int i = 0; i < taille; i++)
    {
       printf("saisir le %d element du tableau:\n ",i+1);
       scanf("%d",&tab[i]);
    }
    int copietab[taille];
    for (int i = 0; i < taille; i++){
        copietab[i]=tab[i];
    
    
    }
    printf("voici les element du tableau original :\n");
    for (int i = 0; i < taille; i++)
    {
        printf("%d  ",tab[i]);
    }
     printf("\n voici les element du tableau copy :\n");
    for (int i = 0; i < taille; i++)
    {
        printf("%d  ",copietab[i]);
    }


    return 0;
}
