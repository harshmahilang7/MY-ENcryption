/**
 * @Author: Dastan Alam
 * @Date:   2024-09-25 07:04:49 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-25 07:08:09 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 5 :
// =======

// Write a program in C to copy the elements of one array into another array.

// Sample input :
// element - 0 : 15
// element - 1 : 10
// element - 2 : 12

// Sample output :
// The elements stored in the first array are :15 10 12
// The elements copied into the second array are :15 10 12

/**
 * @Author: Dastan Alam
 * @Date:   2024-09-25 07:01:39 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-25 07:05:17 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


// Que 5 :
// =======

// Write a program in C to copy the elements of one array into another array.

// Sample input :
// element - 0 : 15
// element - 1 : 10
// element - 2 : 12

// Sample output :
// The elements stored in the first array are :15 10 12
// The elements copied into the second array are :15 10 12


// =======================================
int main(int argc, char const *argv[])
{
    int size,sum=0;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size],b[size];
    printf("The elements stored in the first array\n");
    for (int i = 0; i <= size; i++)
    {
        printf("element at index %d = ",i);
        scanf("%d",&a[i]);
    }
    printf("The elements copied into the second array are\n");
    for (int i = 0; i <=size; i++)
    {
        b[i]=a[i];
        printf("element at index %d = %d\n",i,b[i]);
    }
    return 0;
}