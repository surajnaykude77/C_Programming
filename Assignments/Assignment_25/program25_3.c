//////////////////////////////////////////////////////////////////////////
//
//  Q. Accept character from user and check whether it is Digit or not
//      (0-9).
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  = '7'
    Output = TRUE

    Input  = 'd'
    Output = FALSE
*/

//////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkDigit
// Input          : Character
// Output         : BOOL (TRUE or FALSE)
// Description    : Check whether a given character is digit or not
// Date           : 18/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit( char ch)
{
    if (((ch >= '0') && (ch <= '9')))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a Character:\n");
    scanf(" %c", &cValue);
    
    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }

    return EXIT_SUCCESS;
}