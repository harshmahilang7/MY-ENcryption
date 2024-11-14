/**
 * @Author: Dastan Alam
 * @Date:   2024-09-20 06:48:51 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-20 06:56:12 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


// Que 7 :
// =======

// Write C program to print given pattern.

                  
//             1
//          *  1
//       3  *  1   
//    *  3  *  1
// 5  *  3  *  1 


// ===================================
int main()
    {
    int count=5;
    for (int r = 0; r <= count; r++)
    {
        int num=6;
        for (int c = 0; c <= count; c++)
        {
            if ((r+c)>=count+1)
            {
                if (c%2==0) printf("%4c",'*');
                else printf("%4d",num);
            }
            else printf("%4c",' ');
            num--;
        }
        
        
        printf("\n");
    }
        return 0;
    }