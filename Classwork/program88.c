//////////////////////////////////////////////////////////////////////////
//
// Function Name  : main
// Input          : Integer
// Output         : Integer numbers
// Description    : Displays numbers from 1 to the number entered by the user
// Date           : 21/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue = 0;
    int icnt = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    for(icnt = 1;icnt <=iValue; icnt++)
        {
            printf("%d\n",icnt);
        }

    return EXIT_SUCCESS;
}