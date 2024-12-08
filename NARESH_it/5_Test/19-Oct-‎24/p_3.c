/**
 * @Author: Dastan Alam
 * @Date:   2024-10-19 07:33:20 PM   19:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-19 07:44:28 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s[] = "TS12ab345";
    int sum = 0;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            // printf("%c", s[i]);
            sum = sum + s[i]-48;
        }
    }
    printf("%d", sum);

    return 0;
}
