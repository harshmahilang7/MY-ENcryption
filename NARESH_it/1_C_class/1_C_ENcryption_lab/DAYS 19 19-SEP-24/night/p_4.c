/**
 * @Author: Dastan Alam
 * @Date:   2024-09-19 06:48:46 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-19 06:51:53 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 4 :
// =======

// Write a C program to print given pattern.

//  A  B  C  D  E
//     A  B  C  D
//        A  B  C
//           A  B
//              A

// ========================================


int main(int argc, char const *argv[])
{
    int count=5;
    for (int r = 0; r < count; r++)
    {
        char ch='A';
        for (int c = 0; c < count; c++)
        {
            if (c>=r)
            {
               printf("%2c",ch);ch++;
            }
            else printf("  ");
            
        }
        printf("\n");
    }
    
    return 0;
}
