/**
 * @Author: Dastan Alam
 * @Date:   2024-09-28 11:41:30 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-28 11:56:47 AM   11:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 4 :
// Write a C program to insert an element at a given position in an array.
// Sample input : 
// Enter the number of elements in the array: 5
// Enter 5 elements: 10 20 30 40 50
// Enter the element to be inserted: 25
// Enter the position: 3
// Sample output:
// Array after insertion: 10 20 25 30 40 50
// ````````````````````````````````````````````````````````````````````````````````````````````
int main(int argc, char const *argv[])
{
    int a[100];
    int n,size;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    size=n;
    printf("enter %d element=",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int in;
    printf("Enter the element to be inserted:");
    scanf("%d",&in);
    int pos;
    printf("Enter the position:");
    scanf("%d",&pos);
    for (int i = n-1; i >= pos-1; i--)
    {
        a[n]=a[n-1];
        n--;
    }
    a[pos-1]=in;
    printf("Array after insertion:");
    for (int i = 0; i <= size; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
