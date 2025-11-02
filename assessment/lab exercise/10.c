#include <stdio.h>
#include <conio.h>

int main ()
{
    int h = 11;
    int *ptr = &h;

    printf("\n before change num = %d",h);

    *ptr=4;

    printf ("\n after change num=%d",h);

    return 0 ;
}