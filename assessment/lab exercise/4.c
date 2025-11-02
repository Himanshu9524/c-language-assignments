#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;

    printf("Enter first value: ");
    scanf("%d", &a);

    printf("enter second value : ");
    scanf("%d", &b);

    // Arithmetic operators
    printf(" \n Arithmetic Operators:");
    printf(" \n Addition: %d + %d = %d", a, b, a + b);
    printf(" \n Subtraction: %d - %d = %d", a, b, a - b);
    printf(" \n Multiplication: %d * %d = %d", a, b, a * b);

    if (b != 0)
    {
        printf(" \n Division: %d / %d = %f ", a, b, (float)a / b);
        printf(" \n Modulus: %d %% %d = %d ", a, b, a % b);
    }

    else
    {
        printf(" \n Division/Modulu by zero is not allowed.");
    }


    // Relational operators
    printf(" \n Relational Operators:");
    printf(" \n %d == %d : %d", a, b, a == b);
    printf(" \n %d != %d : %d", a, b, a != b);
    printf(" \n %d > %d  : %d", a, b, a > b);
    printf(" \n %d < %d  : %d", a, b, a < b);
    printf(" \n %d >= %d : %d", a, b, a >= b);
    printf(" \n %d <= %d : %d", a, b, a <= b);

    // Logical operators
    printf(" \n Logical Operators:\n");
    printf(" \n %d && %d : %d " , a, b, a && b);
    printf(" \n %d || %d : %d " , a, b, a || b);
    printf(" \n !%d : %d ", a, !a);
    printf(" \n !%d : %d ", b, !b);

    return 0;
}
