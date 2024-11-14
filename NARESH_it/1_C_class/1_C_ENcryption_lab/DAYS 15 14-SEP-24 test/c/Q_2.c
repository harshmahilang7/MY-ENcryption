/**
 * @Author: Dastan Alam
 * @Date:   2024-09-14 07:01:39 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-14 07:14:14 PM   19:09
 */
#include <stdio.h>
// Question 2 :
// Write a C program to check whether a given Alphabet is vowel or consonant or Special characer 
// using Switch Case.
// Sample input : A
// Sample output : Vowel
// Sample input : B
// Sample output : Consonant
// Sample input : @
// Sample output : Special character
// =======================================================================================

int main()
{
    char ch='9';
    switch (ch>=65&&ch<=90||ch>=97&&ch<=122)
    {
    case 1:
        switch (ch)
        {
        case 'a': case 'e': case 'i': case'o': case 'u': case'A': case 'E': case 'I': case'O': case 'U':printf("Vowel");
            break;
        default:
        printf("Consonant");
            break;
        }
        break;
    
    default:
        printf("Special characer ");
        break;
    }
    return 0;
}
