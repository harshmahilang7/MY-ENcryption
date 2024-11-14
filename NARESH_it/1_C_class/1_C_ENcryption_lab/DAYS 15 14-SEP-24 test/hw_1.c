/**
 * @Author: Dastan Alam
 * @Date:   2024-09-15 07:18:57 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-17 06:08:05 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int num=1;
    for (int i = 1; i <5 ; i++)
    //            1  to 4
    {
        for (int j = 1; j <=i ; j++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    
    return 0;
}
