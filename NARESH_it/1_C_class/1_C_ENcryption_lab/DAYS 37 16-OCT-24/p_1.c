/**
 * @Author: Dastan Alam
 * @Date:   2024-10-16 11:52:26 AM   11:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-16 12:02:01 PM   12:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 1 :
// ========

// Write a program in C to find the number occurring odd number of times in an array.

// Sample input :
// The given array is : 8 3 8 5 4 3 4 3 5 1

// Sample output :
// The element odd number of times is : 3 1

// =========================

void occurring_odd_number(int *arr,int l)
{
    int same_ele=0;
    for (int i = 0; i < l; i++)
    {
        int c=0;
        for (int j = 0; j < l; j++)
        {
            if (arr[i]==arr[j])
            {
                c++;
            }
            
        }
        if (c%2!=0&&arr[i]!=same_ele)
        {
            same_ele=arr[i];
            printf("%d ",arr[i]);
        }
        
    }
    
}
int main(int argc, char const *argv[])
{
// The given array is : 8 3 8 5 4 3 4 3 5 1
    int array[]={8,3,8,5,4,3,4,3,5,1};
    int size=sizeof(array)/sizeof(int);
    occurring_odd_number(array,size);
    return 0;
}
