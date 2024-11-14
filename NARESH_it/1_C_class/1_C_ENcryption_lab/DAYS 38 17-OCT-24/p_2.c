/**
 * @Author: Dastan Alam
 * @Date:   2024-10-17 12:19:53 PM   12:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-19 12:44:45 PM   12:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 2 :
// =======

// -> Write a C program to print common elements of two arrays.
// -> Example : 

//    Input : arr1 {1,2,3,4,5}
//            arr2 {5,7,8,1,1,2,10}

//    Output : Common elements are : 1 2 5

// ============================================

int main(int argc, char const *argv[])
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={5,7,8,1,1,2,10};
    int l1=sizeof(arr1)/sizeof(int);
    int l2=sizeof(arr2)/sizeof(int);

    
    for (int i = 0; i < l2; i++)
    {
        for (int j = i+1; j < l2; j++)
        {
            if (arr2[i]==arr2[j])
            {
                for (int k = j; k <= l2; k++)
                {
                    arr2[k]=arr2[k+1];
                }
                    l2--;
                    j--;
                
            }
            
        }
        
    }
    // for (int i = 0; i < l2; i++)
    // {
    //     printf("%d ",arr2[i]);
    // }
    // printf("\n");
    
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < l2; j++)
        {
            if (arr1[i]==arr2[j])
            {
                printf("%d ",arr1[i]);
                
                
            }
            
        }
        
    }
    
    
    return 0;
}
