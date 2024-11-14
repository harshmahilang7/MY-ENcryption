/**
 * @Author: Dastan Alam
 * @Date:   2024-09-19 11:23:02 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-19 11:28:17 AM   11:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 2 :
// =======

// Write C program to print given pattern.

// 1
// 1  2
// 1     3
// 1        4
// 1  2  3  4  5

// ========================================


int main(int argc, char const *argv[])
{
int count=6;
    for (int r = 1; r < count; r++)
    {
        for (int c = 1; c < count; c++)
        {
            if (c==1||r==c||r==(count-1))
            {
                printf("%d",c);
            }
            else printf(" ");
            
        }
        printf("\n");
    }
    
    return 0;
}
