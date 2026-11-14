//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Pattern
// Input          : Integer (Number of elements)
// Output         : Characters (Prints Pattern on console)
// Description    : Displays a sequential alphabetical pattern
// Date           : 14/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

/*
    Input = 5

    Output  =   A   B   C   D   E
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = 'A';

    // Filter for negative inputs
    if (iNo < 0) iNo = -iNo;
    
    for (iCnt = 1; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t", ch);
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