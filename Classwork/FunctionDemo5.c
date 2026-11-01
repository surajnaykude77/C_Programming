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

void Addition(int No1, int No2)
{
    int Result = 0;
    Result = No1 + No2;     // Business Logic
    
    printf("Addition is : %d\n",Result);
}

int main()
{
    int Value1 = 0, Value2 = 0;

    printf("Enter first number : \n");
    scanf("%d",&Value1);

    printf("Enter second number : \n");
    scanf("%d",&Value2);
    
    Addition(Value1, Value2);

    return 0;
}