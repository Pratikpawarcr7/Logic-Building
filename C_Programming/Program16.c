#include <stdio.h>
#include <stdbool.h>
int Display(int iNo)
{

    int iResult = 0;

    if (((iNo % 3) == 0) && ((iNo % 5) == 0))
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
    bool bRet = false;
    printf("Enter the number :\n");
    scanf("%d", &iValue);

    bRet = Display(iValue);

    if (bRet == true)
    {
        printf("%d is Divisible by 3 and 5\n", iValue);
    }
    else
    {
        printf("%d is Not Divisible by 3 and 5\n", iValue);
    }

    return 0;
}
