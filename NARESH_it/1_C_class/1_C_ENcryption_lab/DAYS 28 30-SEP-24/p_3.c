/**
 * @Author: Dastan Alam
 * @Date:   2024-09-30 06:23:26 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-30 06:27:56 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 3 :  
// =======

// Write a C program that computes the transpose of a given matrix. 
// The program should first prompt the user to input the dimensions (rows and columns) of the matrix, followed by the elements of the matrix. 
// After obtaining the matrix, the program should display both the original matrix and its transpose.

// Sample input:
// Input the rows and columns of the matrix: 2 2
// Input elements in the matrix:
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [1],[0] : 3
// element - [1],[1] : 4


// Sample output :
// The matrix is:
// 1 2
// 3 4

// The transpose of the matrix is:
// 1 3
// 2 4

// ====================================

int main(int argc, char const *argv[])
{
    int rows,columns;
    printf("Input the size of the square matrix");
    scanf("%d",&rows);
    scanf("%d",&columns);
    rows--;
    columns--;
    int a[100][100]={0};
    int b[100][100]={0};
    printf("Input elements in the matrix:\n");
    for (int r = 0; r <= rows; r++)
    {
        for (int c = 0; c <=columns; c++)
        {
                    printf("element - [%d],[%d]:",r,c);scanf("%d",&a[r][c]);
        }
        
    }
    printf("The matrix is:\n");
    for (int r = 0; r <= rows; r++)
    {
        for (int c = 0; c <=columns; c++)
        {
                    printf("%d ",a[r][c]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The transpose of the matrix is:\n");
    for (int r = 0; r <= rows; r++)
    {
        for (int c = 0; c <=columns; c++)
        {
                    printf("%d ",a[c][r]);
        }
        printf("\n");
    }
    return 0;
}
