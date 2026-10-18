//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Input          : Integer
// Output         : Integer
// Description    : Prints 5 to 1 numbers on screen
// Date           : 18/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////
//
//      Q3. program to print 5 to 1 numbers on screen
//
// ////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display()
{
    int icnt = 0;
    icnt = 5;

    while( icnt >= 1 )
    {
        printf("%d\n", icnt);
        icnt--;
    }
}

int main() 
{
    Display();

    return EXIT_SUCCESS;
}