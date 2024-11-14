/**
 * @Author: Dastan Alam
 * @Date:   2024-09-28 11:12:22 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-28 12:04:25 PM   12:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 1 :
// Write C program to check given number is automorphic number or not ?
// Definition :
// An automorphic number is a number whose square ends in the
// same digits as the number itself.
// For example:
// 5,6,25 are automorphic numbers.
// 5*5=25 // last digit is 5
// 6*6=36 // last digit is 6
// 25*25=625 // last digit is 25
// Sample input : 5
// Sample output : 5 is automorphic number.
// Sample input : 7
// Sample output : 7 is not automorphic number.
// ``````````````````````````````````````````````````

int main(int argc, char const *argv[])
{
    int n=627;
    int sq=n*n;
    while ((n%10)!=(sq%10))
    {
        printf("%d is not Automorphic number",n);
        return 0;
    }
    printf("%d is a Automorphic number",n);
    return 0;
}
