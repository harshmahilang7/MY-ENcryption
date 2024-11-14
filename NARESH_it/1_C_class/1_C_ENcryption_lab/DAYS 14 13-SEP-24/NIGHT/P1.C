/**
 * @Author: Dastan Alam
 * @Date:   2024-09-13 06:10:56 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-13 09:47:11 PM   21:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 1 :
// =======
//
// Write a C program to calculate the power of a base number raised to an exponent using a while loop.
// The program should take two inputs: the base and the exponent. If either the base or the exponent is zero or negative,
// the program should display the message "Invalid input...Please enter positive values" and terminate. Otherwise,
// the program should calculate and display the result as base^exponent = result.
//
// Sample input  : Enter base: 2
// Enter exponent: -5
// Sample output : Invalid input...Please enter positive values
//
// ----------------------------
// Sample input  : Enter base: 2
// Enter exponent: 5
// Sample output : 2^5 = 32
//
// ----------------------------
//
// Sample input  : Enter base: 3
// Enter exponent: 4
// Sample output : 3^4 = 81
//
//
int main()
{
    int p, e, result = 1, po;

    printf("Enter base:");
    scanf("%d", &e);
    printf("Enter exponent:");
    scanf("%d", &p);
    po = p;
    if (e < 0 || p < 0)
    {
        printf("Invalid input...Please enter positive values");
    }
    else
    {
        while (p != 0)
        {
            result = result *e;
            p--;
        }
        printf("%d ^ %d = %d", e, po, result);
    }
    return 0;
}
