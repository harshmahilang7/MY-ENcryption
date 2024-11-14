/**
 * @Author: Dastan Alam
 * @Date:   2024-09-12 06:38:22 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-12 07:02:15 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 4 :
// =======

// Write a C program to prints all characters from capital A to small z along with their ASCII values using a while loop.

// Sample Output : 

// Character and its ASCII value:
// A: 65
// B: 66
// C: 67
// ...
// Y: 89
// Z: 90
// [ : 91
// \ : 92
// ] : 93
// ^ : 94
// _ : 95
// ` : 96
// a: 97
// b: 98
// c: 99
// ...
// x: 120
// y: 121
// z: 122


int main(int argc, char const *argv[])
{
    /* code */
    char n='A';
    printf("Character and its ASCII value:\n");
    while (n!=123)
    {
        /* code */
        printf("%c : %d\n",n,n);
        n++;
    }
    return 0;
}
