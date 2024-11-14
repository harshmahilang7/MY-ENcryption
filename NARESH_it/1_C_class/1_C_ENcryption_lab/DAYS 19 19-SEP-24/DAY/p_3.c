/**
 * @Author: Dastan Alam
 * @Date:   2024-09-19 11:28:34 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-19 07:39:32 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 3 :
// =======

// Write C program to print given pattern.

// 1
// 3  5
// 5  7   9
// 7  9   11  13
// 9  11  13  15  17

// ========================================
// int main(int argc, char const *argv[])
// {
//     int count=5,n=1;
//     for (int r = 0; r <= count; r++)
//     {
//       int o=r+1;
//       for (int  c = 0; c <= r; c++)
//       {
//         if(o%2==0)o++;
//         printf("%4d",o);
//         o++;
//       }
//       printf("\n");
//     }

//     return 0;
// }
int main(int argc, char const *argv[])
{
    int count=5,n=1;
    for (int r = 1; r <=count; r++)
    {
      int o=(r+n)-1;
      for (int  c = 1; c <= r; c++)
      {
         if(o%2==0)o++;
         printf("%4d",o);
         o++;
      }
      n++;
      printf("\n");
    }

    return 0;
}
