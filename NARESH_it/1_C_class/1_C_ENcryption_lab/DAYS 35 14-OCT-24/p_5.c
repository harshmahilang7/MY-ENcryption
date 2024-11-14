/**
 * @Author: Dastan Alam
 * @Date:   2024-10-17 07:14:39 PM   19:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-18 12:36:04 PM   12:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char s[]="{[()]}";
    int l=strlen(s);
    int f=1;
    for (int i = 0; i < l; i++)
    {
        if (!(s[i]=='{' && s[l-1]=='}')&& !(s[i]=='[' && s[l-1]==']') && !(s[i]=='(' && s[l-1]==')'))
        {
            f=0;
            printf("invalid");
            break;
            
        }
        l--;
    }
    if (f==1)
    {
        printf("valid");
    }
    
    
    return 0;
}
