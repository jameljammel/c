#include <stdio.h>

int main() {
    FILE* fichier = NULL;
    fichier = fopen("exo1.txt","r");
    int c;
    while(((c=fgetc(fichier))!=' ') && (c!=EOF))
        printf("%c",c);
    
    printf("\n");
    fclose(fichier);
    return 0;
}
