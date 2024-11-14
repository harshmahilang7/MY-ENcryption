/**
 * @Author: Dastan Alam
 * @Date:   2024-09-18 06:54:48 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-18 06:56:31 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


// Que 4 :
// =======

// Write C program to print given pattern.

// #  0  0  0  #
// 0  #  0  #  0
// 0  0  #  0  0
// 0  #  0  #  0
// #  0  0  0  #

// ====================================
int main(int argc, char const *argv[])
{    
    int count=5;
    for (int r = 0; r < count; r++)
    {
        for (int c = 0; c < count; c++)
        {
            if (c==r||(r+c==4))printf(" #");
            else printf(" 0");
        }
        printf("\n");
    }
    
    return 0;
}
