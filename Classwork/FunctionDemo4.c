//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Addition
// Input          : Integer,Integer
// Output         : Integer
// Description    : Perform addition of two integers
// Date           : 2/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int Value1 = 0, Value2 = 0, Ans = 0;

    printf("Enter first number : \n");
    scanf("%d",&Value1);

    printf("Enter second number : \n");
    scanf("%d",&Value2);
    
    Ans = Value1 + Value2;      // Business Logic

    printf("Addition is : %d\n",Ans);

    return 0;
}