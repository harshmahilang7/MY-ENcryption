/**
 * @Author: Dastan Alam
 * @Date:   2024-09-28 11:18:35 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-28 11:27:41 AM   11:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 2 :
// Write a C program to given pattern.
// 1
// 1 2
// 1 2 3
// 1 2 3 4 
// 1 2 3 4 5
// 1 2 3 4 
// 1 2 3
// 1 2
// 1


int main(int argc, char const *argv[])
{
    int count=5,f=0;
    for (int r = 1; r <= count*2-1; r++)
    {
        int con;
        if (f==0) con=r;
        else con--;
        for (int c = 1; c <= con; c++)
        {
            printf("%d ",c);
            if (c==5) f=1;         
        }
     printf("\n");   
    }
    
    return 0;
}
