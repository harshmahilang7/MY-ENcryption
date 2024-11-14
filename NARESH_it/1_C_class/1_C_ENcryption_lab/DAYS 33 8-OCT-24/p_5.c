/**
 * @Author: Dastan Alam
 * @Date:   2024-10-08 07:10:58 PM   19:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-08 07:29:05 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 5 :
// =======

// Write a C program to check given String is palindrom or not using function.

// -> create int main() function.
// -> create int isPalindromString(char str[]) function. this function will check given string is palindrom or not and return (true if the string is a palindrome, false otherwise).
// -> in main function read one string input and call isPalindromString function. and print the result.

// Sample input : radar
// Sample output : The string is a palindrome.

// Sample input : hello
// Sample output : The string is not a palindrome.

// =================================


int isPalindromString(char str[])
{
    char a[100];
    for (int k = 0; str[k] ; k++)
    {
        a[k]=str[k];
    }
    char b[100];
    int len,i,y,f;
    for (len = 0 ; str[len]; len++);
    for (y=len-1,i = 0 ; str[i];y--, i++)
    {
        b[i]=a[y];
    }
    for (int q = 0; str[q]; q++)
    {
        if (a[q]==b[q]) f=1;
        else f=0;
    }
    if (f==1)
    {
        return 1;
    }
    else 0;
    
    
}
int main(int argc, char const *argv[])
{
    char a[100]="radar";
    int x=isPalindromString(a);
    if (x==1)
    {
        printf("The string is a palindrome");
    }
    else printf("The string is not a palindrome.");
    return 0;
}
