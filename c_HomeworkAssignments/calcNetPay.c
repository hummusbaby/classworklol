#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "employee.h"

//*************************************************************
// Function: calcNetPay
//
// Purpose: Calculates the net pay as the gross pay minus any
//          state and federal taxes owed. Essentially, your 
//          "take home" pay.
//
// Parameters:
//
//   grossPay - the grossPay for a given week
//   stateTax - the state taxes owed
//   fedTax   - the fed taxes owed
//
// Returns: theNetPay - calculated take home pay (minus taxes)
//
//**************************************************************

float calcNetPay (float grossPay, float stateTax, float fedTax)
{
	
    float theNetPay;      // total take home pay (minus taxes)
    float theTotalTaxes;  // total taxes owed
	
    // calculate the total state and federal taxes
    theTotalTaxes = stateTax + fedTax;
	
    // calculate the net pay
    theNetPay = grossPay - theTotalTaxes;
	
    // return the calculated net pay back
    return (theNetPay);
	
} // calcNetPay