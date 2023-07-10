#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "employee.h"

//*************************************************************
// Function: calculateGross
//
// Purpose: calculates employee wage factoring in standard and overtime time + wages
//
// Parameters: hours, wage, overtimeHours, CONST: OVERTIME
//
// Returns: gross - sum $ employee earned for the week
//**************************************************************
float calculateGross (float hours,float wage,float overtimeHours){
    float overtimeWage = wage * OVERTIME; 
    float overtimeGross = overtimeWage * overtimeHours;
    float gross = (hours * wage) + overtimeGross; // stores value inputted by the user to be returned to main
    return(gross);
}