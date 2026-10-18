//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Input          : Integer, Integer
// Output         : Integer
// Description    : prints first number second number of times
// Date           : 18/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q4. accept two numbers from user and display first number is 
//          second number of times           
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo, int ifrequency)
{
    int icnt = 0;

    if(ifrequency < 0)
    {
        ifrequency = -ifrequency;     // Input updater
    }
    for(icnt = 1; icnt <= ifrequency; icnt++)
    {
        printf("%d\t",iNo);
    }
}
int main() 
{
    int iValue = 0;
    int icount =0;

    printf("Enter  number\n");
    scanf("%d",&iValue);

    printf("Enter a Frequency\n");
    scanf("%d",&icount);

    Display(iValue, icount);

    return EXIT_SUCCESS;
}