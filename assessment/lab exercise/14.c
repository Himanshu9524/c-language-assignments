#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[] = "mango";
    char ch2[50];

    do
    {
        printf("fav fruite ?");
        scanf("%s", ch2);
    } 
    while (strcmp(ch1, ch2) != 0);

    printf("answer is right");

    return 0 ;
}