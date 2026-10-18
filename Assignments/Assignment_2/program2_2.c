//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Input          : Integer
// Output         : None
// Description    : prints that number of * on screen
// Date           : 18/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q2. accept one number from user and print that number * on screen 
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    int icnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    icnt = iNo;

    while(iNo > 0)
    {
        printf("*\n");
        iNo--;
    }
}
int main() 
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}