#include <stdio.h>
#include <conio.h>

int factorial(int n);

void main()
{
    int num , ans ;
    printf("enter any number");
    scanf("%d",&num);

    ans = factorial(num);

    printf("\n factorial : %d", ans);
}

int factorial(int n)
{
    int ans = 1 , i = n ;
    while (i > 0)
    {
        ans = ans*i;
        i-- ;
    }
    return ans ;
}