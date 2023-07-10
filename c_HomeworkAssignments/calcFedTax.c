#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "employee.h"


//*************************************************************
// Function: calcFedTax
//
// Purpose: Calculates the Federal Tax owed based on the gross 
//          pay
//
// Parameters:
//
//   grossPay - the grossPay for a given week
//
// Returns: theFedTax - calculated federal tax owed
//
//**************************************************************

float calcFedTax (float grossPay)
{
	
    float theFedTax; // The calculated Federal Tax
	
    // Fed Tax is the same for all regardless of state
    // Fed Tax is the same for all regardless of state
    // TODO:  Fix the fedTax calculation to be the gross pay
    //        multiplied by the Federal Tax Rate (use constant)
    theFedTax = grossPay * FED_TAX_RATE;
	
    // return the calculated federal tax back
    return (theFedTax);
	
} // calcFedTax