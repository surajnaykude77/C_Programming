//////////////////////////////////////////////////////////////////////////
//
// Function Name  : RectArea
// Input          : Float, Float
// Output         : Double
// Description    : Display Area of Rectangle 
// Date           : 6/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

double RectArea(float fWidth,float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter a width\n");
    scanf("%f",&fValue1);

    printf("Enter a height\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);
    
    printf("Area of rectangle is %f\n", dRet);

    return EXIT_SUCCESS;
}