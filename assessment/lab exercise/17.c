#include <stdio.h>
#include <conio.h>

int main ()
{
    FILE *h1;

    char details[50]="heyy i am him ";
    char c [50];

    h1=fopen("main file.text","w");
    fprintf(h1,"%s",details);

    fclose(h1);

    h1=fopen("main file.text","r");
    fgets(c,100,h1);
    fclose(h1);

    return 0 ;
}