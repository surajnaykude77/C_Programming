//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Pattern
// Input          : Integer (Number of elements)
// Output         : Integer, symbols (Prints Pattern on console)
// Description    : Displays pattern with numbers and symbols
// Date           : 14/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

/*
    Input = 4

    Output  =   #    1   *   #   2   *   #   3   *   #   4   *
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    // Filter for negative inputs
    if (iNo < 0) iNo = -iNo;
    
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements\n");
    scanf("%d",&iValue);
    
    Pattern(iValue);

    return EXIT_SUCCESS;
}