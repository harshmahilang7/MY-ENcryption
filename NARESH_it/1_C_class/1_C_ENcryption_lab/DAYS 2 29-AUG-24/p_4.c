/**
 * @Author: Dastan Alam
 * @Date:   2024-08-29 06:26:05 PM   18:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-29 07:03:15 PM   19:08
 */
// Que 4 :  Write a 'C' program to check and print that given number is even or odd without using ternary operator and control statments.
// --------

// Sample input : int a = 10
// Sample Output : EVEN

// Sample input : int a = 125
// Sample Output : ODD
                        
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main()
{
    int a;
    printf("enter the number ");
    scanf("%d",&a);
    a%2==0 && printf("even\n");
    a%2!=0 && printf("odd\n");
    printf("%s",((a%2==0) && printf("number is even\n") || printf("number is odd\n")));
    return 0;
}
