//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Percentage
// Input          : Integer
// Output         : Float
// Description    : display percentage of obtained marks
// Date           : 8/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. write a program which accept total marks and obtained marks
//        from user and calculate percentage
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

float Percentage(float fNo1, float fNo2)
{ 
    float fPercentage = 0.0f;

    if(fNo1 < 0 || fNo2 <= 0)
    {
        return 0.0f;
    }

    fPercentage = fNo2 / fNo1 * 100;

    return fPercentage;
}
int main()
{
    int  iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter Total Marks\n");
    scanf("%d",&iValue1);

    printf("Enter Obtained Marks\n");
    scanf("%d",&iValue2);

    if(iValue1 < iValue2)
    {
        printf("Obtained marks cannot be greater than total marks.\n");
        return 1;
    }

    fRet = Percentage(iValue1,iValue2);

    printf("%.2f%%",fRet);

    return EXIT_SUCCESS;
}