/**
 * @Author: Dastan Alam
 * @Date:   2024-09-17 07:31:50 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-17 07:44:52 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 10 :
// =======

// Write C program to print given pattern.

// 1  1  1  2  1  3
// 2  1  2  2  2  3
// 3  1  3  2  3  4 
// 4  1  4  2  4  3

// ============================================

int main(int argc, char const *argv[])
{
    int count=5,ch;
    for (int r = 1; r < count; r++)
    {
        ch=r;
        for (int c = 1; c <= 6; c++)
        {
            
            if (c%2==0)
            {
                printf("%3d",c/2);
            }
            else
            {
                printf("%3d",ch);
            }
        }
        printf("\n");
    }
    
    return 0;
}