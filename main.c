#include <stdio.h>

void copie (FILE * fs, FILE * fd)
{
    int c ;
    while( (c= fgetc(fs)) != EOF)
        fputc(c,fd);

}
int main()
{
    FILE * source = fopen("ex2Td4.c","r");
    FILE * destination = fopen("copie_ex2Td4.c","w");
    copie (source, destination);
    fclose(source);
    fclose(destination);
    return 0;
}
