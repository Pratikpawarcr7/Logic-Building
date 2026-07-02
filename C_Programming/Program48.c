#include <stdio.h>
#include <stdlib.h>
int Addition(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}
int main()
{
    int *iPtr = NULL;
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter The How many Elements You Want In Your Array :\n");
    scanf("%d", &iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the Elements : \n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    printf("Elements Of Array Are : \n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n", iPtr[iCnt]);
    }

    iRet = Addition(iPtr, iLength);
    printf("Summation : %d", iRet);

    free(iPtr);
    return 0;
}