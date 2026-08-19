#include <stdio.h>

int main()
{
    int Number;

    printf("Enter number: ");
    scanf("%d", &Number);

    if (Number % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}