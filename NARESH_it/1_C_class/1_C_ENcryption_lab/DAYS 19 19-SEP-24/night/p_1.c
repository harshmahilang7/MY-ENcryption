/**
 * @Author: Dastan Alam
 * @Date:   2024-09-19 06:14:19 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-19 06:19:04 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 1 :
// =======

// Write a C program to print given pattern.

// *  *  *  *  *
//    *  *  *  *
//       *  *  *
//          *  *
//             *

// ========================================
int main(int argc, char const *argv[])
{
    int count=5;
    for (int r = 0; r <= count; r++)
    {
        for (int c = 0; c <= count; c++)
        {
            if (r<c) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
