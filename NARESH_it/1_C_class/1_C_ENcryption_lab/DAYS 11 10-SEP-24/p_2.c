/**
 * @Author: Dastan Alam
 * @Date:   2024-09-10 06:22:12 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-10 06:24:05 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Maximum between two numbers
// Write a C program to find the maximum between two numbers using Switch statement.

int main(int argc, char const *argv[])
{
    int n1,n2;
    printf("Enter num1 :"); scanf("%d",&n1);
    printf("Enter num2 :"); scanf("%d",&n2);
    switch (n1>n2)
    {
    case 1 :
        printf("num 1 is biger");
        break;
    
    default:
        printf("num 2 is biger");
        break;
    }
    return 0;
}
