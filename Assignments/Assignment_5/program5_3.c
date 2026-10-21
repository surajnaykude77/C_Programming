//////////////////////////////////////////////////////////////////////////
//
// Function Name  : DisplayGrade
// Input          : Float (Marks)
// Output         : Print Grade / Invalid marks
// Description    : Calculates student grade based on its marks
// Date           : 22/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. calculate student Grade
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DisplayGrade(float fNo)
{
    if (fNo < 0 || fNo > 100)
    {
        printf("Invalid marks");
    }
    else if((fNo >= 90) &&( fNo <= 100))
    {
        printf("A Grade");
    }
    else if((fNo >= 75) && (fNo <= 89))
    {
        printf("B Grade");
    }
     else if((fNo >= 60) && (fNo <= 74))
    {
        printf("C Grade");
    }
     else if((fNo >= 40) && (fNo <= 59))
    {
        printf("D Grade");
    }
     else if(fNo <= 40 )
    {
        printf("FAIL");
    }
}

int main() 
{
    float fValue = 0.0f;

    printf("Enter the Marks\n");
    scanf("%f",&fValue);

    DisplayGrade(fValue);

    return EXIT_SUCCESS;
}