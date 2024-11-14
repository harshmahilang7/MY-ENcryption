/**
 * @Author: Dastan Alam
 * @Date:   2024-09-23 09:23:47 AM   09:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-23 09:45:19 AM   09:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 6 : 
// ======= 
// Write a C program to given pattern. 
// 1 
// 1  2 
// 1  2  3 
// 1  2  3  4   
// 1  2  3  4  5 
// 1  2  3  4   
// 1  2  3 
// 1  2 
// 1 

int main(int argc, char const *argv[])
{
    int count=5,num=2,r,f=0;

    for (int r = 1; r <= count*2-1; r++)
    {
        int con=r;
        if (con==6) f=1;
        // printf("r=%d ",r);
        // printf("num=%d ",num);
        if (f==1) {con=r-num;num+=2;};    
        for (int c = 1; c <= con; c++)
        {
            printf("%d ",c);
        }
        printf("\n");
    }
    
    return 0;
}
