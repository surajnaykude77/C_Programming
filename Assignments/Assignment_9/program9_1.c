//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Input          : Integer
// Output         : symbol
// Description    : Display pattern
// Date           : 6/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    int icnt =0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("* \t");
    }

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("# \t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}