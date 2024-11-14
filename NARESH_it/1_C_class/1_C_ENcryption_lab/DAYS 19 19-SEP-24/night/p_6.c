/**
 * @Author: Dastan Alam
 * @Date:   2024-09-19 07:10:11 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-19 07:12:30 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 6 :
// =======
// 
// Write a C program to print given pattern.
// 
// 1  2  3  4  5
// 2  2  3  4  5
// 3  3  3  4  5
// 4  4  4  4  5
// 5  5  5  5  5
// 
// ========================================
int main(int argc, char const *argv[])
{
    int count=5;
    for (int r = 0; r <= count; r++)
    {
        for (int c = 0; c <= count; c++)
        {
            if (c>r)
            {
                printf("%d",c);
            }
            else printf("%d",r);
            
        }
        printf("\n");
    }
              
    return 0;
}
