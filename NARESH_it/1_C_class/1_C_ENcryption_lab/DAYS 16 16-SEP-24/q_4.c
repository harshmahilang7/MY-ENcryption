/**
 * @Author: Dastan Alam
 * @Date:   2024-09-16 11:48:57 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-16 11:56:04 AM   11:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 4 :
// =======

// (USING FOR LOOP) Write a C program to check whether a given integer is a perfect number. 
// A number is considered perfect if it is equal to the sum of all its divisors excluding itself. 
// For example, 6 is a perfect number because the divisors of 6 are 1, 2, and 3, and their sum is 6. 
// Similarly, 28 is a perfect number because the sum of its divisors (1, 2, 4, 7, 14) is also 28.

// Sample input  : 6
// Sample output : 6 is perfect number

// Sample input  : 12
// Sample output : 12 is not perfect number

// ==========================================
int main(int argc, char const *argv[])
{
    int n=6,sum=0;
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
    }
    printf("the sum is %d\n",sum);
    if (sum==n) printf("%d is perfect number",n);
    else printf("%d not is perfect number",n);
    return 0;
}
