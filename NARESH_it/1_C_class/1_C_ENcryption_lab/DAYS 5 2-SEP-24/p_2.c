/**
 * @Author: Dastan Alam
 * @Date:   2024-09-02 06:30:13 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-02 07:16:37 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 2 : 
// =======

// Write a C program that takes an integer as input and checks if it is a positive, negative, or zero. 
// Display the appropriate message as output using the ternary operator.

int main(int argc, char const *argv[])
{
    int num;
    printf("enter the number=");
    scanf("%d",&num);
    (num>0)?printf("positive"):(num<0)?printf("negative"):printf("zero");
    return 0;
}
