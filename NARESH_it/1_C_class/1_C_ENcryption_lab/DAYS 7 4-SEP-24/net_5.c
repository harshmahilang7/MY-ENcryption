/**
 * @Author: Dastan Alam
 * @Date:   2024-09-04 07:27:15 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-04 07:28:07 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Write a C program to input any alphabet and check whether it is vowel or consonant using if-else.


int main()
{
    char ch;
    printf("entre the char");
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("Vowel");
    }
    else
    {
        
        printf("Consonant");
    }
    return 0;
}
