/**
 * @Author: Dastan Alam
 * @Date:   2024-10-16 12:16:11 PM   12:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-16 05:59:59 PM   17:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 3 :
// =======

// Write a C program to print Max occured elements of array.

// Example : 

// Input 1 : {1,2,3,1,1,1,2,2,3,1,4,1}
// Output 1 : Max elements of array is 1 Ocuured 6 times.


// Input 2 : {1,2,1,3,2,3,4,5}                
// Output 2 : Max elements of array is 1 Ocuured 2 times.
//            Max elements of array is 2 Ocuured 2 times.
//            Max elements of array is 3 Ocuured 2 times.


// =========================
int find_max(int *a,int l,int *m,int *c)
{
    int occ[l];
    int cur=0;
    for (int i = 0; i < l; i++)
    {
        int c=0;
        for (int j = 0; j < l; j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
            
        }
        occ[i]=c; 
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (occ[i]>occ[j])
            {
                *m=occ[i];
            }
            
        }
        
    }

    for (int i = 0; i < l; i++)
    {
        if (*m==occ[i])
        {
            c[cur]=a[i];
            cur++;
        }
        
    }

    for (int i = 0; i < cur; i++)
    {
        for (int j = i+1; j < cur; j++)
        {
            if (c[i]==c[j])
            {
                for (int k = j; k < cur; k++)
                {
                    c[k]=c[k+1];
                }
                cur--;
                j--;
            }
            
        }
        
    }
    
    return cur;
    
}



int main(int argc, char const *argv[])
{
    int array[]={1,2,1,3,2,3,4,5};
    int size=sizeof(array)/sizeof(int);
    int max=0;
    int count[size];
    int new_size=find_max(array,size,&max,count);
    // printf("%d\n",max);
    for (int i = 0; i < new_size; i++)
    {
        printf("Max elements of array is %d Ocuured %d times.\n",count[i],max);
    }
    
    return 0;
}
