/**
 * @Author: Dastan Alam
 * @Date:   2024-09-19 12:05:21 PM   12:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-19 12:19:24 PM   12:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 5 :
// =======

// Write C program to print given pattern.

// 1
// 2  6
// 3  7 10
// 4  8 11 13
// 5  9 12 14 15

// ========================================

int main(int argc, char const *argv[])
{
    int n,count=5,m;
    for (int r = 1; r <= count; r++)
    {
        m=4;
        n=r;
        for (int c = 1; c <= r; c++)
        {
            printf("%3d",n);
            n=n+m; 
            m--; 
        }
       
        printf("\n");
    }
    
    return 0;
}
