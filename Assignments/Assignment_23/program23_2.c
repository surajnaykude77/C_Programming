//////////////////////////////////////////////////////////////////////////
//
// Function Name  : struprx
// Input          : String
// Output         : String
// Description    : convert string into Upper case
// Date           : 16/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//  Q. Write a program which accept string from user and convert it into Upper case.
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  = "marvellous multi os"

    Output = "MARVELLOUS MULTI OS"
*/

#include<stdio.h>
#include<stdlib.h>

void struprx(char *str)
{
    if (str == NULL)
    {
        return;
    }

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[30];

    printf("Enter a String\n");
    scanf("%[^'\n']s",arr);
    
    struprx(arr);

    printf("Modified string is %s",arr);

    return EXIT_SUCCESS;
}