/**
 * @Author: Dastan Alam
 * @Date:   2024-10-18 11:40:26 AM   11:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-18 11:49:29 AM   11:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Write a program to find and count all palindromic substrings in a given string.

// Sample input : Enter a String : madam

// Sample output   :  Palindromic substring : madam
// 		   Palindromic substring : ada
// 		   Total palindromic substrings are : 2

// =========================
int main(int argc, char const *argv[])
{
    char s[]="madam";
    int size=strlen(s);
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (s[i]==s[j])
            {
                int x=i;
                int y=j;
                int f=1;
                for (x;x<y;x++)
                {
                    if (s[x]!=s[y])
                    {
                        f=0;
                        break;
                    }
                    y--;
                }
                if(f==1)
                {
                    for (int K =i; K <= j; K++)
                    {
                    printf("%c",s[K]);
                    }
                    printf("\n");
                    
                }
                
            }
            
        }
        
    }
    
    return 0;
}
