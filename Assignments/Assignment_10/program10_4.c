//////////////////////////////////////////////////////////////////////////
//
// Function Name  : FhtoCs
// Input          : Float
// Output         : Double
// Description    : Convert Temperature from Fahrenheit to Celsius
// Date           : 6/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32.0) * (5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);
    
    printf("Temperature in Celsius is %f\n", dRet);

    return EXIT_SUCCESS;
}