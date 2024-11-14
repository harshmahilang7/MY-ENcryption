/**
 * @Author: Dastan Alam
 * @Date:   2024-09-13 11:13:38 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-13 11:49:10 AM   11:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 1 :
// =======
// 
// Write a simple C program that reads an integer from the user and prints the multiplication table of the given number using a while loop.
// 
// Example :
// 
// Sample input : N = 5
// 
// Sample output :
// 
// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15
// 5 x 4 = 20
// .....
// .....
// 5 x 10 = 50
// 
int main(int argc, char const *argv[])
{
    /* code */
    int n=5,i=1;
    while (i<=10)
    {
        /* code */
        printf("%d X %d = %d\n",n,i,n*i);
        i++;
    }
    
    return 0;
}
