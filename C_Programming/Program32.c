#include <stdio.h>
int Reverse_Digits(int iNo)
{

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0;
    int iRev = 0;
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = Reverse_Digits(iValue);

    printf("Reverse of Digit = %d", iRet);

    return 0;
}