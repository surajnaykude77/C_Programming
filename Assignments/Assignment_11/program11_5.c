//////////////////////////////////////////////////////////////////////////
//
// Function Name  : RangeDisplayRev
// Input          : Integer, Integer
// Output         : Integer
// Description    : Display all numbers in reverse in given number range
// Date           : 7/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void RangeDisplayRev(int iNo1 ,int iNo2)
{
    int iCnt = 0;

    if(iNo1 > iNo2)
    {
        printf("Invalid range\n");
        return ;
    }

    for(iCnt = iNo2; iCnt >= iNo1 ; iCnt --)
    {
        printf("%d\t",iCnt);
    }
    
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return EXIT_SUCCESS;
}