/**
 * @Author: Dastan Alam
 * @Date:   2024-10-18 06:46:59 PM   18:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-18 07:12:48 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Input: str = i.like.this.program.very.much
// Output: much.very.program.this.like.i
// Explanation: After reversing the whole string(not individual words), the input string becomes much.very.program.this.like.i
int main(int argc, char const *argv[])
{
    /* code */
    char str[]= "i like this program very much";
    int l = strlen(str);
    int i;
    int spac = 0;
    char b[40];
    int size_b=0;
    for (i = l - 1; i >= 0; i--)
    {
        if (str[i]==' ')
        {
            spac++;
            int j = i+1;
            for (j;str[j]; j++)
            {
                printf("%c",str[j]);
                b[size_b++]=str[j];                
                if (str[j]==' ')
                {
                    break;
                }
                
            }
            if (spac==1)
                {
                    printf(" ");
                }
        }
    }
    for (int i = 0; i < l; i++)
    {
        printf("%c",str[i]);
        if (str[i]==' ')
        {
            break;
        }
        
    }
    printf("\n");
    for (int i = 0; i < size_b; i++)
    {
        printf("%c",b[i]);
    }
    // printf("%s")

    return 0;
}
