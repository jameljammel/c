#include <stdio.h>
#include <stdlib.h>

struct livre{
    char titre[50];
    int code;
    int prix;
};
struct livre *init_bib(int n){
int i;
struct livre * resultat = malloc(n* sizeof(struct livre));
for(i=0; i<n; i++){
resultat[i].titre[0] = ‘\0’;
resultat[i].code = 0 ;
resultat[i].prix = 0 ;
}
return resultat;
}
void affiche_bib(int n, struct livre *bib){
    for(int i=0; i<n; i++)
printf("titre : %s, cote: %d, prix : %d\n " , bib[i].titre, bib[i].code, bib[i].prix);
}
void echange_livre(int i , int j , struct livre = bib){
    struct livre tmp;
    tmp = bib[i];
    
}
