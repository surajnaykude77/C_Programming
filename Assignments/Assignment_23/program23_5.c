//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CountWhiteSpaces
// Input          : String
// Output         : Integer
// Description    : Count number of white spaces in a string
// Date           : 16/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountWhiteSpaces(char *str)
{
    int iCount = 0;

    if (str == NULL)
    {
        return 0;
    }

    while (*str != '\0')
    {
        // Check if the current character is a space
        if (*str == ' ')
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
    int iRet = 0;

    printf("Enter a String:\n");
    scanf("%49[^\n]", arr);
    
    iRet = CountWhiteSpaces(arr);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}