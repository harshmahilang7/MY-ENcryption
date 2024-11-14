/**
 * @Author: Dastan Alam
 * @Date:   2024-09-13 06:58:43 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-13 07:09:51 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
// Que 3 :
// =======

// Write a C program to check whether a given integer is a palindrome. A number is considered a palindrome if the reverse of the number is equal to the original number. 
// The program should prompt the user to enter an integer, reverse the number, and then compare it to the original number to determine if it is a palindrome.

// Sample input  : Enter an integer: 121
// Sample output : 121 is palindrome number.

// Sample input  : Enter an integer: 1121 
// Sample output : 1121 is not palindrome number.



int main(int argc, char const *argv[])
{
    int n=1121,rev=0,sum=0,n1=n;
    while (n!=0)
    {
        rev=n%10;
        sum=sum*10+rev;
        n/=10;

    }
    if (sum==n1) printf("%d is palindrome number. ",sum);
    else printf("%d is not palindrome number.",sum);
    return 0;
}
