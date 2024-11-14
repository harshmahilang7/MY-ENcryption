/**
 * @Author: Dastan Alam
 * @Date:   2024-09-28 11:30:26 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-04 06:39:03 PM   18:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 5 :
// Write a C program that finds and prints all pairs of numbers from a given array whose sum is equal 
// to a specified target value. 
// The program should iterate through the array, compare every pair of numbers, and print each pair 
// that meets the condition.
// Example:
// Sample input:
// Array: {1, 5, 7, -1, 5}
// Target Sum: 6
// Sample output:
// Pair found: (1, 5)
// Pair found: (7, -1)
// Pair found: (1, 5

int main(int argc, char const *argv[])
{
    int a[5]={1, 5, 7, -1, 5};
    int n=4;
    // printf("%d",n);
    int ele=6;
    for (int i = 0; i <= n-1; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            if ((a[i]+a[j])==ele)
            {
                printf("Pair found: (%d,%d)\n",a[i],a[j]);
            }
            
        }
        
    }
    
    return 0;
}
