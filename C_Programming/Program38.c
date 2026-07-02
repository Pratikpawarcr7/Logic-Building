#include <stdio.h>

int Display(int *iPtr)
{
    printf("Valaue of Array Are :\n ");

    printf("%d\n", *iPtr);
    iPtr++;

    printf("%d\n", *iPtr);
    iPtr++;

    printf("%d\n", *iPtr);
    iPtr++;

    printf("%d\n", *iPtr);
}

int main()
{
    int iCnt = 0;
    int iSum = 0;
    int Arr[100];

    printf("Enter the values of array :\n");

    for (iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    Display(Arr);
    return 0;
}