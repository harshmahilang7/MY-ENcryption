/**
 * @Author: Dastan Alam
 * @Date:   2024-09-19 11:54:17 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-19 12:04:35 PM   12:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 4 :
// =======

// Write C program to print given pattern.

// 1
// 1   2
// 3   4   5 
// 6   7   8   9
// 10  11  12  13  14

// ========================================

int main(int argc, char const *argv[])
{
    int count=5,n=1;
    for (int r = 1; r <=count; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            printf("%3d",n);
            n++;
            if (c==1&&r==1) n=1;  
        }
        printf("\n");
    }
    
    return 0;
}
