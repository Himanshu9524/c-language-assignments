#include <stdio.h>
#include <conio.h>

int main()
{
    int i ;
    
    printf("\n Using continue to skip 3: ");
    for (i = 1; i <= 10; i++)
    {
        if (i == 3)
            continue;
        printf(" \n %d", i);
    }
    return 0;
}