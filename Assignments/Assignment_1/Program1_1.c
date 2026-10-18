//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Divide
// Input          : Integer,Integer
// Output         : Integer
// Description    : Performs Division
// Date           : 18/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////
//
//      Q 1. program to divide two numbers
//
// ////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Divide(int iNo1, int iNo2)
{
    int iResult = 0;

    iResult = iNo1 / iNo2;

    return iResult;
}

int main() 
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is: %d\n", iRet);

    return EXIT_SUCCESS;
}