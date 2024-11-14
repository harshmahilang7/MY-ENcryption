/**
 * @Author: Dastan Alam
 * @Date:   2024-09-04 06:53:39 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-04 07:09:52 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Write a C program to input any alphabet and check whether it is vowel or consonant using simple(if) only.

// Sample input  : char ch = 'A';
// Sample output : Vowel

// Sample input  : char ch = 'b';
// Sample output : Consonant

int main()
{
    char ch;
    printf("entre the char");
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("Vowel");
    }
    if (!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
    {
        
        printf("Consonant");
    }
    return 0;
}
