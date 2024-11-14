/**
 * @Author: Dastan Alam
 * @Date:   2024-09-20 06:57:21 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-20 07:23:16 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 8 :
// =======

// Write C program to given pattern.

//                    1
//               2    4
//          3    6    9
//     4    8    12   16
// 5   10   15   20   25

// ===================================

int main(int argc, char const *argv[])
{
    int count=5;
    for (int r = 1; r <= count; r++)
    {
        int n=1;
        for (int c = 1; c <= count; c++)
        {
            if(r+c>=count+1)
            {
                printf("%4d",((r*c)/c)*n);
                n++;
            }
            else
            {
                printf("%4c",' ');
            }
        }
        printf("\n");
    }
    
    return 0;
}
