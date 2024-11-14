/**
 * @Author: Dastan Alam
 * @Date:   2024-10-03 06:23:27 PM   18:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-03 06:41:11 PM   18:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 1 :
// =======

// Write a C program to find out the sum of the numbers which is present in a given string.

// Sample input  : Enter a String : TS12ab345

// Sample output  : Sum Of the numbers is : 15
// ==================

int main(int argc, char const *argv[])
{
    char a[100] = "TS12ab345";
    int sum = 0, i;
    for (i = 0; a[i]; i++)
    {
        if (a[i] >= '1' && a[i] <= '9')
        {
            sum += a[i] - 48;
            // printf("%d\n",(int)a[i]);
        }
    }
    printf("%d", sum);
    return 0;
}
