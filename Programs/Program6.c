#include <stdio.h>
int main()
{
    float fNo1 = 0, fNo2 = 0, fAns = 0.0f;

    printf("Enter the first number:\n");
    scanf("%f", &fNo1);
    printf("Enter the second number:\n");
    scanf("%f", &fNo2);

    fAns = fNo1 + fNo2;

    printf("Addition is %f\n", fAns);
    return 0;
}