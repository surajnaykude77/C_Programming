//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Number
// Input          : Integer
// Output         : small, medium or large
// Description    : Display the numbers is small, medium or large
// Date           : 3/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Number(int iNo)
{
    if(iNo < 0 )
    {
        printf("invalid input");
    }
    else if(iNo <= 50) 
    {
        printf("It is small Number");
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("It is Medium  Number");
    }
    else
    {
        printf("It is Large  Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}