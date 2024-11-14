/**
 * @Author: Dastan Alam
 * @Date:   2024-10-01 07:21:20 PM   19:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-01 07:46:46 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


// Que 3 :
// =======

// Write a C program to find the maximum element of each row.

// Examples: 

// Input : [1, 2, 3, 21]
//         [12, 1, 65, 9]
//         [1, 56, 34, 2]

// Output :
// Maximum element of row 1: 21
// Maximum element of row 2: 65
// Maximum element of row 3: 56

// ===================================
int main(int argc, char const *argv[])
{
    int a[100][100]={{1, 2, 3, 21},{12, 1, 65, 9},{1, 56, 34, 2}},r1=3,c1=4,max=0;
    // printf("Input Rows and Columns of the 1st matrix :");
    // scanf("%d %d",&r1,&c1);
    int size=0;
    for (int r = 0; r < r1; size++,r++)
    {
        int max=0;
        for (int c = 0; c <c1; c++)
        {
            if (r==size)
            {
                if (max<a[r][c])
                {
                    max=a[r][c];
                }
            }
        }
        printf("Maximum element of row %d:%d ",size+1,max);
        printf("\n");
    }
    
    return 0;
}
