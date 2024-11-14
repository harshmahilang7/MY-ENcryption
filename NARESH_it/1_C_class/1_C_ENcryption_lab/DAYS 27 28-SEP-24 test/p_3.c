/**
 * @Author: Dastan Alam
 * @Date:   2024-09-28 11:28:00 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-28 12:02:16 PM   12:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 3 :
// Write C program to print given pattern.
// * * * * * * * 
//   *       * 
//     *   * 
//       * 
//     *   * 
//   *       * 
// * * * * * * * 
// ``````````````````````````````````````````````````````````````````````````````````````````````````````````
int main(int argc, char const *argv[])
{
    int count=7;
    for (int r = 1; r <= count; r++)
    {
        for (int c = 1; c <= count; c++)
        {
            if (r==1||r==c||r==count||(r+c)==(count+1))
            {
                printf("* ");
            }
            else printf("  ");
            
        }
        printf("\n");
    }
    
    return 0;
}
