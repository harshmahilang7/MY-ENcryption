/**
 * @Author: Dastan Alam
 * @Date:   2024-09-05 06:29:47 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-05 07:16:55 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// IdentifiesTheTime
// Write a C program that takes an hour in the 24-hour format as input and identifies the time of day as "Morning," "Afternoon," "Evening," or "Night." 
// Implement this using a series of if statements. Ensure that the program also checks for invalid input, displaying an appropriate message if the entered hour is not within the valid range (0-23). 
// Present the program with a suitable title and header for clarity.

// Sample input : Enter the hour (24-hour format): 13
// Sample output : It's Afternoon.

int main(int argc, char const *argv[])
{
    int hr;
    printf("Enter the hour (24-hour format):");scanf("%d",&hr);
    if(hr<=23)
    {
        if(hr>=4&&hr<=12)
        printf("It's Morning.");
        else if (hr>12&&hr<=16)
        printf("It's Afternoon.");
        else if (hr>16&&hr<=21)
        printf("It's Evening.");
        else
        printf("It's Night.");
    }
    else
    printf("hour is not within the valid range (0-23)");
    return 0;
}
