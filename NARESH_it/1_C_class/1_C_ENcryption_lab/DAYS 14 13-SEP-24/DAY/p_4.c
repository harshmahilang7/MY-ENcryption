/**
 * @Author: Dastan Alam
 * @Date:   2024-09-13 11:36:44 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-13 11:40:28 AM   11:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


// Que 4 :
// =======

// Write C program to reverse a number using while 

// Sample input  : Enter a number : 12345
// Sample output : Reverse : 54321
int main(int argc, char const *argv[])
{
    /* code */
    int num=12000,rev=0;
    while (num!=0)
    {
        rev=num%10;
        printf("%d",rev);
        num/=10;
    }
    return 0;
}
