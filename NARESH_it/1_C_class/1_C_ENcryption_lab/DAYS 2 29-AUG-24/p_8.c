/**
 * @Author: Dastan Alam
 * @Date:   2024-08-29 07:19:10 PM   19:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-29 07:24:58 PM   19:08
 */
// Que 8 :  Write a 'C' program to check and print the Maximum number among three numbers using ternary operator.
// --------

// Sample input : int a = 10 , b = 200, c = 134;
// Sample Output : MAX = 200
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int a , b , c ;
    printf("enter the number a and b and c");
    scanf("%d %d %d",&a,&b,&c);
    (a>b)&&(a>c)?printf("a is big"): (b>a)&&(b>c) ?printf("b is big"): printf("c is big");
    return 0;
}
