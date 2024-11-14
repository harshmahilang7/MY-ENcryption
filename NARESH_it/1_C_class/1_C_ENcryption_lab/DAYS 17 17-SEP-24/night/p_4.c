/**
 * @Author: Dastan Alam
 * @Date:   2024-09-17 06:24:27 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-17 06:30:55 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 4 :
// =======

// Write C program to print given pattern.

// 5  5  5  5  5
// 4  4  4  4  4
// 3  3  3  3  3  
// 2  2  2  2  2

// ============================================
int main(int argc, char const *argv[])
{
    int count=5;
    for (int i = 5; i > 1; i--)
    {
        for (int j = 1; j < count; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    
    return 0;
}
