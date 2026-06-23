#include <stdio.h>

void DisplayResult(float fPercentage)
{
    if (fPercentage >= 100.0f)
    {
        printf("Invalid percentage.please enter the value in the range 0 to 100\n");
        }

    if (fPercentage >= 40.00f)
    {
        printf("you are pass\n");
    }
    else
    {

        printf("you are fail\n");
    }
}
int main()
{
    float fValue = 0.0f;

    printf("Enter the percentage:\n");
    scanf("%f", &fValue);

    DisplayResult(fValue);

    return 0;
}