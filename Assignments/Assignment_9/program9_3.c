//////////////////////////////////////////////////////////////////////////
//
// Function Name  : EvenFactorial
// Input          : Integer
// Output         : Integer
// Description    : Display even factorial of given number
// Date           : 6/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iResult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for ( iCnt = 2; iCnt <= iNo; iCnt += 2)
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

    iRet = EvenFactorial(iValue);
    
    printf("Even factorial of number  is %d\n", iRet);

    return EXIT_SUCCESS;
}