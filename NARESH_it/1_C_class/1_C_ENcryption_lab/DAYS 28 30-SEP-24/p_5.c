/**
 * @Author: Dastan Alam
 * @Date:   2024-09-30 06:32:08 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-30 06:34:21 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 5 :
// =======

// Write a program in C to find the sum of the horizontal diagonal of a matrix.

// Sample input :
// Input the size of the square matrix : 3
// Input elements in the 3x3 matrix:
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [0],[2] : 3
// element - [1],[0] : 2
// element - [1],[1] : 4
// element - [1],[2] : 6
// element - [2],[0] : 3
// element - [2],[1] : 6
// element - [2],[2] : 9

// Sample output :
// The matrix is :
// 1 2 3
// 2 4 6
// 3 6 9

// Addition of the horizontal Diagonal elements is : 10

int main(int argc, char const *argv[])
{
    int size,sum=0;
    printf("Input the size of the square matrix");
    scanf("%d",&size);
    size--;
    int a[100][100]={0};
    // int b[100][100]={0};
    printf("Input elements in the matrix 1:\n");
    for (int r = 0; r <= size; r++)
    {
        for (int c = 0; c <=size; c++)
        {
                    printf("element - [%d],[%d]:",r,c);scanf("%d",&a[r][c]);
        }
        
    }

    printf("The matrix is:\n");
    for (int r = 0; r <= size; r++)
    {
        for (int c = 0; c <=size; c++)
        {
                    printf("%d ",a[r][c]);
                    if (r+c==size)
                    {
                        sum=sum+a[r][c];
                    }
                    
        }
        printf("\n");
    }
    printf("Addition of the principal Diagonal elements is :%d",sum);
    return 0;
}