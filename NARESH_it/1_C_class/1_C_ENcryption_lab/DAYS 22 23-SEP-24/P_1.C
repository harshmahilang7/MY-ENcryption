/**
 * @Author: Dastan Alam
 * @Date:   2024-09-23 06:28:43 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-25 06:12:03 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <conio.h>

// Que 1 :
// =======

// Write a C program that performs the following tasks:

// Read an integer value from the user to determine the size of an array.
// Dynamically allocate memory for the array based on the given size.
// Prompt the user to input elements and store them in the array.
// Use a for loop to print all the elements of the array, displaying each element along with its position.

// Sample input :
// Enter the size of the array: 5
// Enter 5 elements:
// Element at index 0: 10
// Element at index 1: 20
// Element at index 2: 30
// Element at index 3: 40
// Element at index 4: 50


// Sample output :
// The elements in the array are:
// Element at index 0: 10
// Element at index 1: 20
// Element at index 2: 30
// Element at index 3: 40
// Element at index 4: 50

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
    
    for (int i = 0; i <= size; i++)
    {
        printf("element at index %d = %d\n",i,a[i]);
    }
    
    return 0;
}
