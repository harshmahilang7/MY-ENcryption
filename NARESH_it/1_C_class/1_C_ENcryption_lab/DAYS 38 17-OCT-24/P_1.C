/**
 * @Author: Dastan Alam
 * @Date:   2024-10-17 11:35:37 AM   11:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-17 12:17:20 PM   12:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 1 :
// ========

// -> Write a C program to store first Nth prime numbers into array and print the ressult array.

// -> Example:

//    Input1 : 3
//    Output1 :[2,3,5]

//    Input2 : 5
//    Output2 :[2,3,5,7,11]

// ============================================

int find_first_nth_prime_number(int *a,int l,int p)
{
    int k=0;
    for (int i = 2; i < p; i++)
    {
        if (l==k)
        {
            break;
        }
    
        int c=1;
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                c++;
            }
            
        }
        if (c==1)
        {
            a[k]=i;
            k++;
            // printf("%d ",i);
        }
        
        
    }
    return 0;
    
}
int main(int argc, char const *argv[])
{
    // int size=sizeof(array)/sizeof(int);
    int size=10;
    int pos=size*size;
    int array[size];
    find_first_nth_prime_number(array,size,pos);
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    
    return 0;
}
