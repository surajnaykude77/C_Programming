//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Input          : Integer
// Output         : string
// Description    : Prints "Marvellous" 5 times
// Date           : 18/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////
//
//      Q2. program to print 5 times "Marvellous" on screen
//
// ////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("Marvellous\n");
    }
}

int main() 
{
    Display();

    return EXIT_SUCCESS;
}