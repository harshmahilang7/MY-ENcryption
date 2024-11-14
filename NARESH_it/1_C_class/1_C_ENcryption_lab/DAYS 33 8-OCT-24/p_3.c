/**
 * @Author: Dastan Alam
 * @Date:   2024-10-08 06:30:19 PM   18:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-08 07:03:33 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 3 :
// =======

// Write a C program to print all twisted prime number from array.

// Twisted Prime number means a number itself is prime number and the reverse of that number also prime number.
// Examle : 2,5,7,11,23 -----> here 2,5,7,11 are twisted prime numbers but 23 is not twisted prime number.


// -> create int main() function
// -> create int isPrime(int n) functions (Will return 0 as false otherwise 1 as true)
// -> create int reverse(int n) function (will return )

// Sample input : int arr[]={1,2,3,4,5,7,11,15,23};

// Sample output : twisted prime numbers are : 2,3,5,7,11

// ===============================

int isPrime(int n)
{
        int count=1;
        for (int i = 2; i <=n; i++)
        {
            if (n % i == 0)
                count++;
        }
        if (count==2)
        {
            return 0;
        }
        else return 1;
}
int isRevPrime(int n)
{
    int x=n;
    int rem,rev=0;
    while (x!=0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    isPrime(rev);
}
int main(int argc, char const *argv[])
{
    int a[]={1,2,3,4,5,7,11,15,23};
    int size=sizeof(a)/sizeof(int);
    
    for (int i = 0; i < size; i++)
    {
        int np=isPrime(a[i]);
        int rp=isRevPrime(a[i]);
        if (np==0&&rp==0)
        {
            printf("%d  ",a[i]);
        }
    }
    
    return 0;
}
