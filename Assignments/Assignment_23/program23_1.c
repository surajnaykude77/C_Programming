//////////////////////////////////////////////////////////////////////////
//
// Function Name  : strlwrx
// Input          : String
// Output         : String
// Description    : convert string into lower case
// Date           : 16/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//  Q. Write a program which accept string from user and convert it into lower case.
//
//////////////////////////////////////////////////////////////////////////

/*
    Input = "MARVELLOUS MULTI OS"

    Output  = "marvellous multi os"
*/

#include<stdio.h>
#include<stdlib.h>

void strlwrx(char *str)
{
    if (str == NULL)
    {
        return;
    }

    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[30];

    printf("Enter a String\n");
    scanf("%[^'\n']s",arr);
    
    strlwrx(arr);

    printf("Modified string is %s",arr);

    return EXIT_SUCCESS;
}