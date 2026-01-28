#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char caracter, sir[256], c;
    int v[10];
    FILE *ft = fopen("fisier.txt", "wt");
    FILE *fb = fopen("fisier.bin", "wb");

    putc(caracter, ft); // scrie caracterul in ft
    c = getc(ft); //citeste caracter cu caracter din fisier, getc() este functie de tip int
    //getchar() citeste doar de la tastatura, getc() poate sa citeasca si din fisier

    fgets(sir, sizeof(sir), ft); // citeste sirul de caractere din fisier
    fputs(sir, ft); // scrie sirul de carctere in fisier(ESTE DE TIP INT)

    fscanf(ft, "%s", sir); // citeste din fisier ca un scanf()
    fprintf(ft, "%s", sir); // scrie in fisier ca un printf()

    fread(v, sizeof(v[0]), 10, fb);
    fwrite(v, sizeof(v[0]), 10, fb);

    fseek(fb, 2*sizeof(v[0]), SEEK_SET); // se duce pe pozitia 2 (adica 0->1->2)

    fclose(ft);
    fclose(fb);
    return 0;
}