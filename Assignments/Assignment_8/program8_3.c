//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Factorial
// Input          : Integer
// Output         : integer
// Description    : Display Factorial of number
// Date           : 4/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. write a program to find factorial of given number
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Factorial(int iNo)
{
    int icnt = 0;
    int iSum = 1;

    if(iNo < 0)
    {
        iNo = -iNo; // Input updater
    }

    for(icnt = iNo; icnt > 0; icnt--)
    {
        iSum = iSum * icnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("factorial of %d is %d\n",iValue,iRet);

    return EXIT_SUCCESS;
}