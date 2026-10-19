
//////////////////////////////////////////////////////////////////////////
//
// Function Name  : check Minimum number
// Input          : Three numbers
// Output         : Minimum of three numbers
// Description    : Accepts three numbers from the user and display  minimum number
// Date           : 12/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Minimum(int iNo1, int iNo2, int iNo3)
{
  if ((iNo1 < iNo2) && (iNo1 < iNo3))
  {
    return iNo1;
  }

  else if ((iNo2 < iNo1) && (iNo2 < iNo3))
  {
    return iNo2;
  }
  else
  {
    return iNo3;
  }
}

int main()
{

  int iValue1 = 0, iValue2, iValue3 = 0;
  int iResult = 0;

  printf("Enter first No\n");
  scanf("%d", &iValue1);

  printf("Enter second No\n");
  scanf("%d", &iValue2);

  printf("Enter third No\n");
  scanf("%d", &iValue3);

  iResult = Minimum(iValue1, iValue2, iValue3);

  printf("Minimun is :%d\n", iResult);

  return EXIT_SUCCESS;
}