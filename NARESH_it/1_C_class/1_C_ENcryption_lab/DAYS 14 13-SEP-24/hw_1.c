/**
 * @Author: Dastan Alam
 * @Date:   2024-09-14 08:27:42 AM   08:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-14 10:29:36 AM   10:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    // printf("X");
    for (int i = 1; i < 5; i++)
    {
        for (int j =5; j > 1 ; j--)
        {
            if ((j-i)<=1)\
            {
            printf("%d",i);
            }
            else
            printf("%d",1);
        }
            printf("\n");
    }
    
    return 0;
}
