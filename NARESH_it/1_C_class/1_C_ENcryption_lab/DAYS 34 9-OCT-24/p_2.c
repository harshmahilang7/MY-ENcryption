/**
 * @Author: Dastan Alam
 * @Date:   2024-10-09 11:40:55 AM   11:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-09 11:50:28 AM   11:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


// Que 2 : Swap two numbers using Call by Reference
// =======

// Write a C program that demonstrates swapping two numbers using call by reference.

// Requirements:

// Create a main() function where two integers are input by the user.
// Create a void swap(int *a, int *b) function that swaps the two integers using pointers (call by reference).
// In the main() function, print the values of the two integers before and after calling the swap function.

// Sample input :
// Enter two numbers: 10 20

// Sample output :
// Before swap: x = 10, y = 20
// After swap (call by reference): x = 20, y = 10

// Observe the output and note that the values are swapped in the main() function.

// Note: The values in main() will be successfully swapped because call by reference passes the actual memory addresses of the variables to the function, allowing direct modification.

// ============================

int swap(int *a,int *b)
{
    int temp=*b;
    *b=*a;
    *a=temp;
}


int main(int argc, char const *argv[])
{
    int a=10;
    int b=20;
    printf("before the value a= %d , b= %d\n",a,b);
    swap(&a,&b);
    printf("after the value a= %d , b= %d",a,b);
    return 0;
}