/**
 * @Author: Dastan Alam
 * @Date:   2024-09-06 07:15:59 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-06 07:26:21 PM   19:09
 */
#include <stdio.h>

// Write a 'C' program to check and print the Maximum number among three numbers using ternary operator.

// Sample input : int a = 10 , b = 200, c = 134;
// Sample Output : MAX = 200
int main()
{
    int a,b,c;
    printf("enter the number 1=");scanf("%d",&a);
    printf("enter the number 2=");scanf("%d",&b);
    printf("enter the number 3=");scanf("%d",&c);
    (a>b)?printf("a is big"):(b>c)?printf("b is big"):printf("c is big");
    return 0;
}
