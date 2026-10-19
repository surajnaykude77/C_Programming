
//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Find  Maximum number
// Input          : Two integers
// Output         : display maximum number
// Description    : Business logic outside the main function and call that function from main function
// Date           : 11/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Maximum(int iNo1, int iNo2)
{
    //it is always good programming practice to write the business logic in separate function and call that function from main function 
    
    int mRet = 0;

    if(iNo1 > iNo2)
        {
            printf("Maximum is %d\n",iNo1);
        }
    else
        {
            printf("Maximum is %d\n",iNo2);
        }

}
int main()
{
    int iValue1 = 0, iValue2, iResult = 0;

    printf("Enter first No\n");
    scanf("%d",&iValue1);

    printf("Enter second No\n");
    scanf("%d",&iValue2);

    Maximum( iValue1,iValue2 );
    
    return EXIT_SUCCESS;
}