// /**
//  * @Author: Dastan Alam
//  * @Date:   2024-09-19 12:19:44 PM   12:09
//  * @Last Modified by:   Dastan Alam
//  * @Last Modified time: 2024-09-19 07:00:51 PM   19:09
//  */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 6 :
// =======

// // Write C program to print given pattern.

// 0
// 0  1
// 0  1  1
// 0  1  1  2
// 0  1  1  2  3
// 0  1  1  2  3  5

// // ========================================

// // 
// int main(int argc, char const *argv[])
// {
//     int count=6,sum=0,q,c,a;
//     for (int r = 1; r <= count; r++)
//     {
//         q=0;
//         a=0;
//         for (c = 1; c <= r; c++)
//         {
//             printf("%3d",q);
//             q=c+a;
//             a=q-2;
//         }
//         // sum=sum+c+c-1;
//         printf("\n");
        
//     }
    
//     return 0;
// }
int main(){
    int count=5;
    for (int r = 0; r < count; r++)
    {
        int a=0,b=1,z=0;
        for (int c = 0; c <= r; c++)
        {
            printf("%3d",z);
            a=b;
            b=z;
            z=a+b;
        }
        printf("\n");
    }
    
}
