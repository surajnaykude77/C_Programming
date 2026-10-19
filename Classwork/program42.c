
//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Find  Minimum number
// Input          : Two integers
// Output         : display minimum number
// Description    : Helper function outside the main function and call that function from main function
// Date           : 11/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Minimum(int iNo1, int iNo2)
{
    //it is always good programming practice to avoide taking input and display output in helper function 
    if(iNo1 < iNo2)
        {
            return iNo1;                            
        }
    else
        {
            return iNo2;
        }

}

int main()
{
    int iValue1 = 0, iValue2, iResult = 0;

    printf("Enter first No\n");
    scanf("%d",&iValue1);

    printf("Enter second No\n");
    scanf("%d",&iValue2);

    iResult = Minimum( iValue1,iValue2 );

    printf("Minimum no is :%d\n",iResult);
    
    return EXIT_SUCCESS;
}