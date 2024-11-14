/**
 * @Author: Dastan Alam
 * @Date:   2024-10-14 10:36:54 AM   10:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-18 06:33:59 PM   18:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 1 :
// =======

// Write a program to find and count all palindromic substrings in a given string.

// Sample input : Enter a String : madam

// Sample output   :  Palindromic substring : madam
// malayalam
// 		   Palindromic substring : ada
// 		   Total palindromic substrings are : 2

// =========================
char ispalindromic(char *ch)
{
    int size=0;
    for (size = 0; ch[size]; size++);
    size=size-1;
    int copy_size=size;
    int i=0;
    for (i = 0,size; ch[i]; size--,i++)
    {
        if(ch[size]!=ch[i]) {
            break;
        }
    }
    if(i>size)
    {
        printf("palandrom\n");
        printf("%d",(copy_size/2));
    }
    else 
        printf("not a palandrom");
}
int main(int argc, char const *argv[])
{
    char ch[]="nitin";
    ispalindromic(ch);
    return 0;
}
