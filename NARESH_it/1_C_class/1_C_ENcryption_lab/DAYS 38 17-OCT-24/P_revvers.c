/**
 * @Author: Dastan Alam
 * @Date:   2024-10-17 06:57:47 PM   18:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-17 10:57:36 PM   22:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char s[]="today is monday";
    int l=strlen(s);
    for (int i = 0; i < l; i++)
    {
        for (int j = i; j <= l; j++)
        {
            if (s[j]==' '||j==l)
            {
                for (int x = j-1; x >=i; x--)
                {
                    if (s[x]!=' ')
                    {
                    printf("%c",s[x]);
                    }
                    
                }
                printf(" ");
                i=j;
            }
            
        }
        
    }
    
    return 0;
}
