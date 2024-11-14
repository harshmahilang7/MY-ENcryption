/**
 * @Author: Dastan Alam
 * @Date:   2024-10-15 12:20:56 PM   12:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-15 12:24:05 PM   12:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// prime number;
int main(int argc, char const *argv[])
{
    for (int j = 0; j <50; j++)
    {
    int a=j,c=0,i; 
    for (int i = 2; i <= a; i++)
    {
        if (a%i==0)
        {
            c++;
        }
        
    }
    if (c==1)
    {
        printf("%d ",a);
    }
    }
    return 0;
}
