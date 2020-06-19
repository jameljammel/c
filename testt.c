#include <stdio.h>
#include <stdlib.h>

int main() {
File *fichier = NULL;
fichier = fopen("exo.txt", "r");
if (fichier != NULL) {
char k;
k = rewind(fichier);
if (k='f'){
printf("%s",fichier);
}
}
while(c = EOF);
fclose(fichier);
return 0;
}