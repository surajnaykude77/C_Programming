//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Pattern
// Input          : Integer (Number of elements)
// Output         : Integer (Prints Pattern on console)
// Description    : Displays pattern with numbers
// Date           : 14/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

/*
    Input = 8

    Output  = 2   4   6   8   10  12  14  16
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    // Filter for negative inputs
    if (iNo < 0) iNo = -iNo;
    
    for (iCnt = 1; iCnt <= (iNo*2); iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
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