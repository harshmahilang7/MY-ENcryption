/**
 * @Author: Dastan Alam
 * @Date:   2024-09-20 06:17:29 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-20 06:18:52 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 3 :
// =======

// Write C program to given pattern.

// E  D  C  B  A
// E  D  C  B
// E  D  C  
// E  D
// E


// ===================================


int main(int argc, char const *argv[])
{
    int count=5;
    for (int r = 0; r < count; r++)
    {
        char ch='E';
        for (int c = count; c > r; c--)
        {
            printf("%3c",ch);
            ch--;
        }
        printf("\n");
    }
    
    return 0;
}
