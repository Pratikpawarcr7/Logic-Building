#include <stdio.h>
void Digits(int iNo)
{
    int iDigit = 0;
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d", iDigit);
        iNo = iNo / 10;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    Digits(iValue);

    return 0;
}