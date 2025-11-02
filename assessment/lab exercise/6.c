#include <stdio.h>
#include <conio.h>

// // for loop using 1 to 10
// int main()
// {
//     int i;

//     for (i = 1; i <= 10; i++)
//     {
//         printf("\n %d", i);
//     }

//     return 0 ;
// }

// int main()
// {
//     int i = 1;
//     while (i <= 10)
//     {
//         printf("\n %d", i++);
//     }
//     return 0;
// }

int main()
{
    int i = 1;
    do
    {
        printf("\n %d", i);
        i++;
    } while (i <= 10);

    return 0;
}
