    /*
    step 1: understand the problem statement
    step 2: write the algorithm
    step 3: decide the programming language
    step 4: write the program
    step 5: test the program
    */

////////////////////////////////////////////////////////////////
//
// step 1: understand the problem statement
//          user is going to enter any two integers
//            and we have to perform addition
//
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////

//  step 2: write the algorithm
/*
    Start
        accept first number as No1
        accept second number as No2
        create a variable as Ans to store the result
        perform the addition and store the Ans
        display the result from Ans
    End    
*/
////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////
//
// step 3: decide the programming language we select c programming
//
////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////
//  
//  step 4: write the program
//
////////////////////////////////////////////////////////////////

#include<stdio.h>

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

int Addition(int iNo1, int iNo2)
{
    int iAns=0;

    iAns=iNo1+iNo2; // business logic

    return iAns;
}
////////////////////////////////////////////////////////////////
//
// Entry point of the application
//
////////////////////////////////////////////////////////////////

int main()
{

    int iValue1=0, iValue2=0, iResult=0;

    printf("Enter first Number:\n");
    scanf("%d",&iValue1);

    printf("Enter second Number:\n");
    scanf("%d",&iValue2);

    iResult=Addition(iValue1,iValue2);

    printf("Addition is :%d\n",iResult);


    return 0;


}