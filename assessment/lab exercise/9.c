#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[5];
    int i;

    printf("\n enter 5 integers");
    for (i = 0; i < 5; i++)
    {
        scanf("\n %d", &arr[i]);
    }

    printf("\n you enterder (1d array):");
    for (i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");

    int matrixx[3][3];
    int sum = 0, r, c;

    printf("\n enter values");

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {

            scanf("%d", &matrixx[r][c]);
            sum = sum + matrixx[r][c];
        }
    }
    printf("\n matrixx is : ");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("\n %d",matrixx[r][c]);
        }
        printf("\n");
    }
    printf("\n sum of all number is = %d",sum);

    return 0 ;
}