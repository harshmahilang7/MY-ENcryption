/**
 * @Author: Dastan Alam
 * @Date:   2024-10-15 12:19:00 PM   12:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-19 12:16:48 PM   12:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 3 :
// =======

// Write a C Program to Remove Characters in Second String which are present in First String.

// Sample input : apple
// Sample input : aeroplane

// Sample output as : ron

// =======================

int main(int argc, char const *argv[])
{
    char str1[] = "apple";
    char str2[] = "aeroplane";
    int k = 0;
    for (int i = 0; str2[i]; i++)
    {
        int f = 0;
        for (int j = 0; str1[j]; j++)
        {
            if (str2[i] == str1[j])
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            str2[k] = str2[i];
            k++;
        }
        str2[k] = '\0';
    }

    printf("%s", str2);
    return 0;
}
