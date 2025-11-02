#include <stdio.h>
#include <string.h>

// string  copy 
int main()

{
    char ch1[50];
    char ch2[50];

    printf("enter your name: ");
    scanf("%s",ch1);

    strcpy(ch1,ch2);

    printf("your name is : %s",ch2);
    return 0 ;
}