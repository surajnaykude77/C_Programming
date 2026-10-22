//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CalculateBonus
// Input          : float (Salary), int (Years of Service)
// Output         : Prints the calculated employee bonus
// Description    : Calculates bonus based on salary and years of service
// Date           : 22/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. Calculate Employee Bonus 
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if (fSalary <= 0.0f || iYears < 0) 
    {
        printf("Invalid input.\n");
        return;
    }

    if (iYears > 10) 
    {
        fBonus = fSalary * 0.15f; // 15% bonus for more than 10 years
    } 
    else if (iYears >= 5) 
    {
        fBonus = fSalary * 0.10f; // 10% bonus for 5 to 10 years
    } 
    else 
    {
        fBonus = fSalary * 0.05f; // 5% bonus for less than 5 years
    }

    printf("Bonus = %.2f\n", fBonus);
}

int main() 
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter Salary and Years of service: \n");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}