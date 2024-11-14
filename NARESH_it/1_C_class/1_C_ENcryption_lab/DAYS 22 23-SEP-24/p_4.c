/**
 * @Author: Dastan Alam
 * @Date:   2024-09-25 07:01:39 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-25 07:05:17 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


// Que 4 :
// =======

// Write a program in C to store N number of values in an array and display them in reverse order.

// Sample input :
// element - 0 : 2
// element - 1 : 5
// element - 2 : 7

// Sample output :
// The values store into the array are :2 5 7
// The values store into the array in reverse are :7 5 2

// =======================================
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
    printf("\n");
    for (int i = size; i >=0; i--)
    {
        printf("element at index %d = %d\n",i,a[i]);
    }
    return 0;
}