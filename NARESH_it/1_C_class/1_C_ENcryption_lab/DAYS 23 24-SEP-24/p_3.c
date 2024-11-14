/**
 * @Author: Dastan Alam
 * @Date:   2024-09-25 07:28:26 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-04 06:39:25 PM   18:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 3 :
// =======

// Write a C program that finds and prints all pairs of numbers from a given array whose sum is equal to a specified target value. 
// The program should iterate through the array, compare every pair of numbers, and print each pair that meets the condition.

// Example:
// Sample input:
// Array: {1, 5, 7, -1, 5}
// Target Sum: 6

// Sample output:
// Pair found: (1, 5)
// Pair found: (7, -1)
// Pair found: (1, 5)

// =================================
int main(int argc, char const *argv[])
{
    int size,sum=6;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    printf("Enter 5 elements:\n");
    for (int i = 0; i <= size; i++)
    {
        printf("element at index %d = ",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i <= size-1; i++)
    {
        for (int j = i+1; j <= size; j++)
        {
            if(a[i]+a[j]==6)
            {
                printf("Pair found: (%d, %d)\n",a[i],a[j]);
            }
        }
        
    }
    
    return 0;
}
