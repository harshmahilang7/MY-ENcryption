/**
 * @Author: Dastan Alam
 * @Date:   2024-09-10 06:55:49 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-10 06:57:43 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Even or Odd
// Write a C program to check the number is even or odd by using Switch Case.

int main(int argc, char const *argv[])
{
    int n1;
    printf("Enter num :"); scanf("%d",&n1);
    switch (n1%2)
    {
    case 0:
        printf("even");
        break;
    default:
        printf("odd");
        break;
    }
    return 0;
}
