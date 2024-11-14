/**
 * @Author: Dastan Alam
 * @Date:   2024-09-18 11:58:26 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-18 12:00:28 PM   12:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 3 :
// =======

// Write C program to print given pattern.

// A  B  C  D 
// E  F  G  H
// I  J  K  L
// M  N  O  P
// Q  R  S  T

// ======================================


int main(int argc, char const *argv[])
{
    char ch='A';
    int count=4;
    for (int r = 0; r <= count; r++)
    {
        for (int c = 0; c < count; c++)
        {
            printf("%3c",ch);
            ch++;
        }
        printf("\n");
    }
    
    return 0;
}
