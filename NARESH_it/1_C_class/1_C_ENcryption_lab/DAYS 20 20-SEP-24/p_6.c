/**
 * @Author: Dastan Alam
 * @Date:   2024-09-20 06:43:46 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-20 06:48:31 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 6 :
// =======

// Write C program to print given pattern.

                
//             1
//          1  1
//       1  2  1
//    1  3  3  1
// 1  1  1  1  1 

// ===================================
int main()
    {
    int count=5,num=1;
    for (int r = 0; r <= count; r++)
    {
        
        for (int c = 0; c <= count; c++)
        {
            if ((r+c)>=count+1)
            {
                if (r+c==count+1||r==count||c==count)
                {
                    printf("%4d",1);
                }
                else printf("%4d",r-1);
            }
            else printf("%4c",' ');
        }
        printf("\n");
    }
        return 0;
    }
