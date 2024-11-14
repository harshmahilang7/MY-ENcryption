/**
 * @Author: Dastan Alam
 * @Date:   2024-09-18 06:13:27 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-18 06:32:15 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 1 :
// =======

// Write C program to print given pattern.

//       # 
//       #
// #  #  #  #  # 
//       #
//       #

// ====================================

int main(int argc, char const *argv[])
{
    int count=5;
    for (int r = 0; r < count; r++)
    {
        for (int c = 0; c < count; c++)
        {
            if (c==2||r==2)printf("#");
            else printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
