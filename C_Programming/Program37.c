#include <stdio.h>
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

    printf("values of Array Are :\n");

    for (iCnt = 0; iCnt < 4; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    printf("Addition of an array :%d\n", iSum);
    return 0;
}