/**
 * @Author: Dastan Alam
 * @Date:   2024-10-06 04:00:41 PM   16:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-06 04:44:51 PM   16:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 1 : 
// =======

// Write a C program to find the second largest element in an array.

// Sample input : 
// Enter the number of elements in the array: 10
// Enter 10 elements:  3 4 1 9 8 88 9 88 88 1

// Sample output :
// Second largest element = 9

// ============================
int main(int argc, char const *argv[])
{
    int a[]={3,4,1,9,8,88,9,88,88,1},f=0;
    int size=sizeof(a)/sizeof(int);
    int b[size],j;
    for (int i = 0; i<size; i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (a[i]!=a[i+1])
        {
            b[f]=a[i];
            f++;
        }
    }
    
    // size=sizeof(b)/sizeof(int);
    // printf("%d",size);
    // for (int q = 0; q < f; q++)
    // {
    //     printf("%d ",b[q]);
    // }
    
    printf("Second largest element =%d",b[f-2]);
    return 0;
}
