#include <stdio.h>
#include <stdlib.h>
int main()
{

    int iLength = 0;
    int iCnt = 0;
    int *iPtr = NULL;

    printf("Enter the Number of Element : \n");
    scanf("%d", &iLength);

    iPtr = (int *)malloc(iLength * sizeof(int)); // heap is seprate sectionn of RAM

    printf("Enter the element :\n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }
    free(iPtr);

    return 0;
}