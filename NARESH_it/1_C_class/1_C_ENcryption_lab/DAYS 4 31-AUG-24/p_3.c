/**
 * @Author: Dastan Alam
 * @Date:   2024-08-31 06:59:06 PM   18:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-31 07:32:40 PM   19:08
 */

// Que 3 : You are developing a program for an online bus ticket booking platform called "BusTicketBooker." 
// ------  The platform offers tickets for a fixed price of Rs. 300 per seat. However, there are discounts available for senior citizens. 
//         If a passenger's age is between 60 and 100 (inclusive), they will receive a 20% discount on the total booking cost.

//         Write a C program for "BusTicketBooker" that takes the number of tickets and the age of the passenger as inputs and calculates the total booking cost after applying any applicable discount using the ternary operator. 
//         The program should then display the bill with a suitable message, including the total cost and the discount amount (if applicable).

//         Your task is to implement the program logic inside the main function by using only Ternary Operator.


// Example 1: Passenger is not a senior citizen
// Sample Input: 
//               number of tickets: 3
//               age of the passenger: 45

// Sample Output:
//               Total cost before discount: Rs. 900.00
//               Discount amount: Rs. 0.00
//               Total cost after discount: Rs. 900.00


// Example 2: Passenger is a senior citizen
// Sample Input:
//               number of tickets: 2
//               age of the passenger: 65

// Sample Output:
//               Total cost before discount: Rs. 600.00
//               Discount amount: Rs. 120.00
//              Total cost after discount: Rs. 480.00

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int number_of_tickets;
    printf("enter the number of ticket=");
    scanf("%d",&number_of_tickets);
    
    int age_of_the_passenger;
    printf("enter the number of age_of_the_passenger=");
    scanf("%d",&age_of_the_passenger);

    
    float ticket=300.0;
    float total_booking_price=ticket*number_of_tickets;

    printf("Total cost before discount=%f\n",total_booking_price);

    (age_of_the_passenger>60&&age_of_the_passenger<100)?printf("Discount amount:%f\nTotal cost after discount:%f",((float)20/(float)100)*(float)total_booking_price,total_booking_price-((float)20/(float)100)*(float)total_booking_price):printf("Discount amount:%f\nTotal cost after discount:%f",0,total_booking_price);
    return 0;
}
