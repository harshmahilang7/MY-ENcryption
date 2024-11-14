/**
 * @Author: Dastan Alam
 * @Date:   2024-09-15 10:50:41 PM   22:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-15 11:04:01 PM   23:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int n;
    for (int i = 0; i <= 4; i++)
    {
        n=i;
        for (int j = 0; j <= i; j++)
        {
            if (j==1)printf("%d",n);
            if(j==2) printf("%d",n+3);
            if (j==3) printf("%d",n+5);
            if (j==4) printf("%d",n+6);           
        }
        printf("\n");
    }
    
    return 0;
}
