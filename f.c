#include <stdio.h>

void prenom(FILE * fichier) {
    int c;
    
    while(((c=fgetc(fichier))!=' ') && (c!=EOF))
        printf("%c",c);
    
    printf("\n");
}
int main()
{
    
    FILE * fichier = NULL;
    fichier = fopen("exo1.txt","r");
    if(fichier != NULL)
    {
        prenom (fichier);
        fclose(fichier);
    }
    else {
        printf("%s",fichier);
    }
    
    return 0;
}
