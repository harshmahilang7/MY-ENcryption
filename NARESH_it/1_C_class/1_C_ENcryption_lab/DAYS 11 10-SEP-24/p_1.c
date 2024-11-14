/**
 * @Author: Dastan Alam
 * @Date:   2024-09-10 06:13:18 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-10 06:21:06 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Arithmetic Operation
// Write a C program to do a arithmetic operation on two numbers by using Switch Case. 
// Take the operators(+,-,*,/,%) as cases and take the input from the user that what kind of operation user want to do on two number.


// Sample input :

// Enter num1 :10
// Enter num2 :20
// Enter operation : *


// Sample output :

// Multiplication is :200
int main(int argc, char const *argv[])
{
    int n1,n2;
    char ch;
    printf("Enter num1 :"); scanf("%d",&n1);
    printf("Enter num2 :"); scanf("%d",&n2);
    printf("Enter operation :"); scanf(" %c",&ch);
    switch (ch)
    {
    case '+':
        printf("number 1 is %d and number 2 is %d and sum is =%d",n1,n2,n1+n2);
        break;
    case '-':
        printf("number 1 is %d and number 2 is %d and sub is =%d",n1,n2,n1-n2);
        break;
    case '*':
        printf("number 1 is %d and number 2 is %d and mul is =%d",n1,n2,n1*n2);
        break;
    case '/':
        printf("number 1 is %d and number 2 is %d and div is =%d",n1,n2,n1/n2);
        break;
    case '%':
        printf("number 1 is %d and number 2 is %d and mod is =%d",n1,n2,n1%n2);
        break;
    default:
    printf("invalid");
        break;
    }
    return 0;
}
