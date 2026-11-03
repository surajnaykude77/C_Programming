//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Pattern
// Input          : Integer
// Output         : Array of integer
// Description    : Display the numbers till input number 
// Date           : 30/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. write a c program that accepts number from user
//           and print number till that number
//
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int icnt = 0;

    for(icnt = 1; icnt <= iNo; icnt++ )
    {
        printf("% d",icnt);
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