/**
 * @Author: Dastan Alam
 * @Date:   2024-09-18 12:05:56 PM   12:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-18 12:23:35 PM   12:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 5 : 
// =======

// Write C program to print given pattern.

// A  E  I  M
// B  F  J  N
// C  G  K  O
// D  H  L  P

// ======================================

int main(int argc, char const *argv[])
{
    int count=4,n=0;
    
    for (int r = 0; r <=count; r++)
    {
        char ch='A';
        ch=ch+r;
        for (int c = 0; c < count; c++)
        {
            printf("%3c",ch+n);
            n+=4;
        }
        n=0;
        printf("\n");
    }
    
    return 0;
}
