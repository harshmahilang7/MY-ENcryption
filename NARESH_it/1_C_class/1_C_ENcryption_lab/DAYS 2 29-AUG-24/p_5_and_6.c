/**
 * @Author: Dastan Alam
 * @Date:   2024-08-29 06:28:12 PM   18:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-30 11:56:43 AM   11:08
 */
// Que 5 :  Write a 'C' program to check and print the Maximum number among two numbers without using ternary operator and control statments.
// --------

// Sample input : int a = 10 , b = 20
// Sample Output : MAX = 20
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int a,b;
    printf("enter the number a and b");
    scanf("%d %d",&a,&b);
    a>b && printf("a is big") || b>a && printf("b is big") || b==a && printf(" both are equal");
    return 0;
}
