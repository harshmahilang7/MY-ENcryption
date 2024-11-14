/**
 * @Author: Dastan Alam
 * @Date:   2024-09-30 06:18:45 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-30 06:22:39 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 2 :  
// =======

// Write a C program that performs the addition of two square matrices of the same size. 
// The program should first ask for the size of the matrix , then prompt the user to input elements for both matrices. 
// After the matrices are entered, the program should display both matrices and their sum.

// Sample input :

// Input the size of the square matrix : 2
// Input elements in the first matrix:
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [1],[0] : 3
// element - [1],[1] : 4

// Input elements in the second matrix:
// element - [0],[0] : 5
// element - [0],[1] : 6
// element - [1],[0] : 7
// element - [1],[1] : 8


// Sample output :

// The First matrix is:
// 1 2
// 3 4

// The Second matrix is:
// 5 6
// 7 8

// The Addition of two matrices is:
// 6 8
// 10 12

// ====================================

int main(int argc, char const *argv[])
{
    int size;
    printf("Input the size of the square matrix");
    scanf("%d",&size);
    size--;
    int a[100][100]={0};
    int b[100][100]={0};
    printf("Input elements in the matrix 1:\n");
    for (int r = 0; r <= size; r++)
    {
        for (int c = 0; c <=size; c++)
        {
                    printf("element - [%d],[%d]:",r,c);scanf("%d",&a[r][c]);
        }
        
    }
    printf("Input elements in the matrix 2:\n");
    for (int r = 0; r <= size; r++)
    {
        for (int c = 0; c <=size; c++)
        {
                    printf("element - [%d],[%d]:",r,c);scanf("%d",&b[r][c]);
        }
        
    }

    printf("The matrix 1 is:\n");
    for (int r = 0; r <= size; r++)
    {
        for (int c = 0; c <=size; c++)
        {
                    printf("%d ",a[r][c]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The matrix 2 is:\n");
    for (int r = 0; r <= size; r++)
    {
        for (int c = 0; c <=size; c++)
        {
                    printf("%d ",b[r][c]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The addition matrix is:\n");
    for (int r = 0; r <= size; r++)
    {
        for (int c = 0; c <=size; c++)
        {
                    printf("%d ",a[r][c]+b[r][c]);
        }
        printf("\n");
    }
    
    return 0;
}
