/**
 * @Author: Dastan Alam
 * @Date:   2024-09-04 07:32:54 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-04 07:41:24 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// IdentifyTheGivenCharacterUppercvaseOrLowecase [ if-else ]
// Write a C program to check whether a character is uppercase or lowercase alphabet using (if-else) only.

// Sample input  : char ch = 'A';
// Sample output : UpperCase

// Sample input  : char ch = 'b';
// Sample output : LoweCase

int main()
{
    char ch;
    printf("entre the char=");
    scanf("%c",&ch);
    if (ch>=65&&ch<=96)
    {
        printf("%c is Upercase",ch);
    }
    else
    {
        printf("%c is lowercase",ch);
    }
    return 0;
}
