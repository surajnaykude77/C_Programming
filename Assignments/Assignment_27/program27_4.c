//////////////////////////////////////////////////////////////////////////
//
//  Q. Write a program which accept string from user and check whether
//     it contains vowels in it or not.
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  : "marvellous"
    Output : TRUE

    Input  : "Demo"
    Output : TRUE

    Input  : "xyz"
    Output : FALSE
*/

//////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkVowel
// Input          : String
// Output         : BOOL (TRUE or FALSE)
// Description    : Checks whether the string contains any vowel
// Date           : 19/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    if (str == NULL)
    {
        return FALSE;
    }

    while(*str != '\0')
    {
        if ((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') ||
            (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            return TRUE;
        }
        
        str++;
    }

    return FALSE;
}

int main()
{
    char arr[20] = {'\0'};
    BOOL bRet = FALSE;

    printf("Enter string:\n");
    scanf(" %[^\n]s", arr);

    bRet = ChkVowel(arr);

    if (bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return EXIT_SUCCESS;
}