/**
 * @Author: Dastan Alam
 * @Date:   2024-09-21 07:04:21 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-23 07:34:10 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Write a C program to given pattern. 
//          1 
//       2  1  2 
//    3  2  1  2  3 
// 4  3  2  1  2  3  4 
 
// =======================================
// int main(int argc, char const *argv[])
// {
    // int count=5,t=count,a=count,b=count,y;
    // // int count=5,t=1,a=count,b=,k;
    // for (int r = 1; r <= count; r++)
    // {
        // int k=r;y=2;
        // for (int c = 1; c <=count*2-1 ; c++)
        // {
            // 
            // if(c>=a&&c<=b)
            // {
                // if(c<=a)
                // {
                // printf("%3d",k--);
                // }
                // else printf("%3d",y++); 
                // 
            // }
            // 
            // else printf("%3c",' ');
        // }
    //    a--;b++;
    //    printf("\n");
    // }
    // 
    // return 0;
// }



// Online C compiler to run C program online
#include <stdio.h>

int main() {
int n = 5 ;
int x = n, y = n, a = 1, b=1;
for(int i=1; i<=n;i++)
{
 a=i,b=1;
    for(int j=1; j<=n*2-1;j++)
    {
        if(j>=x&&j<=y)
        {
            if(j<n)
            {
                printf("%3d",a--);
            }
            else printf("%3d",b++);
        }
        else{
            printf("%3c",' ');
        }
    }
    x--;
    y++;
    printf("\n");
}
    return 0;
}