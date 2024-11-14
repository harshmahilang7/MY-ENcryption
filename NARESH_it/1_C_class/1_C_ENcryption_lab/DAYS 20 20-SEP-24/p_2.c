/**
 * @Author: Dastan Alam
 * @Date:   2024-09-20 06:14:46 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-20 06:16:55 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 2 :
// =======

// Write C program to given pattern.

// 1   2   3   4   5
// 6   7   8   9
// 10  11  12  
// 13  14
// 15

// ===================================


int main(int argc, char const *argv[])
{
    int count=5,n=1;
    for (int r = 0; r < count; r++)
    {
        for (int c = count; c > r; c--)
        {
            printf("%3d",n);
            n++;
        }
        printf("\n");
    }
    
    return 0;
}
