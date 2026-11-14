//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Pattern
// Input          : Integer (Number of elements)
// Output         : Integer, Symbols (Prints Pattern on console)
// Description    : Displays numbers  interleaved with '*'
// Date           : 14/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

/*
    Input = 5

    Output  =   1   *   2   *   3   *   4   *   5   *
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
        printf("%d\t*\t",iCnt);
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