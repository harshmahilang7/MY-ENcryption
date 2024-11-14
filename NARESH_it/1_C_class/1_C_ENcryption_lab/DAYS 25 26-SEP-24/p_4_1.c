/**
 * @Author: Dastan Alam
 * @Date:   2024-10-06 05:33:01 PM   17:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-06 07:50:27 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


// Que 4 :
// =======

// Write a program in C to count the frequency of each element of an array.

// Sample input :
// Enter size of array : 5
// Enter 5 elements    : 43 25 12 43 43 

// Sample output :
// The frequency of all elements of an array :
// 25 occurs 1 times
// 12 occurs 1 times
// 43 occurs 3 times


int main(int argc, char const *argv[])
{
    int a[]={43,25,12,43};
    int size=sizeof(a)/sizeof(int);

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    // for (int i = 0; i < size ; i++)
    // {
    //     // printf("%d ",a[i]);
    // }
    // printf("\n");
    for (int i = 0; i < size; i++)
    {
        int c=0;
        for (int j = 0; j < size; j++)
        {
            if (a[i]==a[j])
            {
                c++;
            }
            
        }
        if (a[i]!=a[i+1]) printf("%d %d times\n",a[i],c);
        else {printf("%d %d times\n",a[i],c); break;}
    }
    
    return 0;
}
