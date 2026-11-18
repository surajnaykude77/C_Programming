//////////////////////////////////////////////////////////////////////////
//
//  Q. Write a program which accept string from user and display it in
//     reverse order.
//
//////////////////////////////////////////////////////////////////////////

/*
    Input  : "MarvellouS"
    Output : "SuollevraM"
*/

//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Reverse
// Input          : String
// Output         : None
// Description    : Displays a string in reverse order
// Date           : 19/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;

    if (str == NULL)
    {
        return;
    }

    while (*end != '\0')
    {
        end++;
    }

    end--;

    while (end >= start)
    {
        printf("%c", *end);
        end--;
    }
    printf("\n");
}

int main()
{
    char arr[20] = {'\0'};

    printf("Enter string:\n");
    scanf(" %[^\n]s", arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}