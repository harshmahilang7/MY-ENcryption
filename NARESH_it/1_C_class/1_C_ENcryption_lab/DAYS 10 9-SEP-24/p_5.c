/**
 * @Author: Dastan Alam
 * @Date:   2024-09-10 10:24:07 AM   10:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-10 10:47:09 AM   10:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition: 

// -> For first 50 units Rs. 0.50/unit 
// -> For next 100 units Rs. 0.75/unit 
// -> For next 100 units Rs. 1.20/unit 
// -> For unit above 250 Rs. 1.50/unit 
// An additional surcharge of 20% is added to the bill. 

// How to calculate electricity bill using if else in C programming. Program to find electricity bill using if else in C. Logic to find net electricity bill in C program.  
int main(int argc, char const *argv[])
{
    int unit;
    printf("Enter the electricity units consumed:"); scanf("%d",&unit);
    float price;
    if (unit<=50)
    {
        price=unit*0.50;
    }
    else if (unit<=150)
    {
        price=(unit-50)*0.75+50*0.50;
    }
    else if (unit<=250)
    {
        price=((unit-150)*1.20)+(100*0.75)+(50*0.50);
    }
    else
    {
        
        price=(unit-250)*1.50+(100*1.20)+(100*0.75)+(50*0.50);
    }
    
    float additionalsurcharge=(float)20/(float)100*price;
    printf("Total electricity bill: %.2f",additionalsurcharge+price);
    return 0;
}
