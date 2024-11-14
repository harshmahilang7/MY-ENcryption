/**
 * @Author: Dastan Alam
 * @Date:   2024-10-08 07:29:36 PM   19:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-08 07:36:40 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 6 :
// =======

// Write a C program to calculate the sum of all elements in an integer array using function.

// -> create int main() function.
// -> create int arraySum(int arr[]) function. this function will take integer array as input in parameter and will return the total sum as result.
// -> in main function read size of array , then based on size create new array and store the values.
// -> call the arraySum function and print the sum which is return by arraySum function.


// Sample input:
//               Size of the array: 5
//               Array elements: 10 20 30 40 50


// Sample output: Sum of all elements in the array: 150

// =================================

int arraySum(int arr[],int size) {
    int sum=0;
    for (int i = 0; i <= size; i++)
    {
        sum+=arr[i];
    }
    return sum;
    
}
int main(int argc, char const *argv[])
{
    int a[]={10,20,30,40,50};
    int size=sizeof(a)/sizeof(int);
    printf("Sum of all elements in the array: %d",arraySum(a,size));
    return 0;
}
