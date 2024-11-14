/**
 * @Author: Dastan Alam
 * @Date:   2024-09-19 11:20:58 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-19 11:22:52 AM   11:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 1 :
// =======
// 
// Write C program to print given pattern.
// 
// *
// *  *
// *  *  *
// *  *  *  *
// *  *  *  *  *
// 
// ========================================

int main(int argc, char const *argv[])
{
    int count=5;
    for (int r = 0; r <= count; r++)
    {
        for (int c = 0; c <= r; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
