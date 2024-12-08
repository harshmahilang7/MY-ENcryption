/**
 * @Author: Dastan Alam
 * @Date:   2024-10-19 07:17:35 PM   19:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-19 07:42:56 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char str[]="Welcome to naresh it";
    int l=strlen(str);
    for (int i = l-1; i>=0; i--)
    {
        int c=0;
        for (int j = l-1; j>=0; j--)
        {
            if(str[i]==str[j])
            {
                c++;
                // break;
            }
        }
        if (c!=1&&i==l-1)
        {
        printf("repeted");
        return 0;
        }
        
        
    }
    printf("not repeted");
    return 0;
}
