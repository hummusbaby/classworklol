#include <stdio.h>
#include "employee.h"

//*************************************************************
// Function: calcEmployeeMinMax
//
// Purpose: Accepts various floating point values from an
//          employee and adds to a running update of min
//          and max values
//
// Parameters:
//
//   wageRate       - hourly wage rate
//   hours          - hours worked in a given week
//   overtimeHrs    - overtime hours worked in a week
//   grossPay       - the grossPay for a given week
//   stateTax       - the state taxes owed
//   fedTax         - the fed taxes owed
//   netPay         - total take home page (after taxes)
//   employeeTotals - structure containing a running totals 
//                    of all fields above
//   arrayIndex     - the array index of the current set of element
//                    members being processed for the Array of 
//                    Employee structure
//
// Returns: employeeMinMax - updated employeeMinMax structure
//
//**************************************************************

struct min_max calcEmployeeMinMax (float wageRate, 
                                   float hours,
                                   float overtimeHrs, 
                                   float grossPay,
                                   float stateTax,
                                   float fedTax,
                                   float netPay,
                                   struct min_max employeeMinMax,
                                   int arrayIndex)
{
	
    // if this is the first set of data items, set 
    // them to the min and max
    if (arrayIndex == 0)
    {
        /* set the min to the first element members */
        employeeMinMax.min_wageRate = wageRate; 
        employeeMinMax.min_hours = hours;
        employeeMinMax.min_overtimeHrs = overtimeHrs; 
        employeeMinMax.min_grossPay = grossPay;
        employeeMinMax.min_stateTax = stateTax;
        employeeMinMax.min_fedTax = fedTax;
        employeeMinMax.min_netPay = netPay;
        
        // set the max to the first element members
        employeeMinMax.max_wageRate = wageRate; 
        employeeMinMax.max_hours = hours;
        employeeMinMax.max_overtimeHrs = overtimeHrs; 
        employeeMinMax.max_grossPay = grossPay;
        employeeMinMax.max_stateTax = stateTax;
        employeeMinMax.max_fedTax = fedTax;
        employeeMinMax.max_netPay = netPay;
        
    } // if
	
    else if (arrayIndex > 1) // process if other array elements
    {
		
        // check if current Wage Rate is the new min and/or max
        if (wageRate < employeeMinMax.min_wageRate)
        {
            employeeMinMax.min_wageRate = wageRate;
        }
		
        if (wageRate > employeeMinMax.max_wageRate)
        {
            employeeMinMax.max_wageRate = wageRate;
        }
		
        
        // TODO: do the same checking for the other min and max items
        //             ... just repeat the two "if statements" with the right
        //             reference between the specific min and max fields and
        //             employeeData array of structures item.
		
		
    } // else if
    
    // return all the updated min and max values to the calling function
    return (employeeMinMax);

} // calcEmployeeMinMax	
