//////////////////////////////////////////////////////////////////////////
//
// Function Name  : SumNonFact
// Input          : Integer
// Output         : Summation of not factors
// Description    :display summation of all its non factors
// Date           : 8/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. write a program which accept number from user 
//       and return summation of all its non factors 
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int SumNonFact(int iNo)
{ 
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("summation of non factors : %d",iRet);

    return EXIT_SUCCESS;
}