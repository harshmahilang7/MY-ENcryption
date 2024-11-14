/**
 * @Author: Dastan Alam
 * @Date:   2024-09-16 11:40:25 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-16 11:44:36 AM   11:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 2 :
// =======

// (USING WHILE LOOP) Write a C program to calculate the product of the digits of a given integer. 
// If the number is negative, convert it into positive number before calculating the product.

// Sample input  : Enter a number: 1234
// Sample output : The product of the digits is: 24

// Sample input  : Enter a number: -567
// Sample output : The product of the digits is: 210

// ==========================================

int main(int argc, char const *argv[])
{
    int n=-567,sum=1,rev;
    if(n<0) n=-n;
    while (n!=0)
    {
        rev=n%10;
        sum=sum*rev;
        n/=10;
    }
    printf("the sum of number is:%d",sum);
    return 0;
}
