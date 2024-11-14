/**
 * @Author: Dastan Alam
 * @Date:   2024-09-19 06:22:27 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-19 06:34:03 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

// Que 2 :
// =======

// Write a C program to print given pattern.


// 1  2  3  4  5
//    4  6  8 10
//       9 12 15
//         16 20
//            25

// ========================================
int main(int argc, char const *argv[])
{
    int count=5,n=1;
    for (int r = 1; r <= count; r++)
    {
        for (int c = 1; c <=count; c++)
        {
            
            if (c>=r) {printf("%3d",r*c);}
            else printf("   ");
        }
        printf("\n");
    }
    
    return 0;
}
