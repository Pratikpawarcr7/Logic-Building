#include <stdio.h>

void Display(int Ptr[])
{
    printf("Value of the array are : \n");
    printf("%d\n", Ptr[0]);
    printf("%d\n", Ptr[1]);
    printf("%d\n", Ptr[2]);
    printf("%d\n", Ptr[3]);
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

    Display(Arr);

    return 0;
}