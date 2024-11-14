/**
 * @Author: Dastan Alam
 * @Date:   2024-09-17 07:20:20 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-17 07:25:24 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 8 :
// =======
// 
// Write C program to print given pattern.
// 
// 1   2   3   4   5
// 6   7   8   9   10
// 11  12  13  14  15
// 16  17  18  19  20
// 21  22  23  24  25
// 
// ============================================
int main(int argc, char const *argv[])
{
    int count=5;
    int num=1;
    for (int r = 0; r < count; r++)
    {
        for (int c = 0; c < count; c++)
        {
            printf("%3d",num);
            num++;
        }
        printf("\n");
    }
    
    return 0;
}
