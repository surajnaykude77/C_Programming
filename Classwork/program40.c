
//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Find  Maximum number
// Input          : Two integers
// Output         : Display maximum numbers
// Description    : Accepts two integers from the user and displays
//                  which number is maximum 
// Date           : 11/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue1 = 0, iValue2, iResult = 0;

    printf("Enter first No\n");
    scanf("%d",&iValue1);

    printf("Enter second No\n");
    scanf("%d",&iValue2);

    if(iValue1 > iValue2)
    {
        printf("Maximum is %d\n",iValue1);
    }
    else
    {
        printf("Maximum is %d\n",iValue2);
    }

    return EXIT_SUCCESS;
}