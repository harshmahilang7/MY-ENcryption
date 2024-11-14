/**
 * @Author: Dastan Alam
 * @Date:   2024-09-10 06:24:56 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-10 06:34:15 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Number of Month
// 1. Problem Statement:
// Write a C program that takes a month number (1-12) as input from the user and prints the number of days in that month using a switch statement. 
// If the user enters a number outside the range of 1-12, the program should display an error message.

// 2. Explanation:
// You need to use a switch statement to handle different cases for each month.
// For months with 31 days (January, March, May, July, August, October, December), display "31 days".
// For months with 30 days (April, June, September, November), display "30 days".
// For February (month 2), print "28 or 29 days (depending on leap year)" as February can have 28 or 29 days.
// For any invalid month number (not between 1 and 12), print "Invalid month number!".

// 3. Additional Considerations:
// The program should handle user input and validate it using a switch-case structure.
// No need for a leap year calculation in this basic program, but mention that leap years affect February’s day count.


// Sample input_1  : 3
// Sample output_1 : 31 days

// Sample input_2  : 2
// Sample output_2 : 28 or 29 days (depending on leap year)

// Sample input_3  : 11
// Sample output_3 : 30 days
int main(int argc, char const *argv[])
{
    int m;
    printf("Enter month enters a number outside the range of 1-12:"); scanf("%d",&m);
    switch (m)
    {
    case 1 : case 3 : case 5: case 7: case 8: case 10 :case 12 :
        printf(" 31 days");
        break;
    case 2:
        printf("28 and 29 days (depending on leap year)");
        break;
    case 4 : case 6: case 9: case 11:
        printf("30 days");
        break;
    default:
        printf("invalid month");
        break;
    }
    return 0;
}
