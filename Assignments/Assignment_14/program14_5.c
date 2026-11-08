//////////////////////////////////////////////////////////////////////////
//
// Function Name  : FactDiff
// Input          : Integer
// Output         : Integer
// Description    : display difference between summation of factors and non factors
// Date           : 8/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. write a program which accept number from user 
//       and return difference between  summation of 
//       all its factors and non factors 
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int FactDiff(int iNo)
{ 
    int iCnt = 0;
    int iFactsum = 0;
    int iNonfactsum = 0;
    int iFactdiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFactsum = iFactsum + iCnt;
        }
        else
        {
            iNonfactsum = iNonfactsum + iCnt;
        }
    }

    iFactdiff = iFactsum - iNonfactsum;

    return iFactdiff;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}