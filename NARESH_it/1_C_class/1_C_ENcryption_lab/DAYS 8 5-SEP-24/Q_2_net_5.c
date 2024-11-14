/**
 * @Author: Dastan Alam
 * @Date:   2024-09-05 06:36:33 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-05 06:45:12 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// FindMaximumBetweenThreeNumbers

// Write a C program to find maximum between three numbers.

// Sample input  : int a = 100, b = 200, c = 300
// Sample output : 300
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter the three numbers=");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
        printf("a is big");
    else if (b>a&&b>c)
        printf("b is big");
    else if (a==b&&a>c)
        printf("a and b is big");
    else if (b==c&&b>a)
        printf("b and c is big");
    else if (a==c&&c>b)
        printf("a and c is big");
    else if (a==b&&b==c)
        printf("a and b and c are equal");
    else
        printf("c is big");
    return 0;
}
