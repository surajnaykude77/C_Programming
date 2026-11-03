//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Pattern
// Input          : Integer
// Output         : pattern
// Description    : prints $ and * pattern 
// Date           : 30/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. write a c program that accepts number from user and print that number
//         of $ & * on screen
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Pattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int icnt = 0;

    for(icnt = 1; icnt <= iNo; icnt++ )
    {
        printf(" $  *");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}