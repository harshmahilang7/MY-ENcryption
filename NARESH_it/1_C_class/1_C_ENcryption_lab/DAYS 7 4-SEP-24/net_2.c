/**
 * @Author: Dastan Alam
 * @Date:   2024-09-04 07:05:48 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-04 07:15:37 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Write a C program to find maximum between two numbers using simple (if) only.


int main()
{
    int a,b;
    printf("enter the two number=");
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("a is big");
    if(b>a)
    printf("b is big ");
    return 0;
}
