//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CountChar
// Input          : String, Character
// Output         : Integer
// Description    : Count the frequency of a given character in the string
// Date           : 16/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//  Q. Write a program which accept string from user and accept one character.
//     and return frequency of that character.
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  = "Marvellous Infosystems"
    character - m

    Output = 2
*/

#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    if (str == NULL)
    {
        return 0;
    }

    while (*str != '\0')
    {
        // Case-insensitive
        if (*str == ch || *str == ch + 32 || *str == ch - 32)
        {
            iCount++;
        }
        str++;
    }
    
    return iCount;
}

int main()
{
    char arr[50];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter a String:\n");
    scanf("%49[^\n]s", arr);

    printf("Enter a Character:\n");
    // The space before %c clears the newline from the buffer
    scanf(" %c", &cValue);
    
    iRet = CountChar(arr, cValue);

    printf("Character frequency is: %d\n", iRet);

    return EXIT_SUCCESS;
}