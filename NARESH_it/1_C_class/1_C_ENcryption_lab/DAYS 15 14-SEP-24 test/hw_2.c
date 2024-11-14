/**
 * @Author: Dastan Alam
 * @Date:   2024-09-15 07:22:08 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-15 07:22:29 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int num=10;
    for (int i = 1; i <5 ; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            printf("%d",num);
            num--;
        }
        printf("\n");
    }
    
    return 0;
}
