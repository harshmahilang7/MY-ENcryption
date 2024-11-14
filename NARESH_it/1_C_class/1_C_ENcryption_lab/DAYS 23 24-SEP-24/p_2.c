/**
 * @Author: Dastan Alam
 * @Date:   2024-09-25 07:19:28 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-25 07:27:33 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 2 :
// =======

// Write a C program to sort a given array in ascending order. 
// The program should use the bubble sort algorithm to compare adjacent elements and swap them if they are in the wrong order.
// After sorting, the program should print the original array and the sorted array.

// Sample input : 
// Array: {64, 25, 12, 22, 11}

// Sample output :
// Original array: 64 25 12 22 11 
// Sorted array in ascending order: 11 12 22 25 64

int main()
 {   int size,sum=0;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    printf("Enter 5 elements:\n");
    for (int i = 0; i <= size; i++)
    {
        printf("element at index %d = ",i);
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j <= size-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }
    for (int i = 0; i <= size; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}