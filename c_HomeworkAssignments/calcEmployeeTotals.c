#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "employee.h"

//*************************************************************
// Function: calcEmployeeTotals
//
// Purpose: Accepts various floating point values from an
//          employee and adds to a running total.
//
// Parameters:
//
//   wage       - hourly wage rate
//   hours          - hours worked in a given week
//   overtimeHours    - overtime hours worked in a week
//   grossPay       - the grossPay for a given week
//   stateTax       - the state taxes owed
//   fedTax         - the fed taxes owed
//   netPay         - total take home page (after taxes)
//   employeeTotals - structure containing a running totals 
//                    of all fields above
//
// Returns: employeeTotals - updated employeeTotals structure
//
//**************************************************************

struct totals calcEmployeeTotals (float wage, 
                                  float hours,
                                  float overtimeHours, 
                                  float grossPay,
                                  float stateTax,
                                  float fedTax,
                                  float netPay,
                                  struct totals employeeTotals)
{
	
    // add current employee data to our running totals
    employeeTotals.total_wage += wage;
    employeeTotals.total_hours += hours;
    employeeTotals.total_overtimeHours += overtimeHours;
    employeeTotals.total_grossPay += grossPay;
    employeeTotals.total_stateTax += stateTax;
    employeeTotals.total_fedTax += fedTax;
    employeeTotals.total_netPay += netPay;
    
    // return all the updated totals to the calling function
    return (employeeTotals);
	
} // calcEmployeeTotals