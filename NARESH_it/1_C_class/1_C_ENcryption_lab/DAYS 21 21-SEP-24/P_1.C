/**
 * @Author: Dastan Alam
 * @Date:   2024-09-21 06:08:28 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-23 07:05:26 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 1 : 
// ======= 
// Write a C program to given pattern. 
 
//             * 
//          *  *  * 
//       *  *  *  *  * 
//    *  *  *  *  *  *  * 
// *  *  *  *  *  *  *  *  * 
 
// =======================================
// int main(int argc, char const *argv[])
// {
//     int count=5,t=1;
//     for (int r = 1; r <= count; r++)
//     {
//         for (int k = count; k > r; k--)
//         {
//             printf(" ");
//         }
//         for (int c = 1; c <= t; c++)
//         {
//          printf("*");
//         }
//          t+=2;
//         printf("\n");
//     }
    
//     return 0;
// }

int main()
{
    int x,y,n;
    x=y=n=5;
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= n*2-1; c++)
        {
         if (c>=x&&c<=y)
        //  if (c==5)
            {
                printf("x");
            }
            else printf(" ");   
            
        }
        x--;
        y++;
        printf("\n");
    }
    
    return 0;
}