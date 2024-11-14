/**
 * @Author: Dastan Alam
 * @Date:   2024-10-03 12:33:11 PM   12:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-03 07:38:19 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


// Que 3 :
// =======

// Write a C program to swap first and last character of given String.

// Sample input : "Welcome"
// Sample output : eelcomW

// ==============================
int main(int argc, char const *argv[])
{
    char ch[100]="Welcome";
    int i;
    for (i=0; ch[i]; i++);
    char temp=ch[i-1];
    ch[i-1]=ch[0];
    ch[0]=temp;
    puts(ch);
    return 0;
}
