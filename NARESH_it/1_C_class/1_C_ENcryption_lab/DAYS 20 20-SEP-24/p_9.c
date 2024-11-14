/**
 * @Author: Dastan Alam
 * @Date:   2024-09-20 07:17:44 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-20 07:20:35 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 9 :
// =======
// 
// Write C program to given pattern.
// 
        // *
    //   *   *
    // *   *   *
//   *   *   *   *
// *   *   *   *   *
// 
// ===================================

int main(int argc, char const *argv[])
{
    int count=5;
    for (int r = 1; r <= count; r++)
    {
        for (int c = 1; c <= count; c++)
        {
            if(c+r>=count+1)
            {
                printf(" *    ");
            }
            else printf("   ");
        }
        printf("\n");
    }
    
    return 0;
}
