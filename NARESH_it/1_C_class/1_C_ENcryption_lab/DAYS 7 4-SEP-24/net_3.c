/**
 * @Author: Dastan Alam
 * @Date:   2024-09-04 07:17:47 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-04 07:23:53 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Write a C program to read one character from user and convert it into upercase if given character is in lowercase otherwise convert itno lowercase using if-else only.


// Sample input  : char ch = 'A';
// Sample output : a

// Sample input  : char ch = 'b';
// Sample output : B 

int main()
{
    char ch;
    printf("entre the char");
    scanf("%c",&ch);
    if (ch>=65&&ch<=96)
    {
        printf("%c",ch+32);
    }
    else
    {
        printf("%c",ch-32);
    }
    return 0;
}

