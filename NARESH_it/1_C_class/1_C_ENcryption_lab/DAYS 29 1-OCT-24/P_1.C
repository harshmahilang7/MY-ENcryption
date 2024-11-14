/**
 * @Author: Dastan Alam
 * @Date:   2024-10-01 06:24:11 PM   18:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-04 07:10:09 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 1 :
// =======

// Write a program in C to find the sum of rows and columns of a matrix.

// Sample input :
// Input the size of the square matrix : 2
// Input elements in the 2*2 matrix :
// element - [0],[0] : 5
// element - [0],[1] : 6
// element - [1],[0] : 7
// element - [1],[1] : 8

// Sample Output :
// The matrix is :
// 5 6
// 7 8

// The sum or rows and columns of the matrix is :
// 5   6  11
// 7   8  15
// 12 14

// ===================================

int main(int argc, char const *argv[])
{
    int size,a[100][100],rs=0,cs=0,j=0,i=0;
    printf("Input the size of the square matrix");
    scanf("%d",&size);
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
           printf("element - [%d],[%d] ",i,j);scanf("%d",&a[i][j]);
        }
        
    }
    printf("\n");
    printf("The matrix is :\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < size; i++)
    {
        rs=cs=0;
        for (j = 0; j < size; j++)
        {
            rs=rs+a[i][j];
            cs=cs+a[j][i];
        }
        a[i][size]=rs;
        a[size][i]=cs;
        
        printf("\n");
    }
    
    printf("The matrix is :\n");
    for (i = 0; i <= size; i++)
    {
        for (j = 0; j <=size; j++)
        {
            if (i==size&&j==size)
            {
                break;
            }
            
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}



// scanf("%d",&a);
// int *p;
// p=&a;
// printf("%d",*p)
