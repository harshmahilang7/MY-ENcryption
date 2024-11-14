/**
 * @Author: Dastan Alam
 * @Date:   2024-10-01 07:46:12 PM   19:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-04 07:46:43 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 4 :
// =======

// Write a C program to check given matrix is magic matrix or not.

// sum of each rows , sum of each columns , sum of principal diagonal and sum of horizontal diagonal is same then the matrix is magic matrix.
 
// Example : arr[][] = [ 2   7   6 ]
//                     [ 9   1   1 ]
//                     [ 4   3   8 ]
   
// Output : given matrix is magic matrix

// Explanation: In matrix sum of each row and each column and diagonals sum is same = 15.

int main(int argc, char const *argv[])
{
    int a[100][100]={{2,7,6},{9,5,1},{4,3,8}};
    int ds=0,rs=0,cs=0,f=0;
    int static n;
    for (int r = 0; r < 3; r++)
    {
        cs=rs=0;
        for (int c = 0; c < 3; c++)
        {
            rs=rs+a[r][c];
            cs=cs+a[c][r];
            if(r==c)ds=ds+a[r][c];
        }
        if (rs==cs)
        {
            f=1;
        }
        else{ 
               printf("RS = %d, cS = %d\n",rs,cs); 
            printf("it is not magic matrix"); return 0;}
    }
    printf("RS = %d, DS = %d\n",rs,ds);
    if (f==1&&rs==ds)
    {
        printf("it is magic matrix");
    }
    return 0;
}
