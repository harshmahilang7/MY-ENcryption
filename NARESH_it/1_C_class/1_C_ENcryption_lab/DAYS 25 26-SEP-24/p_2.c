/**
 * @Author: Dastan Alam
 * @Date:   2024-10-06 04:55:40 PM   16:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-06 05:08:35 PM   17:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 2 :
// =======
// 
// Write a program in C to find the missing elements in a given array. 
// 
// Sample input :
// Enter size of array : 6
// Enter 6 elements   : 1 3 2 6 9 8
// 
// Sample output :
// The missing elements is : 4 5 7 
// 
// ============================
int main(int argc, char const *argv[])
{
    int a[]={1,3,2,6,9,8};
    int size=sizeof(a)/sizeof(int);
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
    for (int i= 0; i < size; i++)
    
    {
        // printf("%d ",a[i]);
        if(a[i+1]-a[i]!=1)
        {
            for (int y = a[i]+1; y < a[i+1]; y++)
            {
               printf("%d ",y);
            }
            
        }
    }
    
    
    return 0;
}
