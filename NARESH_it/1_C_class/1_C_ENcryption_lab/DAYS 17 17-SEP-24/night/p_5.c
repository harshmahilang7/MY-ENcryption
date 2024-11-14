/**
 * @Author: Dastan Alam
 * @Date:   2024-09-17 06:31:12 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-17 06:34:30 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 5 :
// =======


// Write C program to print given pattern.

// 5  4  3  2  1
// 5  4  3  2  1
// 5  4  3  2  1
// 5  4  3  2  1
// 5  4  3  2  1

// ============================================
int main(int argc, char const *argv[])
{
    int count=5;
    for (int i = 0; i < count; i++)
    {
        for (int j = count ; j > 0; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
}
