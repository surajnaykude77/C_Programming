//////////////////////////////////////////////////////////////////////////
//
// Function Name  : FindGreater
// Input          : Integer
// Output         : Integer
// Description    : display greater number
// Date           : 21/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. Accept two integers and determine which number is greater.
//         If both number are equal display an appropriate message
//           
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iNo1,int iNo2)
{   
    if(iNo1 > iNo2)
    {
        printf("%d is greater number",iNo1);
    }
    else if(iNo1 < iNo2)
    {
        printf("%d is greater number", iNo2);
    }
    else
    {
        printf("Both numbers is equal\n");
    }
}        

int main() 
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two number\n");
    scanf("%d %d",&iValue1, &iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}