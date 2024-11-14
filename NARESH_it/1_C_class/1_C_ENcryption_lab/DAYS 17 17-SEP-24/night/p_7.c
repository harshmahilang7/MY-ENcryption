/**
 * @Author: Dastan Alam
 * @Date:   2024-09-17 07:13:06 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-17 07:19:39 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


// Que 7 :
// =======
// 
// Write C program to print given pattern.
// 
// 0  1  0  1  0
// 1  0  1  0  1
// 0  1  0  1  0
// 1  0  1  0  1
// 0  1  0  1  0
// 
// ============================================
int main(int argc, char const *argv[])
{
    int count=5;
    for (int r = 0; r < count; r++)
    {
        for (int c = 0; c < count; c++)
        {
            if ((r+c)%2!=0)
            {
                printf(" 1");
            }
            else printf(" 0");
            
        }
        printf("\n");
        
    }
    
    return 0;
}
