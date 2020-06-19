#include <stdio.h>
#include <stdlib.h>

struct livre{
char titre[50];
int code;
int prix;
};

struct livre *init_bib(int n){
int i;
struct livre * resultat = malloc(n * sizeof (struct livre));
for( i=0; i<n; i++) {
resultat[i].titre[0] = '\0';
resultat[i].code = 0;
resultat[i].prix = 0;
}
return resultat;
}
void affiche_bib(int n, struct livre *bib) {
for(int i=0; i<n ; i++){
printf("titre : %s, code : %d , prix : %d \n", bib[i].titre, bib[i].code, bib[i].prix);
}}
void echange_livre(int i,  int j, struct livre *bib){
struct livre tmp;
tmp = bib[i];
}

int main() {
struct livre *bib = init_bib(3);
bib[0].titre[0] = 'l';
bib[0].titre[1] = 'i';
bib[0].titre[2] = 'v';
bib[0].titre[3] = 'r';
bib[0].titre[4] = 'e';
bib[0].titre[5] = '1';
bib[0].titre[6] = '\0';
bib[0].code = 41;
bib[0].prix = 20;

bib[1].titre[0] = 'l';
bib[1].titre[1] = 'i';
bib[1].titre[2] = 'v';
bib[1].titre[3] = 'r';
bib[1].titre[4] = 'e';
bib[1].titre[5] = '2';
bib[1].titre[6] = '\0';
bib[1].code = 23;
bib[1].prix = 33;

bib[2].titre[0] = 'l';
bib[2].titre[1] = 'i';
bib[2].titre[2] = 'v';
bib[2].titre[3] = 'r';
bib[2].titre[4] = 'e';
bib[2].titre[5] = '3';
bib[2].titre[6] = '\0';
bib[2].code = 44;
bib[2].prix = 21;

affiche_bib(3,bib);
printf("\n");
echange_livre(0,2,bib);
free(bib);
return 0;
            }
