/**
 * @Author: Dastan Alam
 * @Date:   2024-10-17 12:44:06 PM   12:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-18 12:40:40 PM   12:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 3 :
// =======

// Write a C program to print all the LEADERS in the array.
// NOTE : An element is leader if it is greater than all the elements to its right side.

// -> Example : 

//    Input : {10,9,14,23,15,0,9}
          
//    Output :  Leader elements are : 23, 15, 9 

// ============================================

int main(int argc, char const *argv[])
{
    int a[]={10,9,14,23,15,0,9};
    int size=sizeof(a)/sizeof(int);
    for (int i = 0; i < size; i++)
    {
        int num=1;
        for (int j = i+1; j < size; j++)
        {
            if ((a[i]<=a[j]))
            {
                num=0;
                break;
            }
        }
        if (num)
        {
        printf("%d ",a[i]);
        }
        
                
        
    }
    
    return 0;
}
