/**
 * @Author: Dastan Alam
 * @Date:   2024-09-04 07:32:54 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-04 07:37:21 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// IdentifyTheGivenCharacterUppercvaseOrLowecase [ simple if ]
// Write a C program to check whether a character is uppercase or lowercase alphabet using simple(if) only.

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
    if(ch>=97&&ch<=122)
    {
        printf("%c is lowercase",ch);
    }
    return 0;
}
