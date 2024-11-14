/**
 * @Author: Dastan Alam
 * @Date:   2024-09-05 06:19:24 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-05 06:21:49 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// CheckPositiveNegativeOrZero
// Write a C program to check whether a number is negative, positive or zero.

// Sample input  : int a = 10
// Sample output : possitive number

// Sample input  : int a = 0
// Sample output : zero

// Sample input  : int a = -2
// Sample output : negative number

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number=");scanf("%d",&num);
    if (num>0)
    printf("possitive number");
    else if (num<0)
    printf("negative number");
    else
    printf("zero");
    return 0;
}
