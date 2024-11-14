/**
 * @Author: Dastan Alam
 * @Date:   2024-09-25 07:09:22 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-25 07:19:08 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 1 :
// =======

// Write a C program to search for a given element in an array and print its index. The program should prompt the user to input the element they want to search for.
// If the element is found in the array, the program will print the index of the element. 
// If the element is not found, the program will display a message indicating that the element is not present in the array.

// Example 1:

// Sample input :
// Array: {3, 8, 4, 1, 9, 5, 9, 8, 9}
// Element to search: 7
// Sample output :
// Element 7 not found in the array

int main(int argc, char const *argv[])
{
    int size,ele,f=0,i;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    printf("Enter 5 elements:\n");
    for (i = 0; i <= size; i++)
    {
        printf("element at index %d = ",i);
        scanf("%d",&a[i]);
    }
    printf("enter the search element\n");
    scanf("%d",&ele);
    for (i = 0; i <=size; i++)
    {
        if(a[i]==ele)
        {
            f=1;    
            printf("%d index of the element = %d\n",ele,i);
            break;
        }
        
    }
    if(f!=1) printf("%d not found\n",ele);
    return 0;
}