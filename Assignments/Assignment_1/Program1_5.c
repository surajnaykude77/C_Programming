//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Accept
// Input          : Integer
// Output         : None
// Description    : prints that number of * on screen
// Date           : 18/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q5. accept one number from user and print that number * on screen 
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Accept(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("%d *\n",icnt);
    }
}

int main() 
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    Accept(iValue);

    return EXIT_SUCCESS;
}