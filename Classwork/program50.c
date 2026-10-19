
//////////////////////////////////////////////////////////////////////////
//
// Function Name  : check Minimum number
// Input          : Four numbers
// Output         : Minimum of four numbers
// Description    : Accepts four numbers from the user and display  minimum number
// Date           : 12/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Minimum(int iNo1, int iNo2, int iNo3, int iNo4)
{
  if ((iNo1 < iNo2) && (iNo1 < iNo3) && (iNo1 < iNo4))
  {
    return iNo1;
  }

  else if ((iNo2 < iNo1) && (iNo2 < iNo3) && (iNo2 < iNo4))
  {
    return iNo2;
  }
  else if ((iNo3 < iNo1) && (iNo3 < iNo3) && (iNo3 < iNo4))
  {
    return iNo3;
  }
  else
  {
    return iNo4;
  }
}

int main()
{
  int iValue1 = 0, iValue2, iValue3, iValue4 = 0;
  int iResult = 0;

  printf("Enter first No\n");
  scanf("%d", &iValue1);

  printf("Enter second No\n");
  scanf("%d", &iValue2);

  printf("Enter third No\n");
  scanf("%d", &iValue3);

  printf("Enter forth No\n");
  scanf("%d", &iValue4);

  iResult = Minimum(iValue1, iValue2, iValue3, iValue4);

  printf("Minimun is :%d\n", iResult);

  return EXIT_SUCCESS;
}