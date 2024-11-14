/**
 * @Author: Dastan Alam
 * @Date:   2024-09-17 06:17:28 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-17 06:18:51 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 2 :
// =======

// Write C program to print given pattern.

// 1  1  1  1  1
// 2  2  2  2  2
// 3  3  3  3  3
// 4  4  4  4  4

// ============================================

int main(int argc, char const *argv[])
{
    int count=5;
    for (int i = 1; i < count; i++)
    {
        for (int j = 1; j < count; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    
    return 0;
}
