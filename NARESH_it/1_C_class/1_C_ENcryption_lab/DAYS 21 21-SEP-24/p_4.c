/**
 * @Author: Dastan Alam
 * @Date:   2024-09-21 07:15:12 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-23 09:02:32 AM   09:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 4 : 
// ======= 
// Write a C program to given pattern. 
// *  *  *  *  *  *  *  *  * 
//    *  *  *  *  *  *  * 
//       *  *  *  *  * 
//          *  *  * 
//             * 
 
// ======================================= 
 

int main(int argc, char const *argv[])
{
    int x,y,count;x=y=count=5;
    x=1,y=9;
    for (int r = 1; r <= count; r++)
    {
        for (int c = 1; c <= count*2-1; c++)
        {
             if(c>=x&&c<=y)
            {
                printf(" x");
            }
            else printf("  ");
            
        }
        x++;
        y--;
        printf("\n");
    }
    
    return 0;
}
