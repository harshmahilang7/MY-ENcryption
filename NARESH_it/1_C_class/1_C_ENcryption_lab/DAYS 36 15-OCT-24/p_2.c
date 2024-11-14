/**
 * @Author: Dastan Alam
 * @Date:   2024-10-15 11:47:44 AM   11:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-15 12:18:28 PM   12:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 2 :
// =======

// Write a C program to find the last repeated character in a string.

// Sample input : Welcome to naresh it

// Sample  output:  The last repetitive character is: t

// =======================
int main(int argc, char const *argv[])
{
    char s[]="Welcome to naresh it";
    int size=sizeof(s);
    char rev[size];
    int i,j;
    for (i = 0 ,j=size-2; s[i]; j--,i++)
    {
        rev[j]=s[i];
    }
    rev[i]='\0';
    
    for (int k = 0; rev[k]; k++)
    {
        int c=0;
        for (int l = 0; rev[l]; l++)
        {
            if (rev[k]==rev[l])
            {
                c++;
            }
            
        }
        if(c>1)
        {
            printf("The last repetitive character is:= %c",rev[k]);
            break;
        }
        
    }
    return 0;
}
