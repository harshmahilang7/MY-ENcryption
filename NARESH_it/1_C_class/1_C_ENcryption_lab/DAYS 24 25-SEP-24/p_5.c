/**
 * @Author: Dastan Alam
 * @Date:   2024-09-27 06:38:15 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-27 07:00:02 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 5 : 
// =======

// Write a C program to print all the unique elements from an array.

// Sample input :
// Enter the number of elements in the array: 6
// Enter 6 elements: 10 20 20 30 40 10

// Sample output :
// Unique elements in the array: 30 40

int main(int argc, char const *argv[])
{
    int size=5,f=0;
    int a[6]={10,20,20,30,40,10};
    for (int i = 0; i <= size; i++)
    {
        for (int j = i+1; j <= size; j++)
        {
            if (a[i]!=a[j])
            {
                printf("%d ",a[i]);
                break;
            }
           
        }

    }
    
    return 0;
}
