/**
 * @Author: Dastan Alam
 * @Date:   2024-10-09 11:31:29 AM   11:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-09 11:51:53 AM   11:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 1 : Swap two numbers using Call by Value
// =======

// Write a C program that demonstrates swapping two numbers using call by value.

// Requirements:

// Create a main() function where two integers are input by the user.
// Create a void swap(int a, int b) function that swaps the two integers using call by value.
// In the main() function, print the values of the two integers before and after calling the swap function.

// Sample input :
// Enter two numbers: 10 20

// Sample output :
// Before swap: x = 10, y = 20
// After swap (call by value): x = 10, y = 20

// Observe the output and note that the values are not swapped in the main() function.

// Note: The actual values in main() will not change since call by value only passes copies of the variables to the function.
       
// -> now follow Que2 and see the power of pointer.


// int swap(int a, int b)
// {
//     int temp=b;
//     b=a;
//     a=temp;

//     printf("a= %d\n",a);
//     printf("b= %d\n",b);
    
//     // return b,a;  not error but value is garbage 
//     return a;   //one value will work fine //
// }

// int main(int argc, char const *argv[])
// {
//     printf("%d , %d",swap(10,20));
    
//     return 0;
// }

// In C, you cannot return two values directly from a function using the return statement, as functions can return only one value. However, there are several ways to achieve the effect of returning two values:


int swap(int a,int b)
{
    int temp=b;
    b=a;
    a=temp;
}

int main(int argc, char const *argv[])
{
    int a=10;
    int b=20;
    printf("before the value a= %d , b= %d\n",a,b);
    swap(a,b);
    printf("After swap (call by value) a= %d , b= %d",a,b);
    return 0;
}