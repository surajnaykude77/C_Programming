//////////////////////////////////////////////////////////////////////////
//
// Function Name  : FindGreatest
// Input          : Integer,Integer,Integer
// Output         : Greatest Integer
// Description    : Display greatest integer among three integers
// Date           : 21/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. Accept three integers and determine greatest number among them.
//       the program must also work correctly two or all three numbers equal
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void FindGreatest(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 >= iNo2) && (iNo1 >= iNo3))
    {
        printf("%d is greatest number",iNo1);
    }
    else if((iNo2 >= iNo1) && (iNo2 >= iNo3))
    {
        printf("%d is greatest number",iNo2);
    }
    else
    {
        printf("%d is greatest number",iNo3);
    }
    
}

int main() 
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0;

    printf("Enter three numbers\n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}