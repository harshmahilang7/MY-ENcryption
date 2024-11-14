/**
 * @Author: Dastan Alam
 * @Date:   2024-09-13 06:34:21 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-13 07:08:57 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
//
// Que 2 :
// ======

// Write a C program to calculate the factorial of a given positive integer.
// The program should prompt the user to enter a number, compute its factorial, and display the result.
// -> If the user enters a negative number, the program should display an error message: "Invalid input...Please enter a positive integer."
// -> If the input is 0, the program should print Factorial of 0 = 1 because by definition, 0!=1
// -> FORMULA => n!=1×2×3×...×n.

// Sample input  : Enter a positive integer: -5
// Sample output : Factorial of 5 = Invalid input...Please enter a positive integer.

// Sample input  : Enter a positive integer: 5
// Sample output : Factorial of 5 = 120

int main(int argc, char const *argv[])
{
    int num, fact = 1,c, i = 1;
    printf(" Enter a positive integer");
    scanf("%d", &num);
    c=num;
    if (num < 0)
    {
        printf("Invalid input...Please enter a positive integer.");
    }
    else
    {
        while (i <= num)
        //     1  <=5
        {
            fact = fact * num;
            num--;
        }
        printf("Factorial of %d :%d",c,fact);
        return 0;
    }
}