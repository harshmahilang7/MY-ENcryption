/**
 * @Author: Dastan Alam
 * @Date:   2024-09-13 07:10:57 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-13 07:32:21 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 4 :
// =======

// Write a C program to read one integer number from user and check it is Prime number or not

// Sample input  : Enter an integer: 5
// Sample output : 5 is prime number.

// Sample input  : Enter an integer: 6
// Sample output : 6 is not prime number.

// ====================================================
int main(int argc, char const *argv[])
{
    int n,s=2,f=0;
    printf("enter the number:");
    scanf("%d",&n);
    while (s<=n/2)
    {
        if (n%s==0) f=1;
        else f=0;
        s++;
    }
    if (f==0) printf("%d is a prime number",n);
    else printf("%d is a not prime number",n);
    return 0;
}
