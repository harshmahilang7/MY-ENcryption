/**
 * @Author: Dastan Alam
 * @Date:   2024-10-14 11:45:48 AM   11:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-14 12:01:15 PM   12:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 3 :
// ======

// Write a C program to reverse Words of the Given String?

// Sample input : Today is Monday
// Sample Output: yadoT si yadnoM

// =========================
char *rev_sring(char *str)
{
    int i,j;
    for (i = 0; str[i]; i++);
    char *rev= (char *)malloc((i + 1));  
    i=i-1;
    // printf("%d",i);
    for (i,j = 0; str[j]; i--,j++)
    {
        rev[i]=str[j];
        
    }
    // printf("%s",rev);
    return rev;
    
}

int main(int argc, char const *argv[])
{
    char s[]="Today is Monday";
    printf("%s",rev_sring(s));
    return 0;
}