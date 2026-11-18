//////////////////////////////////////////////////////////////////////////
//
//  Q. Accept division of student from user and depends on the division
//    display exam timing. There are 4 divisions in school as A,B,C,D. Exam
//    of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
//    (Application should be case insensitive)
//
//////////////////////////////////////////////////////////////////////////

/*
    Input : 'C'
    Output : Your exam at 9.20 AM

    Input : 'd'
    Output : Your exam at 10.30 AM
*/

//////////////////////////////////////////////////////////////////////////
//
// Function Name  : DisplaySchedule
// Input          : Character
// Output         : None
// Description    : Displays exam timing based on student division
// Date           : 18/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {
        case 'A':
        case 'a':
            printf("Your exam at 7.00 AM\n");
            break;
        case 'B':
        case 'b':
            printf("Your exam at 8.30 AM\n");
            break;
        case 'C':
        case 'c':
            printf("Your exam at 9.20 AM\n");
            break;
        case 'D':
        case 'd':
            printf("Your exam at 10.30 AM\n");
            break;
        default:
            printf("Invalid division.\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division:\n");
    scanf(" %c", &cValue);
    
    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}