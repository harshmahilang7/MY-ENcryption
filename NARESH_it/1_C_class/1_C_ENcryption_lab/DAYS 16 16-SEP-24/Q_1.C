/**
 * @Author: Dastan Alam
 * @Date:   2024-09-16 11:27:44 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-18 09:26:30 AM   09:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 1 :
// =======
// 
// (USING WHILE LOOP) Write C program to check given number is automorphic number or not 
// 
// Automorphic number :
// An automorphic number is a number whose square ends in the
// same digits as the number itself.
// 
// For example:
// 5,6,25 are automorphic numbers.
// 5*5=25 // last digit is 5
// 6*6=36 // last digit is 6
// 25*25=625 // last digit is 25
// 
// Sample input  : 5
// Sample output : 5 is automorphic number.
// 
// Sample input  : 7
// Sample output : 7 is not automorphic number.
// 
// 
// ==========================================

int main(int argc, char const *argv[])
{
    int n=25,sq=0,m=n,res;
    res=sq=n*n;
    while (n!=0)
    {
    if (n%10!=(sq%10)) {
        printf("%d is NOT automorphic number. and sq=%d",m,res);
        return 0;
    }
    n/=10;sq/=10;
    }
    printf("%d is automorphic number. and sq =%d",m,res);
    
    
    
    return 0;
}
