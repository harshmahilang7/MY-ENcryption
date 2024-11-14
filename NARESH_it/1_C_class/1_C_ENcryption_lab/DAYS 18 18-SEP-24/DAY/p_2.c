/**
 * @Author: Dastan Alam
 * @Date:   2024-09-18 11:48:11 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-18 11:58:13 AM   11:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 2 :
// ======= 

// Write C program to print given pattern.

// 1   6   11   16  
// 2   7   12   17
// 3   8   13   18
// 4   9   14   19
// 5   10  15   20

// ======================================

int main(int argc, char const *argv[])
{
    int count=5;
    for (int r = 1; r <=count; r++)
    {
        int n=0;
        for (int c = 1; c <count; c++)
        {
            printf("%3d",r+n);
            n=n+5;
        }
        printf("\n");
    }
    return 0;
}
