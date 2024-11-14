/**
 * @Author: Dastan Alam
 * @Date:   2024-09-16 11:56:34 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-18 10:22:35 AM   10:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
// Que 5 :
// =======

// (USING FOR LOOP) Write C program to check given number is Disarium Number or not.

// Disarium Number :
// A number is a Disarium number if the sum of the digits powered with their respective positions is equal to the number itself.
// For example:

// Sample input  : 89
// Sample output : 89 is a Disarium number.
// Explanation   : 89:> 8^1 + 9^2 = 89

// Sample input  : 175
// Sample output : 
// Explanation   : 175:> 1^1 + 7^2 + 5^3 = 175

// Sample input  : 45
// Sample output : 45 is NOT a Disarium number
// Explanation   : 45:> 4^1 + 5^2 = 29

// ==========================================

int main(int argc, char const *argv[])
{
    int n=175,sum=0,rev,c=n;
    int size=printf("%d",n);
    printf("\n");
    for ( int i = size; i > 0; i--)
    {
        rev=n%10;
        sum=sum+pow(rev,i);
        n/=10;
        
    }
    if (sum==c)
    {
        printf("%d is a Disarium number",c);
    }
    else printf("%d is NOT a Disarium number",c);
    return 0;
}
