#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "employee.h"

//*************************************************************
// Function: getHours
//
// Purpose: calculate hours worked via user input
//
// Parameters: clockNum
//
// Returns: hoursWorked - number of hours worked in total
//**************************************************************
float getHours(long clockNum){
    float hoursWorked; // stores value inputted by the user to be returned to main
    printf("Enter total hours worked this week by employee # %06li: ", clockNum);
    scanf("%f", &hoursWorked);
    return (hoursWorked);
}
