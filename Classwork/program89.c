//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Input          : Integer
// Output         : Integer numbers
// Description    : Displays numbers from 1 to the number entered by the user
// Date           : 21/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt <=iNo; icnt++)
    {
      printf("%d\n",icnt);
    }
}

int main()
{
  int iValue = 0;

  printf("Enter the number:\n");
  scanf("%d",&iValue);

  Display(iValue);

  return EXIT_SUCCESS;
}