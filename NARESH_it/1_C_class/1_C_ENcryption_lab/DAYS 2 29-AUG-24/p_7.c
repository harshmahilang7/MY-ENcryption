/**
 * @Author: Dastan Alam
 * @Date:   2024-08-29 07:10:30 PM   19:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-30 12:02:12 PM   12:08
 */
// Que 7 :  Write a 'C' program to check and print the Maximum number among three numbers without using ternary operator and control statments.
// --------

// Sample input : int a = 10 , b = 200, c = 134;
// Sample Output : MAX = 200

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


// int main(int argc, char const *argv[])
// {
//     int a,b,c;
//     printf("enter the number a and b and c");
//     scanf("%d %d %d",&a,&b,&c);
//     // a>b && printf("a is big") || b>a && printf("b is big") || b==a && printf(" both are equal");
//     (a>b)&&(a>c) && printf("a is big") || (b>a)&&(b>c) && printf("b is big") || (c>a)&&(c>b) && printf("c is big") ;
//     return 0;
// }

// Write a 'C' program to check and print the Maximum number among four numbers without using ternary operator and control statments.

int main(int argc, char const *argv[])
{
    int a,b,c,d;
    printf("enter the number a and b and c and d");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    // a>b && printf("a is big") || b>a && printf("b is big") || b==a && printf(" both are equal");
    // (a>b)&&(a>c) && printf("a is big") || (b>a)&&(b>c) && printf("b is big") || (c>a)&&(c>b) && printf("c is big") ;
    (a>b)&&(a>c)&&(a>d) && printf("a is big") || (b>a)&&(b>c)&&(b>d)&&printf("b is big") ||(c>a)&&(c>b)&&(c>d)&&printf("c is big") || printf("d is big");
    return 0;
}
