//////////////////////////////////////////////////////////////////////////
//
// Function Name  : CheckVotingEligibility
// Input          : Integer
// Output         : display Age is valid or not
// Description    : Display voter is valid or not fo voting
// Date           : 21/10/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//    Q. Accept the age of a person and determine whether the person is 
//       eligible to vote.A person must be at list 18 years old  
//        A negative age should be considered invalid 
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge >= 18)   
    {
        printf("Eligible for vote");
    }
    else if(iAge < 0)
    {
        printf("Invalide Age");
    }
    else
    {
        printf(" Not Eligible for vote");
    }
}

int main() 
{
    int iAge = 0;

    printf("Enter your Age4\n");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}