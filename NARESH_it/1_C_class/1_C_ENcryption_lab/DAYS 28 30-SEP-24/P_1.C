/**
 * @Author: Dastan Alam
 * @Date:   2024-09-30 06:07:53 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-30 06:17:24 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 1 :  
// =======

// Write a C program that creates a 2D array of size 3x3. The program should prompt the user to input the elements of the matrix, 
// with each input being labeled by its row and column index (e.g., element - [0],[0]). 
// After all the elements are entered, the program should print the matrix in a 3x3 format, with each row of the matrix displayed on a new line.

// Sample input :
// Input elements in the matrix:
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [0],[2] : 3
// element - [1],[0] : 4
// element - [1],[1] : 5
// element - [1],[2] : 6
// element - [2],[0] : 7
// element - [2],[1] : 8
// element - [2],[2] : 9

// Sample output :
// The matrix is:
// 1 2 3
// 4 5 6
// 7 8 9

// ====================================

int main(int argc, char const *argv[])
{
    int size=2;
    int a[100][100]={0};
    printf("Input elements in the matrix:\n");
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
        }
        printf("\n");
    }
    
    return 0;
}
