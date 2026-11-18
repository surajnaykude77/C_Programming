//////////////////////////////////////////////////////////////////////////
//
//  Q. Accept character from user and check whether it is small case or not
//      (a-z).
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  = 'g'
    Output = TRUE

    Input  = 'D'
    Output = FALSE
*/

//////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkSmall
// Input          : Character
// Output         : BOOL (TRUE or FALSE)
// Description    : Check whether a given character is small case or not
// Date           : 18/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall( char ch)
{
    if (((ch >= 'a') && (ch <= 'z')))
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
    
    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is a small case character\n");
    }
    else
    {
        printf("It is not a small case character\n");
    }

    return EXIT_SUCCESS;
}