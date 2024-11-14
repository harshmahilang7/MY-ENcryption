/**
 * @Author: Dastan Alam
 * @Date:   2024-10-16 12:02:19 PM   12:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-16 06:12:59 PM   18:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 2 :
// ========

// Write a C program that rearranges the elements of a given array by moving all the zeros to the front.
// The program should take an array as input and swap the positions of non-zero elements with zeros,
// such that all the zeros appear at the beginning of the array, while maintaining the relative order of non-zero elements.

// -> Example :

//    Input : [1, 0, 2, 0, 4, 5, 0, 3, 0]

//    Output : [0, 0, 0, 0, 1, 2, 4, 5, 3]

// =========================

// void zeros_at_beginning(int *arr,int l)
// {
//     for (int i = 0; i < l; i++)
//     {
//         for (int j = 0; j < l; j++)
//         {
//         if (arr[j]==0)
//         {
//             int temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//         }

//     }

//     for (int i = 0; i < l; i++)
//     {
//         printf("%d ",arr[i]);
//     }

// }
void zeros_at_beginning(int *arr, int l)
{
    
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (arr[i]==0)
            {
                for (int i = 0; i < count; i++)
                {
                    /* code */
                }
                
            }
            
        }
        
        
    }
    
    for (int i = 0; i < l; i++)
    {
            printf("%d ", arr[i]);
    }
    
}
    int main(int argc, char const *argv[])
    {
        int array[] = {1, 0, 2, 0, 4, 5, 0, 3, 0};
        int size = sizeof(array) / sizeof(int);
        zeros_at_beginning(array, size);
        return 0;
    }
