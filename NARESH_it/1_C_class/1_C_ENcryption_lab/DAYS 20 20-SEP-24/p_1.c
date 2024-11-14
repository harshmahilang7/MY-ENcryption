/**
 * @Author: Dastan Alam
 * @Date:   2024-09-20 06:11:42 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-20 06:14:23 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 1 :
// =======

// Write C program to given pattern.

// *  *  *  *  *
// *  *  *  *  
// *  *  *      
// *  *
// *

// ===================================
int main(int argc, char const *argv[])
{
    int count=5;
    for (int r = 0; r <= count; r++)
    {
        for (int  c = count; c >= r; c--)
        {
            printf(" *");
        }
        printf("\n");
    }
    
    return 0;
}
