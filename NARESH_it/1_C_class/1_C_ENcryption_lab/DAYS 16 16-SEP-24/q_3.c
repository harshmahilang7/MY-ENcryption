/**
 * @Author: Dastan Alam
 * @Date:   2024-09-16 11:44:56 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-28 12:01:23 AM   00:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 3 :
// =======

// (USING FOR LOOP) Write a C program to check a given number is Prime number or not.

// Sample input  : Enter an integer: 5
// Sample output : 5 is prime number.

// Sample input  : Enter an integer: 6
// Sample output : 6 is not prime number

// ==========================================

int main(int argc, char const *argv[])
{
    int n=6,f=0;
    for (int i = 2; i <= (n/2); i++)
    {
        if (n%i==0)
        {
            f=1;
        }
        else f=0;
    }
    if (f==1) printf("%d not a prime number ",n);
    else printf("%d is prime number ",n);
    
    return 0;
}
