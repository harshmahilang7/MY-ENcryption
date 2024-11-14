/**
 * @Author: Dastan Alam
 * @Date:   2024-10-03 06:40:01 PM   18:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-03 11:08:47 PM   23:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// #include<math.h>
// Que 3:
// ======

// Write a C program to multiply two positive numbers as strings. Return a string representation of the product.

// Sample input: "100" and "15"

// Sample output : multiplication of 100 and 15 is :  1500

int main(int argc, char const *argv[])
{
    char a[100]="100";
    char b[100]="15";
    int i;
    int x=0,y=0;
    for (i = 0; a[i]; i++)
    {
        x=(x*10)+(a[i]-48);
    }
    for (i = 0; b[i]; i++)
    {
        y=(y*10)+(b[i]-48);
    // 15
    }
    printf("multiplication of %d and %d is %d",x,y,x*y);
    return 0;
}
