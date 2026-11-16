//////////////////////////////////////////////////////////////////////////
//
// Function Name  : strtogglex
// Input          : String
// Output         : String
// Description    : toggle the string (upper to lower,lower to upper)
// Date           : 16/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//  Q. Write a program which accept string from user and toggle the case.
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  = "Marvellous Multi OS"

    Output = "mARVELLOUS mULTI os"
*/

#include<stdio.h>
#include<stdlib.h>

void strtogglex(char *str)
{
    if (str == NULL)
    {
        return;
    }

    while (*str != '\0')
    {
        // lowercase  shift to uppercase
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        // uppercase  shift to lowercase
        else if (*str >= 'A' && *str <= 'Z')
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
    
    strtogglex(arr);

    printf("Modified string is %s",arr);

    return EXIT_SUCCESS;
}