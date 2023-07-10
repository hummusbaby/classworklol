#include <stdio.h>
#include "employee.h"

//************************************************************* 
// Function: printEmp 
// 
// Purpose: Prints out all the information for an employee
//          in a nice and orderly table format.
// 
// Parameters: 
//
//   firstName - the employee first name
//   lastName - the employee last name
//   taxState - the state where the employee works
//   clockNumber - unique employee ID
//   wageRate - hourly wage rate
//   hours - Hours worked for the week
//   overtimeHrs - overtime hours worked in a week
//   grossPay - gross pay for the week
//   stateTax - the calculated state tax
//   fedTax - the calculated federal tax
//   netPay - the calculated take home pay after taxes
// 
// Returns: void
//  
//**************************************************************

void printEmp (char firstName [], char lastName [], char taxState [], 
               long int clockNumber, float wageRate, 
               float hours, float overtimeHrs, float grossPay,
               float stateTax, float fedTax, float netPay)
{

    // Used to format the employee name
    char name [FIRST_NAME_SIZE + LAST_NAME_SIZE + 1];
    
    // While you could just print the first and last name in the printf
    // statement that follows, you could also use various C string library
    // functions to format the name exactly the way you want it.  Breaking
    // the name into first and last members additionally gives you some 
    // flexibility in printing.  This also becomes more useful if we decide
    // later to store other parts of a person's name. I really did this just 
    // to show you how to work with some of the common string functions.
    strcpy (name, firstName);
    strcat (name, " "); // add a space between first and last names
    strcat (name, lastName);
    
    // Print out a single employee
    printf("\n%-20.20s %-2.2s  %06li %5.2f  %4.1f  %4.1f %7.2f %6.2f %7.2f %8.2f",
           name, taxState, clockNumber, wageRate, hours,
           overtimeHrs, grossPay, stateTax, fedTax, netPay);
          
} // printEmp