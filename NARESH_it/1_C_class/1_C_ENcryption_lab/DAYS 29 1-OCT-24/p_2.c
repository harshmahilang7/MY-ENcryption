/**
 * @Author: Dastan Alam
 * @Date:   2024-10-01 07:06:55 PM   19:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-01 07:19:48 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


// Que 2 : 
// =======

// Write a program in C to accept two matrices and check whether they are equal.

// Sample input :
// Input Rows and Columns of the 1st matrix :2 2
// Input Rows and Columns of the 2nd matrix :2 2
// Input elements in the first matrix :
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [1],[0] : 3
// element - [1],[1] : 4

// Input elements in the second matrix :
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [1],[0] : 3
// element - [1],[1] : 4

// Sample output :
// The first matrix is :
// 1 2
// 3 4
// The second matrix is :
// 1 2
// 3 4
// Two matrices are equal.

// ===================================
int main(int argc, char const *argv[])
{
    int r1,r2,c1,c2,a[100][100],b[100][100],i,j,f=0;
    printf("Input Rows and Columns of the 1st matrix :");
    scanf("%d %d",&r1,&c1);
    printf("Input Rows and Columns of the 2nd matrix :");
    scanf("%d %d",&r2,&c2);
    printf("Input elements in the first matrix :");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
           printf("element - [%d],[%d] ",i,j);scanf("%d",&a[i][j]);
        }
        
    }
    printf("Input elements in the second matrix :");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
           printf("element - [%d],[%d] ",i,j);scanf("%d",&b[i][j]);
        }
        
    }

     printf("The matrix 1 is :\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }

     printf("The matrix 2 is :\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
           printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            if (a[i][j]==b[i][j]) f=1;
            else {f=0; break;}
            
        }
    }
        if (f==1)
        {
            printf("Two matrices are equal.");
        }
        else printf("Two matrices are not equal.");
        
    
    return 0;
}
