/**
 * @Author: Dastan Alam
 * @Date:   2024-09-10 06:35:02 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-10 06:40:19 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// user to control the state of a light and an air conditioner (AC).
// [Solve Using Switch-case & Goto Statment]

// You are required to write a C program that allows the user to control the state of a light and an air conditioner (AC). 
// The program should present the following menu options to the user:

// Turn ON the Light.
// Turn OFF the Light.
// Turn ON the AC.
// Turn OFF the AC.
// Based on the user's choice, the program should display the corresponding action message:

// If the user selects option 1, display "Light is now ON."
// If the user selects option 2, display "Light is now OFF."
// If the user selects option 3, display "AC is now ON."
// If the user selects option 4, display "AC is now OFF."
// The program should also handle invalid input:

// If the user enters a number outside the range of 1 to 4, display an error message indicating "Invalid choice! Please enter 1, 2, 3 or 4."
// The program should allow the user to retry entering a valid option by using the (goto statement).

// Example_1:
// -----------

// Select an option:
// 1. Turn ON the Light
// 2. Turn OFF the Light
// 3. Turn ON the AC
// 4. Turn OFF the AC
// Enter your choice: 1
// Light is now ON.

// Example_2:
// -----------

// Select an option:
// 1. Turn ON the Light
// 2. Turn OFF the Light
// 3. Turn ON the AC
// 4. Turn OFF the AC
// Enter your choice: 4
// AC is now OFF.


// Example_3:
// -----------

// Select an option:
// 1. Turn ON the Light
// 2. Turn OFF the Light
// 3. Turn ON the AC
// 4. Turn OFF the AC
// Enter your choice: 5
// -----------------------------------------
// Invalid choice! Please enter 1, 2, 3, or 4.

int main(int argc, char const *argv[])
{
    int inp;
    printf("Select an option:\n"); 
    printf("1. Turn ON the Light\n");    
    printf("2. Turn OFF the Light\n");
    printf("3. Turn ON the AC\n"); 
    printf("4. Turn OFF the AC\n"); 
    scanf("%d",&inp);
    switch (inp)
    {
    case 1 :
        printf("Light is now ON.");
        break;
    
    case 2 :
        printf("Light is now OFF.");
        break;
    
    case 3 :
        printf("AC is now ON.");
        break;
    
    case 4 :
        printf("AC is now OFF."); 
        break;
    
    default:
        printf("Invalid choice! Please enter 1, 2, 3, or 4.");       
        break;
    }
     return 0;
}
