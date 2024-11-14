/**
 * @Author: Dastan Alam
 * @Date:   2024-09-18 06:40:07 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-18 10:52:35 PM   22:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 3 :
// =======

// Write C program to given pattern.


// #     #  #  #
// #     #
// #  #  #  #  # 
//       #     #
// #  #  #     #

// ====================================


int main(int argc, char const *argv[])
{
    // int count=5;
    // for (int r = 0; r < count; r++)
    // {
    //     for (int c = 0; c < count; c++)
    //     {
    //         if (c==2||r==2||(c==0&&r==0)||(c==0&&r==1)||(c==4&&r==3)||(c==4&&r==4)||(c==0&&r==4)||(c==1&&r==4)||(c==3&&r==0)||(c==4&&r==0))printf(" #");
    //         else printf("  ");
    //     }
    //     printf("\n");
    // }
    
    int count=5;
    int k=count/2+1;
    for (int r = 1; r <= count; r++)
    {
        for (int c = 1; c <= count; c++)
        {
            if (c==k||r==k||(r<=k&&c==1)||(c>=k&&r==1)||(r>=k&&c==count)||(c<=k&&r==count))
            {
                printf("  #");
            }
            else printf("   ");
            
        }
        printf("\n");
    }
    
    return 0;
}
