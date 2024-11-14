/**
 * @Author: Dastan Alam
 * @Date:   2024-09-12 06:19:33 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-12 06:22:09 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 2 : 
// =======

// Using While loop Write a C program that reads two integers, N1 and N2, from the user. The program should print all the numbers from N1 to N2 (inclusive) in a single line, 
// separated by commas, in reverse order.

// Example:  

// Sample input : N1 = 10 , N2 = 1

// Sample output : 10,9,8,7,6,5,4,3,2,1


// ================================================================
int main(int argc, char const *argv[])
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    while (n1!=n2)
    {
        printf("%d,",n1);
        --n1;
        /* code */
    }
    printf("%d",n2);
    return 0;
}
