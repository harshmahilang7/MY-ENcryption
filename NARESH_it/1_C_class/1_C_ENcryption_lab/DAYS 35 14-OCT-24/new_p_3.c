/**
 * @Author: Dastan Alam
 * @Date:   2024-10-18 12:03:13 PM   12:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-18 12:31:42 PM   12:10
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

int main(int argc, char const *argv[])
{
    char s[]="Today is hello mean hello i am harsh Monday";
    int space_count=0;
    for (int i = 0; i < sizeof(s); i++)
    {
       if (s[i]==' ')
       {
        space_count++;
        for (int j = i-1;j>=0; j--)
        {
            printf("%c",s[j]);
            if(s[j]==' ')
            {
                break;
            }
        }
        if (space_count==1)
            {
                printf(" ");
            }
       }
       
       
       
    }
       for (int l =sizeof(s); l >=0; l--)
       {
        printf("%c",s[l]);
        if (s[l]==' ')
        {
            break;
        }
       }
    
    return 0;
}
