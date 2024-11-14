/**
 * @Author: Dastan Alam
 * @Date:   2024-08-29 07:25:21 PM   19:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-30 11:53:50 AM   11:08
 */
// Que 9 :  Write a 'C' program to check and print that given number is even or odd using ternary operator.
// --------

// Sample input : int a = 10
// Sample Output : EVEN

// Sample input : int a = 125
// Sample Output : ODD
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int a;
    printf("enter the number a");
    scanf("%d",&a);
    a%2==0?printf("even"):printf("odd");
    return 0;
}
