#include <stdio.h>
#include <stdlib.h>

int main() {
FILE *fichier = NULL;
fichier = fopen("exo.rtf", "r");
int c;
while(((c= fgetc(fichier))!=' ') && (c!=EOF))
printf("%s",c);
return 0;
}
