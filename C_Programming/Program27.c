#include <stdio.h>
int Count_Even_Digits(int iNo)
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
        if (iDigit % 2 == 0)
        {
            iCount++;
        }

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

    iRet = Count_Even_Digits(iValue);

    printf("Counts of Even Digit = %d", iRet);

    return 0;
}