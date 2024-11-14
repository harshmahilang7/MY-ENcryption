/**
 * @Author: Dastan Alam
 * @Date:   2024-09-18 06:32:24 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-18 06:39:16 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 2 :
// =======

// Write C program to print given pattern.


// #  #  #  #  #
// #           #
// #           #
// #           #
// #  #  #  #  #

// ====================================

int main(int argc, char const *argv[])
{
    int count=5;
    for (int r = 0; r < count; r++)
    {
        for (int c = 0; c < count; c++)
        {
            if (c==0||c==count-1||r==0||r==count-1)printf(" #");
            else printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}
