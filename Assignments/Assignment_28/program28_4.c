//////////////////////////////////////////////////////////////////////////
//
//  Q. Accept N numbers from user and display all such elements which are
//     divisible by 3 and 5.
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  : N = 6

    Elements : 85  66  3  15  93  88
    
    Output : 15
*/

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Input          : Integer array, Integer
// Output         : None
// Description    : Displays all elements which are divisible by 3 and 5
// Date           : 28/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 3 == 0) && (Arr[iCnt] % 5 == 0))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iCnt = 0;

    printf("Enter the no of elements : \n");
    scanf("%d", &iSize);

    if(iSize <= 0)
    {
        printf("Error : invalid number of elements\n");
        return EXIT_FAILURE;
    }

    ptr = (int*)malloc(iSize * sizeof(int));

    if(NULL == ptr)
    {
        printf("Error : unable to allocate memory\n");
        return EXIT_FAILURE;
    }

    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    Display(ptr, iSize);

    free(ptr);

    return EXIT_SUCCESS;
}