/*

START
Accept the percentage from user
If percentage are less than 40 then display Fail
And if it is greater than or equal to 40 then display PASS

STOP

*/

#include <stdio.h>

void DisplayResult(float fPercentage)
{

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
