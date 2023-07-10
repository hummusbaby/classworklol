#include <stdio.h>
#include "employee.h"

//************************************************************* 
// Function: printEmpStatistics 
// 
// Purpose: Prints out the totals and averages of all 
//          floating point value items for all employees
//          that have been processed.
// 
// Parameters: 
//
//   employeeTotals - a structure containing a running total 
//                    of all employee floating point items 
//   employeeMinMax - a structure containing all the minimum 
//                    and maximum values of all employee 
//                    floating point items
//   theSize - the total number of employees processed, used 
//          to check for zero or negative divide condition.
// 
// Returns: void
//  
//**************************************************************

void printEmpStatistics (struct totals employeeTotals, 
                         struct min_max employeeMinMax,
                         int theSize)
{
	
	// print a separator line
    printf("\n--------------------------------------------------------------");
    printf("-------------------");
    
    // print the totals for all the floating point fields
    // print the totals for all the floating point fields
    printf("\nTotals:                         %5.2f %5.1f %5.1f %7.2f %6.2f %7.2f %8.2f",
           employeeTotals.total_wage,
           employeeTotals.total_hours,
           employeeTotals.total_overtimeHours,
           employeeTotals.total_grossPay,
           employeeTotals.total_stateTax,
           employeeTotals.total_fedTax,
           employeeTotals.total_netPay);
    
    // make sure you don't divide by zero or a negative number
    if (theSize > 0)       
    {
        // print the averages for all the floating point fields
        printf("\nAverages:                       %5.2f %5.1f %5.1f %7.2f %6.2f %7.2f %8.2f",
               employeeTotals.total_wage/theSize,
               employeeTotals.total_hours/theSize,
               employeeTotals.total_overtimeHours/theSize,
               employeeTotals.total_grossPay/theSize,
               employeeTotals.total_stateTax/theSize,
               employeeTotals.total_fedTax/theSize,
               employeeTotals.total_netPay/theSize);
    } // if
    
    // print the min and max values
    // TODO - replace the zeros below with the correct reference to the 
    //        to the min member field
    printf("\nMinimum:                        %5.2f %5.1f %5.1f %7.2f %6.2f %7.2f %8.2f",
           employeeMinMax.min_wageRate,
           employeeMinMax.min_hours,
           employeeMinMax.min_overtimeHrs,
           employeeMinMax.min_grossPay,
           employeeMinMax.min_stateTax,
           employeeMinMax.min_fedTax,
           employeeMinMax.min_netPay);

    // TODO - replace the zeros below with the correct reference to the 
    //        to the max member field   
    printf("\nMaximum:                        %5.2f %5.1f %5.1f %7.2f %6.2f %7.2f %8.2f",
           employeeMinMax.max_wageRate,
           employeeMinMax.max_hours,
           employeeMinMax.max_overtimeHrs,
           employeeMinMax.max_grossPay,
           employeeMinMax.max_stateTax,
           employeeMinMax.max_fedTax,
           employeeMinMax.max_netPay);
           
}  // printEmpStatistics