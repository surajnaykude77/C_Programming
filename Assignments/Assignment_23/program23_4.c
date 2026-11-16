//////////////////////////////////////////////////////////////////////////
//
// Function Name  : DisplayDigit
// Input          : String
// Output         : None (Prints directly to console)
// Description    : Display only digits from a given string
// Date           : 16/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//  Q. Write a program which accept string from user and display only
//     digits from that string
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  = "Marve89llous121"

    Output = "89121"
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    if (str == NULL)
    {
        return;
    }

    while (*str != '\0')
    {
        if (*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }
        str++;
    }
}

int main()
{
    char arr[30];

    printf("Enter a String\n");
    scanf("%[^'\n']s",arr);
    
    DisplayDigit(arr);

    return EXIT_SUCCESS;
}