/**
 * @Author: Dastan Alam
 * @Date:   2024-10-08 06:07:46 PM   18:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-08 07:03:14 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 2 :
// =======

// Write a program in C to check whether a number is a prime number or not by using the function.

// -> create int main() function.
// -> create int isPrime(int n) function.
// -> in main function read one number and call isPrime(int n) function. here isPrime(int n) function will perform the operation and will return 1 or 0 to the main function.
// -> in main function catch the int result and according that print the proper Output.

// Example 1:
// Sample input : Input a positive number : 5
// Sample output : The number 5 is a prime number.

// Example 2:
// Sample input : Input a positive number : 6
// Sample output : The number 6 is not a prime number.

// =================================

int isPrime(int n)
{
    // if (n == 2)
    //     return 0;
    // else
    // {
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
        
    // }
}
int main(int argc, char const *argv[])
{
    printf("Input a positive number : ");
    int n;
    scanf("%d", &n);
    printf("%d", isPrime(n));
    if (isPrime(n) == 0)
    {
        printf("The number is a prime number.");
    }
    else
        printf("The number is not a prime number.");
    return 0;
}
