#include<stdio.h>
#include<stdlib.h>

/*void affiche_vecteur(int*vecteur, int dimension) {
    int i;
    printf(" ( ");
    for(i=0;i<dimension;i++)
        printf("%d ", vecteur[i]);
    printf(")\n");
}


void affiche_matrice(int **matrice, int ligne, int colonnes) {
int i;
for(i=0; i<ligne ; i++)
{
affiche_vecteur(matrice[i], colonnes);
}
}

int main()
{
    int d= 3;
    int tab[d];
    tab[0]=1;
    tab[1]=2;
    tab[2]=3;
    affiche_vecteur(tab, d);
    
    printf("-------------------\n");
    int i,j;
    int n=3,m=3;
    int **mat= malloc(n*sizeof(int*));
    for(i=0; i<n; i++)
    {
        mat[i]= malloc(m*sizeof(int));
        for(j=0; j<m; j++)
        {
            mat[i][j]=1;
        }
    }
    
    affiche_matrice(mat, n, m);
    
    return 0;
}
*/
int *alloue_vecteur(int dimension, int n){
int i;
int *vecteur = malloc( dimension*sizeof(int));
for(i=0; i<dimension ; i++)
vecteur[i] = n;
return vecteur;
}
void affiche_vecteur(int *vecteur, int dimension) {
    int i ;
    printf("(");
    for(i=0; i < dimension; i++)
        printf("%d", vecteur[i]);
    printf("\n");
}
void libere_vecteur(int*vecteur){
free(vecteur);
}
int main() {
    int *v;
    v = alloue_vecteur(3,1);
    affiche_vecteur(v,3);
    libere_vecteur(v);
    return 0;
}
