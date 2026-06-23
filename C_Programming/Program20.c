#include <stdio.h>

int Sum_Factors(int iNo)
{

    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = Sum_Factors(iValue);
    printf("Summation of Factors Are : %d", iRet);
}