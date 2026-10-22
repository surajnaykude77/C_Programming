//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CheckTriangle
// Input          : Three integers 
// Output         : Prints whether the sides form a valid triangle or not
// Description    : Determines triangle validity based on positive sides 
//                  and the triangle inequality theorem
// Date           : 22/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q.  Check Triangle Validity
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckTriangle(int iSlide1, int iSlide2, int iSlide3)
{
    if (iSlide1 <= 0 || iSlide2 <= 0 || iSlide3 <= 0) 
    {
        printf("Invalid input\n");
        return;
    }
     // The sum of any two sides must be greater than the third side
    if ((iSlide1 + iSlide2 > iSlide3) && 
        (iSlide1 + iSlide3 > iSlide2) && 
        (iSlide2 + iSlide3 > iSlide1)) 
    {
        printf(" VALID triangle\n");
    } 
    else 
    {
        printf(" Invalid triangle.\n");
    }
}

int main() 
{
    int iSlide1 = 0, iSlide2 = 0, iSlide3 = 0;

    printf("Enter Three sides:\n");
    scanf("%d %d %d", &iSlide1, &iSlide2, &iSlide3);

    CheckTriangle(iSlide1, iSlide2, iSlide3);

    return EXIT_SUCCESS;
}