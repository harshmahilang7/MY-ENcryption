/**
 * @Author: Dastan Alam
 * @Date:   2024-09-25 06:16:46 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-25 06:57:09 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 2 :
// =======
// 
// Write a C program that performs the following tasks:
// 
// Dynamically allocate memory for an array to store 10 integer values.
// Prompt the user to input 10 integer values to store in the array.
// separately Print all the elements that are located at even indices and odd indices of the array.
// 
// For Example : 
// 
// Sample input :
// Enter 10 integer elements:
// Element at index 0: 12
// Element at index 1: 23
// Element at index 2: 34
// Element at index 3: 45
// Element at index 4: 56
// Element at index 5: 67
// Element at index 6: 78
// Element at index 7: 89
// Element at index 8: 90
// Element at index 9: 11
// 
// Sample output : 
// Elements at even indices are:
// Element at index 0: 12
// Element at index 2: 34
// Element at index 4: 56
// Element at index 6: 78
// Element at index 8: 90
// ------------------------------
// Elements at odd indices are:
// Element at index 1: 23
// Element at index 3: 45
// Element at index 5: 67
// Element at index 7: 89
// Element at index 9: 11
// 
// =======================================

int main(int argc, char const *argv[])
{
    int size;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    printf("Enter 5 elements:\n");
    for (int i = 0; i <= size; i++)
    {
        printf("element at index %d = ",i);
        scanf("%d",&a[i]);
    }
    printf("Elements at even indices are:\n");
    for (int i = 0; i <= size; i++)
    {
        if (a[i]%2==0)
        {
            printf("Element at index %d: %d\n",i,a[i]);
        }
        
    }
    printf("Elements at odd indices are:\n");
    for (int i = 0; i <= size; i++)
    {
        if (a[i]%2!=0)
        {
            printf("Element at index %d: %d\n",i,a[i]);
        }
        
    }
    
    return 0;
}
