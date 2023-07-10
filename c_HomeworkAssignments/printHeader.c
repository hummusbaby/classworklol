#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "employee.h"

//*************************************************************
// Function: printHeader
//
// Purpose: Prints out the table header for the following function printEmp
//
// Parameters: n/a
//
// Returns: void
//**************************************************************
void printHeader (void)
{
    printf("\n\n--- Pay Calculator ---\n");
    printf ("\n----------------------------------------------------------\n");
    printf ("Clock#  Wage  Hours  OT     Gross\n");
    printf ("----------------------------------------------------------\n");    
}