/**
 * @Author: Dastan Alam
 * @Date:   2024-09-10 06:41:13 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-10 06:54:14 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Vowel or Consonant
// Write a C program to check whether a given Alphabet is vowel or consonant or Special characer using Switch Case.

// Sample input  : A
// Sample output : Vowel

// Sample input  : B
// Sample output : Consonant

// Sample input  : @
// Sample output : Special character
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter operation :"); scanf(" %c",&ch);
    // if(ch>=97&&ch<=122) ch=ch-32;
    switch (ch>=65&&ch<=122)
    {
        case 1:
            switch (ch)
            {
            case 'A':  case 'E' : case 'I': case 'O': case 'U':case 'a':  case 'e' : case 'i': case 'o': case 'u':
                printf("Vowel");
                break;
            default:
                printf("Consonant");
                break;
            }
            break;
        default:
            printf("Special character");
            break;
    
    }
    return 0;
}
