//////////////////////////////////////////////////////////////////////////
//
// Function Name  : OddFactorial
// Input          : Integer
// Output         : Integer
// Description    : Display Odd factorial of given number
// Date           : 6/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iResult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for ( iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        iResult = iResult * iCnt;
    }

    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    
    printf("Odd factorial of number  is %d\n", iRet);

    return EXIT_SUCCESS;
}