#include <stdio.h>
int Sum_Of_Digits(int iNo)
{

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0;
    int iSum = 0;
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = Sum_Of_Digits(iValue);

    printf("Summation of Digit = %d", iRet);

    return 0;
}