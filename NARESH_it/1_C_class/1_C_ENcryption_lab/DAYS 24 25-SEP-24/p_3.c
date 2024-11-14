/**
 * @Author: Dastan Alam
 * @Date:   2024-09-26 06:45:19 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-26 07:14:31 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 3 :
// =======

// Write a C program to delete a given element from an array.

// Sample input :
// Enter the number of elements in the array: 8
// Enter 8 elements : 10 20 30 30 30 40 50 30
// Enter the element to be deleted: 30

// Sample output :
// Array after deletion: 10 20 40 50

int main(int argc, char const *argv[])
{
    int a[100], size, det, pos = 0, count = 0;
    printf("enter the size of array");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    // printf("count= %d")

    printf("enter the deleted");
    scanf("%d", &det);
    for (int i = 0; i < size; i++)
    {
        if (a[i] == det)
        {
            count++;
        }
    }
    int c = count;
    while (count != 0)
    {
        for (int i = 0; i < size; i++)
        {
            if (det == a[i])
            {
                pos = i;
                break;
            }
            else
            {
                pos = 0;
            }
        }
        if (pos != 0)
        {
            for (int i = pos; i < size; i++)
            {
                a[i] = a[i + 1];
            }
        }
        else
            printf("not found");
        count--;
    }

    for (int i = 0; i < size - c; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
