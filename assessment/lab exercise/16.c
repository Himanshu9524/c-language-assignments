#include <stdio.h>
#include <conio.h>

struct student
{
    char name [50];
    int roll;
    float marks ;
    
}s[3];

int main ()
{
    int i ;
    
    for(i=0;i<3;i++)
    {
    printf(" enter your name : ");
    scanf("%s", &s[i].name);
    
    printf(" enter your roll : ");
    scanf("%d",&s[i].roll);
    
    printf(" enter your marks: " );
    scanf("%f",&s[i].marks);
    }
    
    
    for(i=0;i<3;i++)
    {
    printf("\n Name : %s",s[i].name);
    printf("\n Roll : %d",s[i].roll);
    printf("\n Marks: %f",s[i].marks);
    }
    
    
return 0 ;
}
