/**
 * @Author: Dastan Alam
 * @Date:   2024-09-15 07:26:18 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-15 08:13:04 PM   20:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    // int nr=4;
    int num=1;
    for (int i = 1; i <=4 ; i++)
    {
     for (int j = 1; j <= i; j++)
     {
        if (i%2==0)
        {
            printf("%d",num);
            if (j==2&&i==2)
            {
                continue;
            }
            num--;
        }
        else
        {
            printf("%d",num);  
            num++;          
        }
        
     }
     
     num+=i;
     printf("\n");
        
    }
    return 0;
}
