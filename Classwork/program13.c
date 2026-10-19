
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
                int iNo1,   //first input
                int iNo2    //second input
            )
{
    int iAns=0;

    iAns=iNo1+iNo2;         // business logic

    return iAns;
}
/////////////////////////////////////////////////////////////////////////
//
// Entry point of the application
//
////////////////////////////////////////////////////////////////////////

int main()
{
    // Declare variables to store two numbers and the result.
    int iValue1=0, iValue2=0, iResult=0;

    // Read the first number from the user and validate the input.
    printf("Enter first Number:\n");
    if(scanf("%d",&iValue1)!=1)
    {
        fprintf(stderr,"Unable to proceed as First input is invalid\n");
        return EXIT_FAILURE;
    }

    // Read the second number from the user and validate the input.
    printf("Enter second Number:\n");
    if(scanf("%d",&iValue2)!=1)
    {
        fprintf(stderr,"Unable to proceed as  Second Input is invalid\n");
        return EXIT_FAILURE;
    }

    // Call the Addition function and store the computed result.
    iResult=Addition(iValue1,iValue2);

    // Display the final sum to the user.
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
