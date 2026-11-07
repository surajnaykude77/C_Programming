//////////////////////////////////////////////////////////////////////////
//
// Function Name  : RangeSum
// Input          : Integer, Integer
// Output         : Integer
// Description    : Calculate summation of numbers in a given range
// Date           : 7/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int RangeSum(int iNo1 ,int iNo2)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo1 < 0 || iNo2 < 0)
    {
        printf("Invalid range\n");
        return -1;
    }

    for(iCnt = iNo1;iCnt <= iNo2 ; iCnt ++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("Summation of range is %d\n",iRet);

    return EXIT_SUCCESS;
}