/**
 * @Author: Dastan Alam
 * @Date:   2024-09-18 06:56:50 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-18 06:58:24 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 5 :
// =======

// Write C program to print given pattern.

// 0  0  0  0  1
// 0  0  0  1  1
// 0  0  1  1  1
// 0  1  1  1  1
// 1  1  1  1  1

// ====================================

int main(int argc, char const *argv[])
{
    int count=5;
    for (int r = 0; r < count; r++)
    {
        for (int c = 0; c < count; c++)
        {
            if (c+r<4)printf("  0");
            else printf("  1");
        }
        printf("\n");
    }
    
    return 0;
}
