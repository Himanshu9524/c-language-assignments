#include <stdio.h>
#include <string.h>

int main ()
{
    char str [20], str1[10]; 

    printf("etner frist str ");
    scanf("%s",str);

    printf("enter second str ");
    scanf("%s",str1);

    strcat(str,str1);

    printf("\n combined string %s",str1);

    printf("\n length of combined string: %d",strlen(str1));

    return 0 ;
    
}