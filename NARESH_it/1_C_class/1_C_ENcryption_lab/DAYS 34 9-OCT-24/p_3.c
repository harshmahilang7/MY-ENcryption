/**
 * @Author: Dastan Alam
 * @Date:   2024-10-09 11:47:24 AM   11:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-10 06:03:19 PM   18:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


// Que 3 :
// =======

// Write a C program to find the median of a merged sorted Array by using pointer and function.

// -> create int main() function.
// -> create int type array1, array2 and array3 in main fuction(array3 = array1_size + array2_size).
// -> store values in array1, array2.
// -> create void mergeAndSort(int *array1, int size1, int *array2, int size2, int *mergedArray) function.
// -> from main function call mergeAndSort funtion and merge array1 and array2 into array3.
// -> after merging sort array3.
// -> create double findMedian(int *mergedArray, int totalSize) function.
// -> from main fuction call findMedian function which will return median. 

// Sample input : 
// Enter the size of 1st array : 2
// Enter 2 element : 1 3

// Enter the size of 2nd array : 1
// Enter 1 element : 2

// Sample output : 

// After sorting Array is :1 2 3
// Median is : 2.0


// Sample input :  
// Enter the size of 1st array : 2
// Enter 2 element :1 4

// Enter the size of 2nd array : 2
// Enter 2 element : 2 3

// Sample output : 

// After sorting Array is :1 2 3 4
// Median is : 2.5

// ============================
double findMedian(int *mergedArray, int totalSize){
    // double median=0;
    if (totalSize%2!=0)
    {
        int d=(totalSize/2);
        printf("\nMedian is :%.1f",(double)mergedArray[d]);
    }
    else 
    {
        int d=(totalSize/2)-1;
        double add=mergedArray[d]+mergedArray[d+1];
        printf("\nMedian is :%.1f",add/2);
    }
    // printf("\nMedian is :%.2f",median/totalSize);
}

int sort(int *mergedArray,int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j<size-i-1; j++)
        {
            if (mergedArray[j+1]<mergedArray[j])
            {
                int temp=mergedArray[j];
                mergedArray[j]=mergedArray[j+1];
                mergedArray[j+1]=temp;
            }
            
        }
        
    }
    printf("After sorting Array is ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", mergedArray[i]);
    }
    findMedian(mergedArray,size);
}

int mergeAndSort(int *array1, int size1, int *array2, int size2, int *array3)
{
    int size3=size1+size2;
    for (int i = 0; i < size1; i++)
    {
        array3[i]=array1[i];
    }
    
    for (int i = size1,y=0; i < size3; i++,y++)
    {
        array3[i]=array2[y];
    }
    sort(array3,size3);
}

int main(int argc, char const *argv[])
{
    int a1[]={1,3,5,6};
    int a1_s=sizeof(a1)/sizeof(int);
    int b1[]={30,20,40,80};   // 1 3 5 6 20 30 40 80
    int b1_s=sizeof(b1)/sizeof(int);
    int size3=a1_s+b1_s;
    int c1[size3];
    mergeAndSort(a1,a1_s,b1,b1_s,c1);
    return 0;
}
