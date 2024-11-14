/**
 * @Author: Dastan Alam
 * @Date:   2024-09-26 06:27:12 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-26 06:42:55 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 2 : 
// =======

// Write a C program to insert an element at a given position in an array.

// Sample input : 
// Enter the number of elements in the array: 5
// Enter 5 elements: 10 20 30 40 50
// Enter the element to be inserted: 25
// Enter the position: 3

// Sample output:
// Array after insertion: 10 20 25 30 40 50


int main()
 {  int size,sum=0;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[100];
    printf("Enter %d elements:\n",size);
    for (int i = 0; i <= size; i++)
    {
        printf("element at index %d = ",i);
        scanf("%d",&a[i]);
    }
    int ele,pos;
    printf("enter the element and postion");
    scanf("%d %d",&ele,&pos);
    if(pos-1==size){
        a[size]=ele;
    }
    else{
        for (int i = size; i >= pos; i--)
        {
            a[i]=a[i-1];
        }
        a[pos-1]=ele;
        
    }
    printf("enter the element");
    for (int i = 0; i <= size; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
