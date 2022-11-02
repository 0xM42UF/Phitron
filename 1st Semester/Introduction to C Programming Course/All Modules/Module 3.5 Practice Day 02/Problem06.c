/*Write a C program that accepts an employee's total worked hours of a month and the
amount he received per hour. Print salary (with two decimal places) of a particular month.*/
#include <stdio.h>
int main()
{
    int working_hrs, salary;
    printf("Input the working hrs: ");
    scanf("%d", &working_hrs);
    printf("Salary amount/hr: ");
    scanf("%d", &salary);
    double Salary = working_hrs * salary;
    printf("Salary= %0.2lf", Salary);

    return 0;
}
