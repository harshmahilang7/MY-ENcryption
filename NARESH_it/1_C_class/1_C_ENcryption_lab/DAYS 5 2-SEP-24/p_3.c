/**
 * @Author: Dastan Alam
 * @Date:   2024-09-02 06:37:23 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-02 07:35:14 PM   19:09
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 3 : 
// =======

// Devlop a program on a payroll system for a company. The system needs to calculate the salary of an employee based on their employee type ('M' for manager or 'H' for HR employee) and their basic salary. 
// For managers, their salary should be increased by 10% as a performance bonus and for HR  increased by 5% . Write a C program that takes the employee type and basic salary as inputs and calculates the increased salary using the ternary operator.

// ========================================================================================================    

int main(int argc, char const *argv[])
{
    // float basic_salary=100;
    // char employee_type='m';
    float basic_salary;
    char employee_type;
    
    printf("basic_salary:");
    scanf("%f",&basic_salary);
    
    printf("employee_type:");
    scanf(" %c",&employee_type); // space in %c in very imp because it taking enter as a input 
    
    (employee_type=='m'||employee_type=='M')?printf("increased salary %f",basic_salary+(float)10/(float)100*(float)basic_salary): (employee_type=='h'||employee_type=='H')?printf("increased salary %f",basic_salary+(float)5/(float)100*(float)basic_salary):printf("worong output");
    return 0;
}
