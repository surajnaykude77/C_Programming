//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CheckLeapYear
// Input          : Integer
// Output         : print year 
// Description    : Display given year is leap or not
// Date           : 21/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. Check leap year
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iNo)
{
    // A year is a leap year if:
    // 1. Divisible by 4 and not divisible by 100 OR
    // 2. Divisible by 400

    if (((iNo % 4 == 0) && (iNo % 100 != 0)) || (iNo % 400 == 0))
    {
        printf("%d is a Leap Year\n", iNo);
    }
    else
    {
        printf("%d is not a Leap Year\n", iNo);
    }
}

int main() 
{
    int iValue = 0;

    printf("Enter the year\n");
    scanf("%d",&iValue);

    CheckLeapYear(iValue);

    return EXIT_SUCCESS;
}