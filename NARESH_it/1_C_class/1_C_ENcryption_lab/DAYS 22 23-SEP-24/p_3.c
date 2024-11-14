/**
 * @Author: Dastan Alam
 * @Date:   2024-09-25 06:16:46 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-25 07:04:32 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 3 :
// =======

// Write a C program that reads an integer N from the user to define the size of a dynamically allocated array. 
// The program should allow the user to input N integer values into the array, then calculate and print the sum of all even numbers in the array.

// For Example :

// Sample input : 
// Enter size of array : 6
// Enter 6 elements into the array :
// Element at index 0: 8
// Element at index 1: 2
// Element at index 2: 3
// Element at index 3: 4
// Element at index 4: 5
// Element at index 5: 6


// Sample output : 
// sum of all even numbers in the array is = 20
int main(int argc, char const *argv[])
{
    int size,sum=0;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    printf("Enter 5 elements:\n");
    for (int i = 0; i <= size; i++)
    {
        printf("element at index %d = ",i);
        scanf("%d",&a[i]);
    }
    // printf("Elements at even indices are:\n");
    for (int i = 0; i <= size; i++)
    {
        if (a[i]%2==0)
        {
            sum=sum+a[i];
        }
        
    }
    printf("sum of all even numbers in the array is = %d",sum);
    return 0;
}

