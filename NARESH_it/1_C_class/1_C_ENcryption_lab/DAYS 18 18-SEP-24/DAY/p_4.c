/**
 * @Author: Dastan Alam
 * @Date:   2024-09-18 12:00:52 PM   12:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-18 12:05:35 PM   12:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 4 :
// =======
// 
// Write C program to print given pattern.
// 
// A  B  C  D  
// B  C  D  E
// C  D  E  F
// D  E  F  G
// 
// ======================================
// 
int main(int argc, char const *argv[])
{
    int count=5;
    for (int r = 0; r < count; r++)
    {
        char ch='A';
        ch=ch+r;
        for (int c = 0; c < count; c++)
        {
            printf("%3c",ch+c);
        }
        printf("\n");
    }
    
    return 0;
}
