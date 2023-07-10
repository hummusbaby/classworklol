#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "employee.h"

//*************************************************************
// Function: calculateOT
//
// Purpose: calculates amount of hours worked past the standard 40hrs which will
// then be used to calculate gross
//
// Parameters: hours, CONST: STD_HOURS
//
// Returns: otHoursWorked
//**************************************************************
float calculateOT(float hours){
    float otHoursWorked = 0; // stores value inputted by the user to be returned to main
    if (hours > STD_HOURS)
        otHoursWorked = hours - STD_HOURS;
    return(otHoursWorked);

}
