//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Summation
// Input          : Integer
// Output         : Integer
// Description    : Calculates the summation up to the number entered by the user
// Date           : 21/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Summation(int iNo)
{
    int icnt = 0, iSum = 0;
    
      for(icnt = 1; icnt <=iNo; icnt++)
        {
          iSum = iSum + icnt;
        }
      return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;


  printf("Enter the number:\n");
  scanf("%d",&iValue);

  iRet = Summation(iValue);

  printf("summation is %d\n",iRet);

    return EXIT_SUCCESS;
}