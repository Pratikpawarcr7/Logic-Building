#include <stdio.h>
int main()
{
    int iNo1 = 10;
    int iNo2 = 20;
    int iNo3 = 30;
    int iNo4 = 40;

    int Arr[] = {10, 20, 30, 40};

    printf("%d\n", iNo1);
    printf("%d\n", iNo2);
    printf("%d\n", iNo3);
    printf("%d\n", iNo4);

    printf("%d\n", Arr[0]);
    printf("%d\n", Arr[1]);
    printf("%d\n", Arr[2]);
    printf("%d\n", Arr[3]);

    printf("%d\t%d\t%d\t%d\n", iNo1, iNo2, iNo3, iNo4);
    printf("%d\t%d\t%d\t%d\n", Arr[0], Arr[1], Arr[2], Arr[3]);

    return 0;
}