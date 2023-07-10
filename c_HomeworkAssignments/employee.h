//******************************************************* 
// 
// Homework: 7
// 
// Name: Kyle Santos
// 
// Class: C Programming, Summer 2023
// 
// Date: 7/9/2023
// 
// Description: Program Looping for employee pay capable of 
// determining overtime and gross pay for a set of employees with outputs sent to standard output.
//
//********************************************************

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//constants
#define STD_HOURS 40.0 //standard hours worked a week per employee
#define NUM_EMPLOYEES 5 //number of employees
#define OVERTIME 1.5 //multiplyer for overtime pay
#define MA_TAX_RATE 0.05
#define NH_TAX_RATE 0.00
#define VT_TAX_RATE 0.06
#define CA_TAX_RATE 0.07
#define DEFAULT_TAX_RATE 0.08
#define NAME_SIZE 20
#define TAX_STATE_SIZE 3
#define FED_TAX_RATE 0.25
#define FIRST_NAME_SIZE 10
#define LAST_NAME_SIZE 10

//struct for employee names
struct name
{
    char firstName [FIRST_NAME_SIZE];
    char lastName [LAST_NAME_SIZE];
};


//structure for employee fields to be accounted for
struct employee
{
    struct name empName;
    char taxState [TAX_STATE_SIZE];
    long clockNum;
    float wage;
    float hours;
    float overtimeHours;
    float grossPay;
    float stateTax;
    float fedTax;
    float netPay;
};


//structure for totals
struct totals
{
    float total_wage;
    float total_hours;
    float total_overtimeHours;
    float total_grossPay;
    float total_stateTax;
    float total_fedTax;
    float total_netPay;
};

//struct for min and max values
struct min_max
{
    float min_wageRate;
    float min_hours;
    float min_overtimeHrs;
    float min_grossPay;
    float min_stateTax;
    float min_fedTax;
    float min_netPay;
    float max_wageRate;
    float max_hours;
    float max_overtimeHrs;
    float max_grossPay;
    float max_stateTax;
    float max_fedTax;
    float max_netPay;
};

//Functions

float getHours(long clockNum);

float calculateOT(float hours);

float calculateGross (float hours,float wage,float overtimeHours);

void printHeader (void);

void printEmp (char firstName [], char lastName[], char taxState[], long clockNum, float wage, float hours, float overtimeHours, float grossPay, float stateTax, float fedTax, float netPay);

float calcStateTax (float grossPay, char taxState[]);

float calcFedTax (float grossPay);

float calcNetPay (float grossPay, float stateTax, float fedTax);

struct totals calcEmployeeTotals (float wage, 
                                  float hours,
                                  float overtimeHours, 
                                  float grossPay,
                                  float stateTax,
                                  float fedTax,
                                  float netPay,
                                  struct totals employeeTotals);
                                 
struct min_max calcEmployeeMinMax (float wageR, 
                                   float hours,
                                   float overtimeHours, 
                                   float grossPay,
                                   float stateTax,
                                   float fedTax,
                                   float netPay,
                                   struct min_max employeeMinMax,
                                   int arrayIndex);
                                  
void printEmpStatistics (struct totals employeeTotals, 
                         struct min_max employeeMinMax,
                         int theSize);
