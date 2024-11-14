/**
 * @Author: Dastan Alam
 * @Date:   2024-09-20 06:19:38 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-20 06:29:55 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 4 :
// =======

// Write C program to print given pattern.


//             *
//          *  *
//       *     *
//    *        *
// *  *  *  *  *


// ===================================

int main(int argc, char const *argv[])
{
    int count=10;
    for (int r = 1; r <= count; r++)
    {
        for (int c = 1; c <= count; c++)
        {
            if((r+c)>=count+1)
            {
                if (c==count||(c+r)==(count+1)||r==count)
                {
                    /* code */printf("#");
                }
                else printf(" ");
                
            }
            else printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
