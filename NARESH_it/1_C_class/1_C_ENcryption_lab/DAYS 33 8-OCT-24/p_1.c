/**
 * @Author: Dastan Alam
 * @Date:   2024-10-08 06:05:15 PM   18:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-08 06:07:00 PM   18:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 1 :
// ========

// Write a program in C to find the square of any number using the function.

// -> create int main() function.
// -> create int square(int n) function.
// -> in main function read one number and call square(int n) function. here square(int n) function will perform the operation and will return the square of given number as result to the main function.
// -> in main function catch the square of number which is calculate and return by square(int n) fuction and print it.

// Sample input : Input any number for square : 20

// Sample output : The square of 20 is : 400

// =================================
int square(int n)
{
    return n * n;
}
int main(int argc, char const *argv[])
{
    printf("Input any number for square :");
    int n;
    scanf("%d", &n);
    printf("The square of %d is : %d",n,square(n));
    return 0;
}
