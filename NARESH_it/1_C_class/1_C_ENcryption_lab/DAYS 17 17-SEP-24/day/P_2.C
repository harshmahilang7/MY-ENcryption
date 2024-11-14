/**
 * @Author: Dastan Alam
 * @Date:   2024-09-17 11:31:18 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-17 12:39:29 PM   12:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
// Que 2 :
// =======

// Write a C program to find and print all Armstrong numbers within a given range of two integers, N1 and N2.
// The program should read N1 and N2 from the user and display all Armstrong numbers in this range.
// If N1 is greater than N2, the program should print an error message.

// -> An Armstrong number (also known as a Narcissistic number or Pluperfect Digital Invariant) is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
// -> example1 153 => 1^3 + 5^3 + 3^3 => 153
// -> example2 1634 => 1^4 + 6^4 + 3^4 + 4^4 => 1634

// Sample input : N1 = 100 & N2 = 100000
// Sample output :
// Armstrong numbers between 100 and 100000 are:
// 153
// 370
// 371
// 407
// 1634
// 8208
// 9474

// ========================================

//  woring too
// int main(int argc, char const *argv[])
// {
//     int rem,n,p,sum,size;
//     for (int j = 100; j <= 10000; j++)
//     {
//         n=p=j;
//         sum=0;
//         size=0;
//         // size 
//         while (n != 0)
//         {
//             size++;
//             n /= 10;
//         }
//         for (int i = size; i >= 1; i--)
//         {
//         rem=p%10;
//         sum=sum+pow(rem,size);
//         p/=10;
//         }
//         if (sum==j)
//         {
//             printf("%d ",j);
//         }

//     }
//     return 0;
// }


// when using log10 it calculate the lenghth
int main()
{
    for (int i = 0; i <= 1000; i++)
    {    
    int n=i,c=n,sum=0;
    
    // int l=log10(n);
    // printf("%d",l);//2 
    
    int l=log10(n)+1;
    while (n!=0)
    {
        sum=sum+(int)pow(n%10,l);
        // pow function give only duble formate that why type casting 
        n/=10;
    }
    if (sum==c)
    {
        printf("%d,",sum);
    }
    }
    return 0;
}