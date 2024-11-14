/**
 * @Author: Dastan Alam
 * @Date:   2024-10-03 06:32:38 PM   18:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-03 06:52:34 PM   18:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 2 :
// =======

// Write a C program to combine two string in a single String.
// ---------
// Sample input :
// Enter first String : Naresh
// Enter Second String : it

// Sample output :Resulting String is : Nareshit

// ==================

int main(int argc, char const *argv[])
{
    int i,j;
    char a[100]="harsh";
    char b[100]=" mahilang";
    for (i = 0; a[i]; i++);
    for (i,j =0; b[j] ; j++,i++)a[i]=b[j];
    puts(a);
    return 0;
}
