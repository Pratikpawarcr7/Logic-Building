#include <stdio.h>
#include <stdbool.h>
bool Perfect_Number(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if (iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

    int iValue = 0;
    bool bFlage = false;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    bFlage = Perfect_Number(iValue);

    if (bFlage == true)
    {
        printf("%d is Perfect Number\n", iValue);
    }
    else
    {
        printf("%d is Not Perfect Number\n", iValue);
    }

    return 0;
}