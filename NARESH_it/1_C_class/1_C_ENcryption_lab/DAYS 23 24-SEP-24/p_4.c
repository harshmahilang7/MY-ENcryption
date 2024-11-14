/**
 * @Author: Dastan Alam
 * @Date:   2024-09-26 12:29:58 PM   12:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-26 12:36:28 PM   12:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 4 :
// =======

// Write a C program to find the minimum and maximum elements of a given array.

// Sample input:
// Array: {23, 45, 12, 78, 5, 89, 34}

// Sample output :
// Minimum element: 5
// Maximum element: 89

// =================================


int main()
 {   int size,sum=0;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    // printf("Enter 5 elements:\n");
    for (int i = 0; i <= size; i++)
    {
        printf("element at index %d = ",i);
        scanf("%d",&a[i]);
    }
    int mn,mx;
    mn=a[0];
    mx=a[0];
    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j <= size; j++)
        {
            if (a[i]<a[j])
            {
                printf("%d",a[i]);
            }
            
        }
        
    }
    return 0;
 }