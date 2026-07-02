#include <stdio.h>
int main()
{

    int Arr[4];
    int iCnt = 0;

    printf(" plese enter the Value : \n");

    scanf("%d", &Arr[0]);
    scanf("%d", &Arr[1]);
    scanf("%d", &Arr[2]);
    scanf("%d", &Arr[3]);

    printf("Value from the array are : \n");

    for (iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }

    return 0;
}