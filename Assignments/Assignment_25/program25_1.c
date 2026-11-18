//////////////////////////////////////////////////////////////////////////
//
//  Q. Accept character from user and check whether it is alphabet or not
//      (A-Z , a-z)
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  = 'F'
    Output = TRUE

    Input  = '&'
    Output = FALSE
*/

//////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkAlpha
// Input          : Character, symbol, digits
// Output         : BOOL (TRUE or FALSE)
// Description    : Check whether a given input is alphabet or not
// Date           : 18/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha( char ch)
{
    if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
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
    
    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is not Character\n");
    }

    return EXIT_SUCCESS;
}