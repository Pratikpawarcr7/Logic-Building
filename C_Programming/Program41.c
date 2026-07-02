#include <stdio.h>

void Display(int *Ptr, int iSize)

{
    int iCnt = 0;
    printf("Value of the array are : \n");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", *Ptr);
        Ptr++;
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

    Display(Arr, 6);

    return 0;
}