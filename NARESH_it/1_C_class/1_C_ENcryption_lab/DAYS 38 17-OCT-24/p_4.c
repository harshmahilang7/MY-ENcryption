/**
 * @Author: Dastan Alam
 * @Date:   2024-10-17 06:19:26 PM   18:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-17 10:47:33 PM   22:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


// Que 4 :
// =======

// -> Write a C program that takes an array of integers as input and prints pairs of numbers 
//    such that the first number in the pair starts from the beginning of the array and the second number starts from the end of the array. 

// -> Example:

//    Input : arr[]={1,2,3,4,5,6};
//    Output :   
//             (1,6)
//             (2,6)
//             (3,4)
int main(int argc, char const *argv[])
{
    /* code */
    int arr[]={1,2,3,4,5,6,};
    int size=sizeof(arr)/sizeof(int);
    int last=size-1;
    int first=0;
    for (int i = 0; i < size/2; i++)
    {
        printf("(%d %d)\n",arr[first],arr[last]);
        first++;
        last--;
    }
    
    return 0;
}
