#include <stdio.h>
#include <stdlib.h>
int main()
{

    int iLength = 0;
    int *iPtr = NULL;

    printf("Enter the Number of Element : \n");
    scanf("%d", &iLength);

    iPtr = (int *)malloc(iLength * sizeof(int)); // heap is seprate sectionn of RAM

    free(iPtr);

    return 0;
}