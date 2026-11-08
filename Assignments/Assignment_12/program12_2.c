//////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkZero
// Input          : Integer
// Output         : string
// Description    : Display given number contains zero or not
// Date           : 8/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. write a program which accept number from user 
//          and check whether it contains 0 in it or not
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

bool ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
      return FALSE;
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no  zero");
    }

    return EXIT_SUCCESS;
}