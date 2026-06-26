#include <stdio.h>
int Count_Digits(int iNo)
{

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0;
    int iCount = 0;
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iCount++;
        iNo = iNo / 10;
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = Count_Digits(iValue);

    printf("Counts of Digit = %d", iRet);

    return 0;
}