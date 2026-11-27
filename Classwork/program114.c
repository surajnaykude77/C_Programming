#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////
//
// function name  : CheckPrime
// Description    : Check whether a given number is prime
// Input          : Integer
// Output         : Boolean
// Author         : Suraj Navanath Naykude
// Date           : 28/11/2026
//
//////////////////////////////////////////////////////////////////////////
bool CheckPrime(int iNo)
{
  int icnt = 0;
  bool bFlag = false;

  for(icnt = 2,bFlag = true ; icnt <= iNo/2; icnt++)
  {
    if((iNo % icnt)== 0)
      {
        bFlag = false;
      }
  }
  return bFlag;
}

int main(void)
{
  int iValue = 0;
  bool bRet = false;

  printf("Enter number:\n");
  scanf("%d",&iValue);

  bRet= CheckPrime(iValue);

  if(bRet)
  {
    printf("It is prime number");
  }
  else
  {
    printf("It is not a prime number");
  }

  return EXIT_SUCCESS;
}