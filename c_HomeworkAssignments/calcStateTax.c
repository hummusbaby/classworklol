#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "employee.h"

//*************************************************************
// Function: calcStateTax
//
// Purpose: Calculates the State Tax owed based on gross pay
//
// Parameters:
//
//   grossPay - the grossPay for a given week
//   taxState - the physical state where the employee works
//
// Returns: theStateTax - calculated state tax owed
//
//**************************************************************

float calcStateTax (float grossPay, char taxState[])
{
	
    float theStateTax; // calculated state tax
	
    theStateTax = grossPay;  // initialize to gross pay
	
    // Make sure tax state is all uppercase
    if (islower(taxState[0]))
        taxState[0] = toupper(taxState[0]); // make upper case
    if (islower(taxState[1]))
        taxState[1] = toupper(taxState[1]); // make upper case
	    
    // calculate state tax based on where employee resides
    if (strcmp(taxState, "MA") == 0)
        theStateTax *= MA_TAX_RATE;
    else if (strcmp(taxState, "NH") == 0)
        theStateTax *= NH_TAX_RATE;
        
    // TODO:  Fix the state tax calculations for VT and CA ...
    //        right now both are set to zero
    else if (strcmp(taxState, "VT") == 0)
        theStateTax *= VT_TAX_RATE;
    else if (strcmp(taxState, "CA") == 0)
        theStateTax *= CA_TAX_RATE;
    else
        theStateTax *= DEFAULT_TAX_RATE;  // any other state
	 
    // return the calculated state tax back  
    return (theStateTax);
	   
} // calcStateTax