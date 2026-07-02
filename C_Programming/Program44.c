#include <stdio.h>

void Display(int Ptr[], int iSize)
{
    printf("Value of the array are : \n");

    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", Ptr[iCnt]);
    }
}
int main()
{

    int Arr[4];
    int iCnt = 0;

    printf("Please Enter the number\n");

    for (iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    Display(Arr, 4);
    return 0;
}