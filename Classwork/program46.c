
//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Average
// Input          : Three numbers
// Output         : Average of three numbers
// Description    : Accepts three numbers from the user and calculates their average
// Date           : 11/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1, int iNo2, int iNo3)
{
   float fAns = 0.0f;

    //type casting input is in integer bit return value is in float
    fAns = ((float)iNo1 +(float) iNo2 + (float)iNo3) / 3;

     return  fAns;
}

int main()
{
    int iValue1 = 0, iValue2, iValue3 =0;
    float fResult = 0.0f;

    printf("Enter first No\n");
    scanf("%d",&iValue1);

    printf("Enter second No\n");
    scanf("%d",&iValue2);

     printf("Enter third No\n");
    scanf("%d",&iValue3);

    fResult = Average( iValue1,iValue2 , iValue3);

    printf("Average  is :%f\n",fResult);
    
    return EXIT_SUCCESS;
}