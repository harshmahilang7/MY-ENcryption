/**
 * @Author: Dastan Alam
 * @Date:   2024-09-19 06:38:09 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-19 07:02:08 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 3 :
// =======

// Write a C program to print given pattern.

//  5  4  3  2  1
//     4  3  2  1
//        3  2  1
//           2  1
//              1

// ========================================

int main(int argc, char const *argv[])
{
    int count=5;
    for (int r = 0; r < count; r++)
    {
        int num=5;
        for (int c = 0; c < count; c++)
        {
            if(c>=r){printf("%2d",num); }
            else printf("  ");
            num--;
        }
        printf("\n");
    }
    
    return 0;
}
