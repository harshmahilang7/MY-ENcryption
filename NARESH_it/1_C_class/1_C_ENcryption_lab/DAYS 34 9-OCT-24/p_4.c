/**
 * @Author: Dastan Alam
 * @Date:   2024-10-10 11:24:32 AM   11:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-10 12:17:30 PM   12:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


// Que 4 :
// =======
// 
// Write a C program to rotate an array of integers to the right by a specified number of positions. 
// For example, if you have an array [1, 2, 3, 4, 5] and you want to rotate it to the right by 2 positions, 
// the result should be [4, 5, 1, 2, 3].(Develop it by using pointers & function).
// 
// -> create int main() function.
// -> create void rotateRight(int *arr, int size, int positions) function.
// -> in main function print the output of array before and after rotation.
// 
// Sample input : 
// Enter the size of the array: 5
// Enter 5 elements: 1 2 3 4 5
// Enter the number of positions to rotate to the right: 2
// 
// Sample output : 
// Before rotation : 1 2 3 4 5
// After rotation : 4 5 1 2 3
// 
// ============================

void rotation(int *arry,int size,int pos)
{

    // left shift 
    for (int i = 0; i < pos; i++)
    {
        int temp=arry[0];
        for (int j = 0; j < size; j++)
        {
            arry[j]=arry[j+1];
        }
        arry[size-1]=temp;
    }

    // right shift

    
    // for(int i=0;i<pos;i++)
    // {
      
    //   int temp=*(arry+size-1);
    //   //printf("%d \n",temp);
      
    //   int j;
    //   for(j=size-1; j>=0;j--)
    //   {
    //     //printf("%d \n",j);
    //       *(arry+j)=*(arry+j-1);
    //   }
    //   printf("%d",j);
    //   *(arry)=temp;
        
    // }
    
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ",*(arry+i));
    // }
    
    
}

void show_arry(int *arry, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",*(arry+i));
    }
    printf("\n");
    
}

int main(int argc, char const *argv[])
{
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(int);
    int pos=2;
    printf("Before rotation "); 
    show_arry(a,size);
    rotation(a,size,pos);
   printf("after rotation "); 
   show_arry(a,size);
    return 0;
}
