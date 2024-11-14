/**
 * @Author: Dastan Alam
 * @Date:   2024-10-17 06:25:47 PM   18:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-17 06:47:25 PM   18:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s[] = "madam";
    // int size=sizeof(s);
    // int last=size-1;
    // int first=0;
    // for (int i = 0; i < size/2+1; i++)
    // {
    //     printf("(%c %c)\n",s[first],s[last]);
    //     first++;
    //     last--;
    // }

    int c = 0;
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (s[i] == s[j])
            {
                int x = i;
                int y = j;
                int f = 1;
                for (x; x < y; x++)
                {
                    if (s[x] != s[y])
                    {
                        f = 0;
                        break;
                    }
                    y--;
                }
                if (f == 1)
                {
                    // printf()
                    for (int k = i; k <= j; k++)
                    {
                        printf("%c", s[k]);
                    }
                    c++;
                    printf("\n");
                }
            }
        }
    }
    printf("total substring is %d", c);
    return 0;
}
