#include <stdio.h>
#include <stdlib.h>

int main() {
FILE* fichier=NULL;
fichier = fopen("exo.rtf","r");
int c;
char *p;
    char t;
    t = 'f';
while(((c= fgetc(fichier))!=' ') && (c!=EOF))
    if (c==t){
printf("%s",c);
    }
printf("\n");
fclose(fichier);
return 0;
} 
