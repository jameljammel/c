#include <stdio.h>
#inculude<stdlib.h>

int **alloue_matrice(int ligne, int colonnes, int val){
int i , j;
int **matrice = malloc(ligne*sizeof(int*));
for(i=0; i< ligne; i++)
matrice[i] = malloc(colonnes *sizeof(int));

for (i=0; i< ligne ;i++)
for(j=0 ; j< colonnes ; j++)
matrice[i][j]= val;
return matrice;
}
void affiche_vecteur(int *vecteur, int demension){
    int i;
    printf("(");
    for(i=0; i<demension; i++)
        printf("%d", vecteur[i]);
    printf(")\n");
    }

void libere_matrice(int **matrice, int lignes){
int i ;
for( i=0; i<lignes; i++)
free(matrice[i]);
free(matrice);
}

