/**
 * @Author: Dastan Alam
 * @Date:   2024-09-17 07:25:53 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-17 07:31:34 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 9 :
// =======
// 
// Write C program to print given pattern.
// 
// 1  2  3  4  5
// 2  3  4  5  6
// 3  4  5  6  7
// 4  5  6  7  8
// 5  6  7  8  9
// 
// ============================================

int main(int argc, char const *argv[])
{
    int count=5,ch;
    for (int r = 1; r <= count; r++)
    {
        ch=r;
        for (int c = 1; c <= count; c++)
        {
            printf("%3d",ch);
            ch++;
        }
        printf("\n");
    }
    
    return 0;
}
