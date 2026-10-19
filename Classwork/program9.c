
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Addition
// Input          : Integer,Integer
// Output         : Integer
// Description    : Performs Addition
// Date           : 10/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

int Addition(
                int iNo1,   //First Input
                int iNo2    //Second Input
            )
{
    int iAns=0;

    iAns=iNo1+iNo2;         // Business logic

    return iAns;
}
/////////////////////////////////////////////////////////////////////////
//
// Entry point of the application
//
////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue1=0, iValue2=0, iResult=0;

    printf("Enter first Number:\n");
    scanf("%d",&iValue1);

    printf("Enter second Number:\n");
    scanf("%d",&iValue2);

    iResult=Addition(iValue1,iValue2);

    printf("Addition is :%d\n",iResult);

    return EXIT_SUCCESS;

}

////////////////////////////////////////////////////////////////////////
//
// step 5 : test the program
// 
//     Tested test cases
//      
//     Input 1       Input 2      Output
//
//      10          11              21
//      11           0              11
//       0          11              11
//      20          -9              11
//      -9          20              11
//     -20         -11             -31
//
////////////////////////////////////////////////////////////////////////
