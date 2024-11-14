/**
 * @Author: Dastan Alam
 * @Date:   2024-09-29 10:42:18 PM   22:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-29 10:55:25 PM   22:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Eg1: finding no of words in given sentence.
// i miss you janna

int main(int argc, char const *argv[])
{
    char a[100]="i miss you janna";
    int size,word=0;
    size=printf("%s",a);
    printf("\n");
    for (int i = 0; i <= size; i++)
    {
        if (a[i]==' ')
        {
            ++word;
        }
    }
    printf("this contain %d words",++word);
    return 0;
}
