
//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Average
// Input          : Two numbers
// Output         : Average of two numbers
// Description    : Accepts two numbers from the user and calculates their average
// Date           : 11/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1, int iNo2)
{
   float fAns = 0.0f;

            //type casting 
    fAns = ((float)iNo1 +(float) iNo2) / 2; //parameters is in integer but return value is in float so we need to type cast the parameters in float

     return  fAns;
}

int main()
{
    int iValue1 = 0, iValue2;
    float fResult = 0.0f;

    printf("Enter first No\n");
    scanf("%d",&iValue1);

    printf("Enter second No\n");
    scanf("%d",&iValue2);

    fResult = Average( iValue1,iValue2 );

    printf("Average  is :%f\n",fResult);

    return EXIT_SUCCESS;
}