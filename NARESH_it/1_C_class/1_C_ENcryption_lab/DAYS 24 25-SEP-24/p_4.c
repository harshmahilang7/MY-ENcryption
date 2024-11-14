/**
 * @Author: Dastan Alam
 * @Date:   2024-09-27 06:05:59 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-27 06:35:06 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 4 :
// ========

// Write a C program to print all the prime numbers from an array.

// Sample input :
// Enter the number of elements in the array: 7
// Enter 7 elements: 
 
// Sample output :12 5 9 7 11 2 8
// Prime numbers in the array: 5 7 11 2

int main(){
    int a[100]={12,5,9,7,11,2,8};
    int size=7;
    for (int i = 1; i <= size; i++)
    {
        int f=0;
        for (int j = 2; j <= a[i]/2; j++)
        {
            if (a[i]%j==0){f++; break;}
        }
        if (f==0)
        {
            printf("%d ",a[i]);
        }
        
    }
    return 0;
}
