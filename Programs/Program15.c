#include <stdio.h>
#include <stdbool.h>
int Display(int iNo)
{

    int iResult = 0;
    iResult = iNo % 3;

    if (iResult == 0)
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
    int iRet = 0;
    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = Display(iValue);
    if (iRet == true)
    {
        printf("%d is Divisible by 3\n", iValue);
    }
    else
    {
        printf("%d is Not Divisible by 3\n", iValue);
    }

    return 0;
}
