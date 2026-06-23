#include <stdio.h>

float CalculatePercentage(int iObtained, int iTotal)
{
    float fPercentage = 0.0f;
    fPercentage = ((float)iObtained / (float)iTotal) * 100;
    return fPercentage;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fResult = 0.0;

    printf("Please enter obtain mark in your exam\n");
    scanf("%d", &iValue1);

    printf("enter the obtain mark\n");
    scanf("%d", &iValue2);

    fResult = CalculatePercentage(iValue1, iValue2);

    printf("Your percentage is:%f\n", fResult);

    return 0;
}