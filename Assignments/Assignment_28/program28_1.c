#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////
//
//  Q. Accept N numbers from user and return difference between summation
//     of even elements and summation of odd elements.
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  : N = 6

    Elements : 85  66  3  80  93  88
    
    Output : 53 (234 - 181)
*/

//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Difference
// Input          : Integer array, Integer
// Output         : Integer
// Description    : Returns difference between summation of even and odd elements
// Date           : 28/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int iOddSum = 0, iEvenSum = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum =  iOddSum + Arr[iCnt];
        }
    }
    return(iEvenSum - iOddSum);
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the no of elements : \n");
    scanf("%d",&iSize);

    if(iSize <= 0)
    {
        printf("Error : invalid number of elements\n");
        return EXIT_FAILURE;
    }

    ptr = (int*)malloc( iSize * sizeof(int) );

    if( NULL == ptr)
    {
        printf("Error : unable to allocate memory\n");
        return EXIT_FAILURE;
    }

    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr,iSize);

    printf("Difference between summation of even element and odd element is : %d\n",iRet);

    free(ptr);

    return EXIT_SUCCESS;
}