/**
 * @Author: Dastan Alam
 * @Date:   2024-09-19 07:03:03 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-19 07:09:11 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 5 :
// =======

// Write a C program to print given pattern.(Fibonacci sequence)

// 0  1   1    2    3
//    5   8    13   21
//        34   55   89
//             144  233
//                  377

// ========================================

int main(int argc, char const *argv[])
{
    int count=5;
    int a=0,b=1,z=0;
    for (int r = 0; r < count; r++)
    {
        
        for (int c = 0; c < count; c++)
        {
            if (c>=r)
            {
                printf("%4d",z);
                a=b;
                b=z;
                z=a+b;
            }
            else printf("    ");
            
        }
        printf("\n");
    }
    
    return 0;
}
