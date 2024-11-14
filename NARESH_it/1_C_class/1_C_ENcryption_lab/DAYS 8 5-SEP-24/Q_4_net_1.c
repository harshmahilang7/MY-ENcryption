/**
 * @Author: Dastan Alam
 * @Date:   2024-09-05 06:13:13 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-05 06:51:09 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// CheckAlphabet,DigitOrSpecialCharacter
// Write a C program to input any character and check whether it is alphabet, digit or special character.


// Sample input  : char ch = 'A';
// Sample output : Alphabet

// Sample input  : char ch = '9';
// Sample output : Digit

// Sample input  : char ch = '@';
// Sample output : Special character
int main()
{
    char ch;
    printf("Enter the character=");scanf(" %c",&ch);
    if (ch>='0'&&ch<='9')
    printf("Digit");
    else if (ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
    printf("Alphabet");
    else
    printf("Special character");
    return 0;
}
