/**
 * @Author: Dastan Alam
 * @Date:   2024-09-30 07:34:03 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-06 04:54:12 PM   16:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 1 :
// =======

// Write a program in C to rotate an array by N positions.

// Sample input:
// Enter size of array : 11
// Enter 11 elements   : 0 3 6 9 12 14 18 20 22 25 27
// Enter the position  : 4

// Sample output :
// After rotating from 4th position the array is: 12 14 18 20 22 25 27 0 3 6 9

// ============================

int main(int argc, char const *argv[])
{

    int a[]={0,3,6,9,12,14,18,20,22,25,27};
    int size=sizeof(a)/sizeof(int);
    int rot=4;
    printf("before the rotaion\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }

    for (int i = 0; i < rot; i++)
    {
        int temp=a[i];
        for (int j = 0; j < size; j++)
        {
            a[j]=a[j+1];
        }
        a[size-1]=temp;
    }

    printf("after the rotaion\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }

    
    
    
    return 0;
    
}
