#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "employee.h"

//main function of program
int main(){

    //establish variable for for loop in int main
    int i;

    //structure for filling employee info
    struct employee employeeInfo[NUM_EMPLOYEES] =
    {
    {{"Connie", "Cobol"}, "MA", 98401, 10.60},
    {{"Mary", "Apl"}, "NH", 526488, 9.75},
    {{"Frank", "Fortran"}, "VT", 765349, 10.50},
    {{"Jeff", "Ada"},"NY", 34645, 12.25},
    {{"Anton", "Pascal"}, "CA", 127615, 8.35}
    };


    //struct to initialize mix/max values
    struct min_max employeeMinMax = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    //store totals and initialize them to 0
    struct totals employeeTotals = {0,0,0,0,0,0,0};

    //loop to process all employees pay calcs
    for (int i = 0; i < NUM_EMPLOYEES; ++i)
    {
        //prompt for number of hours worked by employee
        employeeInfo[i].hours = getHours (employeeInfo[i].clockNum);

        //calc overtime hours
        employeeInfo[i].overtimeHours = calculateOT (employeeInfo[i].hours);

        //calc gross pay
        employeeInfo[i].grossPay = calculateGross (employeeInfo[i].hours, 
                                                employeeInfo[i].wage, 
                                                employeeInfo[i].overtimeHours);
        //calc state tax
        employeeInfo[i].stateTax = calcStateTax (employeeInfo[i].grossPay,
                                                employeeInfo[i].taxState);
        //calc federal tax
        employeeInfo[i].fedTax = calcFedTax (employeeInfo[i].grossPay);

        //calc net pay after tax
        employeeInfo[i].netPay = calcNetPay (employeeInfo[i].grossPay, 
                                             employeeInfo[i].stateTax, 
                                             employeeInfo[i].fedTax);

        // employee totals
        employeeTotals = calcEmployeeTotals (employeeInfo[i].wage, 
                                             employeeInfo[i].hours,
                                             employeeInfo[i].overtimeHours, 
                                             employeeInfo[i].grossPay,
                                             employeeInfo[i].stateTax,
                                             employeeInfo[i].fedTax,
                                             employeeInfo[i].netPay,
                                             employeeTotals);
                                             
        // updates min and max values                             
        employeeMinMax = calcEmployeeMinMax (employeeInfo[i].wage, 
                                             employeeInfo[i].hours,
                                             employeeInfo[i].overtimeHours, 
                                             employeeInfo[i].grossPay,
                                             employeeInfo[i].stateTax,
                                             employeeInfo[i].fedTax,
                                             employeeInfo[i].netPay,
                                             employeeMinMax, i);
    }

    printHeader();

    for (i = 0; i < NUM_EMPLOYEES; ++i)
    {
        printEmp(employeeInfo[i].empName.firstName,
                employeeInfo[i].empName.lastName,
                employeeInfo[i].taxState,
                employeeInfo[i].clockNum,
                employeeInfo[i].wage,
                employeeInfo[i].hours, 
                employeeInfo[i].overtimeHours, 
                employeeInfo[i].grossPay,
                employeeInfo[i].stateTax,
                employeeInfo[i].fedTax,
                employeeInfo[i].netPay);
    }
        
    // print the totals and averages for all float items
    printEmpStatistics (employeeTotals, employeeMinMax, NUM_EMPLOYEES);

    return (0);
}