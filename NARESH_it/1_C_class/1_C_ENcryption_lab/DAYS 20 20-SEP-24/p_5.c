/**
 * @Author: Dastan Alam
 * @Date:   2024-09-20 06:30:07 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-20 06:42:55 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 5 :
// =======

// Write C program to print given pattern.

                
//                 1
//             3   5
//         7   9   11
//     13  15  17  19
// 21  23  25  27  29

// ===================================
// int main(int argc, char const *argv[])
// {
    // int count=5;int a=0,b=1,z=0;
    // for (int r = 0; r <= count; r++)
    // {
        // 
        // for (int c = 0; c <= count; c++)
        // {
            // if ((r+c)>=count+1)
            // {
                // printf("%1d",z);
                // a=b;
                // b=z;
                // z=a+b;
            // }
            // else printf(" ");
        // }
        // printf("\n");
    // }
    

//     return 0;
// }

int main()
    {
    int count=5,num=1;
    for (int r = 0; r <= count; r++)
    {
        
        for (int c = 0; c <= count; c++)
        {
            if ((r+c)>=count+1)
            {
                printf("%4d",num);
                num+=2;
            }
            else printf("%4c",' ');
        }
        printf("\n");
    }
        return 0;
    }
