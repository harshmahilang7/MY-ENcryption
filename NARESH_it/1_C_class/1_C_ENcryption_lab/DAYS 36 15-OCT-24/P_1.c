/**
 * @Author: Dastan Alam
 * @Date:   2024-10-15 11:21:34 AM   11:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-15 12:18:44 PM   12:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 1 :
// =======

// Write a C program to find the first repeated character in a string.

// Sample input : Welcome to Nareshit

// Sample  output:  The first repetitive character is: e

// =======================
int main(int argc, char const *argv[])
{
    char s[]="Welcome to Nareshit";
    for (int i = 0; s[i]; i++)
    {
        int c=0;
        for (int j = 0; s[j]; j++)
        {
            if (s[i]==s[j])
            {
                c++;
            }
            
        }
        if (c>1)
        {
            printf("The first repetitive character is: = %c",s[i]);
            break;
        }
        
        
    }
    
    return 0;
}
