#include <stdio.h>

void Display(int iValue)
{

    int iCnt = 0;

    iCnt = 1;
    while (iCnt <= iValue)
    {

        printf("%d Jay Ganesh\n", iCnt);
        iCnt++;
    }
}
int main()
{
    int iFrequance = 0;

    printf("Enter the frequance:\n");
    scanf("%d", &iFrequance);
    Display(iFrequance);

    return 0;
}