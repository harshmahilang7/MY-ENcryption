/**
 * @Author: Dastan Alam
 * @Date:   2024-10-15 12:35:04 PM   12:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-18 06:22:24 PM   18:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char s[]="Welcome to Nareshit";
    int size;
    for (size = 0; size[s]; size++);
    for (int i = size-1; i>=0; i--)
    {
        int c=0;
        for (int j = size-1; j>=0; j--)
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
}