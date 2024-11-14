/**
 * @Author: Dastan Alam
 * @Date:   2024-09-06 07:32:04 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-07 01:21:00 PM   13:09
 */
#include <stdio.h>
// Que 4 :
// ======= 

// Using ternary operator write a C program for a bookstore named "BookWorld" that calculates the discounted amount based on the total purchase amount. 

// The store provides three types of discounts to its customers:
// -> If the total purchase amount is less than Rs. 1000, there is no discount.
// -> If the total purchase amount is between Rs. 1000 and Rs. 5000 (inclusive), customers get a 5% discount on the total purchase amount.
// -> If the total purchase amount is greater than Rs. 5000, customers get a 10% discount on the total purchase amount.

// Sample input  : purchase amount = 999
// Sample output : total amount = 999

// Sample input  : purchase amount = 2000
// Sample output : total amount including 5% discount = 1900

// Sample input  : purchase amount = 10000
// Sample output : total amount including 10% discount = 9000

int main(int argc, char const *argv[])
{
    float amount=999;
    printf("purchase amount = %f\n",amount);
    (amount>5000)?printf("total amount including 10 per discount =%f",amount-((float)10/(float)100)*(float)amount):(amount<5000&&amount>1000)?printf("total amount including 5 per discount=%f",amount-((float)5/(float)100)*(float)amount):(amount<=1000)?printf("there is no discount,amount=%f",amount):printf("worong input");
    return 0;
}
