/**
 * @Author: Dastan Alam
 * @Date:   2024-09-17 06:14:59 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-17 06:17:12 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 1 :
// =======
// 
// Write C program to print given pattern.
// 
// *  *  *  *  * 
// *  *  *  *  * 
// *  *  *  *  * 
// *  *  *  *  * 
// *  *  *  *  * 
// 
// ============================================
// 
// 
int main(int argc, char const *argv[])
{
    int count=5;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
