/**
 * @Author: Dastan Alam
 * @Date:   2024-10-07 06:24:13 PM   18:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-07 07:03:25 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 1 :
// =======

// Write a C program to remove all the Spaces from a given String.

// Sample input : Enter a String : Black cat on a mat
// Sample output : Blackcatonamat

// =========================

int main(int argc, char const *argv[])
{
    char a[] = "Black cat on a mat";
    
    for (int i = 0; a[i]; i++)
    {
        for (int j = 0; a[j];j++)
        {
            if (a[j] == ' ')
            {
                char temp=a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    printf("%s", a);
    return 0;
}
