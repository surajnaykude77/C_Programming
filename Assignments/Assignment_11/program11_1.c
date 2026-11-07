//////////////////////////////////////////////////////////////////////////
//
// Function Name  : RangeDisplay
// Input          : Integer, Integer
// Output         : Integer
// Description    : Display number line
// Date           : 7/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void RangeDisplay(int iNo1 ,int iNo2)
{
    int iCnt = 0;

    for(iCnt = iNo1; iCnt <= iNo2; iCnt ++)
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

    RangeDisplay(iValue1,iValue2);

    return EXIT_SUCCESS;
}