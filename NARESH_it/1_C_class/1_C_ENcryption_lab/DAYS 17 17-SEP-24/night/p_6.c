/**
 * @Author: Dastan Alam
 * @Date:   2024-09-17 06:34:44 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-17 07:08:40 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 6 :
// =======

// Write C program to print given pattern.

// 1  2  3  4  5
// 2  4  6  8 10
// 3  6  9 12 15
// 4  8 12 16 20
// 5 10 15 20 25

// ============================================
int main(int argc, char const *argv[])
{
    int count=5;
    for (int r = 1; r <= count; r++)
    {
        for (int c = 1; c <= count; c++)
        {
            
            printf("%3d",c*r);
        }
        printf("\n");
    }
    
    return 0;
}
