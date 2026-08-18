#include <stdio.h>

int main()
{
    int Number1, Number2;

    printf("Enter first number: ");
    scanf("%d", &Number1);

    printf("Enter second number: ");
    scanf("%d", &Number2);

    if (Number1 > Number2)
    {
        printf("%d is largest\n", Number1);
    }
    else if (Number2 > Number1)
    {
        printf("%d is largest\n", Number2);
    }
    else
    {
        printf("Both numbers are equal\n");
    }

    return 0;
}