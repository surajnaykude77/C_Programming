//////////////////////////////////////////////////////////////////////////
//
// Function Name  : MultDigits
// Input          : Integer
// Output         : Integer
// Description    : Display multiplication of all digits
// Date           : 8/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. write a program which accept number from user 
//       and return multipliction of all digits
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int MultDigits(int iNo)
{ 
    int iDigit = 0;
    int iMultiplication = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit != 0) 
        {
            iMultiplication = iMultiplication * iDigit;
        }
        
        iNo = iNo / 10;
    }
    
    return iMultiplication;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}