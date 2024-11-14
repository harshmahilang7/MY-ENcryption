/**
 * @Author: Dastan Alam
 * @Date:   2024-09-21 06:13:26 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-23 07:31:33 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 2 : 
// ======= 
// Write a C program to given pattern. 
 
//             1 
//          3  2  1 
//       5  4  3  2  1 
//    7  6  5  4  3  2  1 
// 9  8  7  6  5  4  3  2  1 
 

// 
// int main(int argc, char const *argv[])
// {
    // int count=5;
        // int num=1,n=0;
        // for (int r = 1; r <= count; r++)
        // {
            // int m=0,b=0;
            // for (int c = count; c >= r; c--)
            // {
                // printf(" ");
            // }
            // for (int k = 0; k <= count; k++)
            // {
        // 
                // if (r+k>=count+1)
                // {
                    // int m=0;
                    // printf("%d",num-m);
                    // m=m+1;
                // } 
                // else printf("");
            // }
            // for (int z = 1; z < r; z++)
            // {
                // printf("%d",n-b);
                // b++;
// 
            // }
            // n++;
            // num=num+2;
            // printf("\n");
        // }
// 
    // 
    // return 0;
// }
// 

int main()
{
    int count=5;
    int x,y;
    x=y=count;
    int num=1;
    for (int r = 1; r <= count; r++)
    {
        int n=0;
        for (int c = 1; c <= count*2-1; c++)
        {
            if(c>=x&&c<=y){printf("%d",num-n);n++;}
            else printf(" ");
            
        }
        num+=2;
        x--;
        y++;
        printf("\n");
    }
    
    
}