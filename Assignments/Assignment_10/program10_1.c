//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CircleArea
// Input          : Float
// Output         : Double
// Description    : Display Area of circle 
// Date           : 6/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

double CircleArea(float fRadious)
{
    double dArea = 0.0;

    if (fRadious < 0)
    {
        fRadious = -fRadious;   //Input updater
    }

    dArea = 3.14 * fRadious * fRadious;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter a radious\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    
    printf("Area of circle is %f\n", dRet);

    return EXIT_SUCCESS;
}