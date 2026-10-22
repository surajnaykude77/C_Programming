//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CheckAdmission
// Input          : Float,Integer
// Output         : String
// Description    : Display Eliigiblity for Admission
// Date           : 22/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. Check admission Eligibility
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks,int iAge)
{
  if ((fMarks < 0) || (fMarks > 100) || (iAge < 0))
  {
    printf("Invalid input\n");
  }
  else if((fMarks >= 60) && (iAge >= 17))
  {
    printf("Eligible for Admission\n");
  }  
  else
  {
    printf("Not Eligible fo Admission");
  }
}

int main() 
{
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter Marks and Age\n");
    scanf("%f %d",&fMarks,&iAge);

    CheckAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}