/**
 * @Author: Dastan Alam
 * @Date:   2024-10-03 11:34:45 AM   11:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-03 04:28:23 PM   16:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 1 :
// ======

// Write a c Program to check whether two given strings are anagram of each other or not.

// Sample input 1:- listen
// Sample input 2:- silent
// Sample output: this are anagram String

// Sample input 1:- Jack
// Sample input 2:- Jake
// Sample output : this is not are anagram String

// ==============================

int main(int argc, char const *argv[])
{
    char ch1[100]="Jack";
    char ch2[100]="Jake";
    int anagram;
    for (int i=0; ch1[i]; i++){
        for (int j = i+1; ch1[j]; j++)
        {
            if (ch1[i]>ch1[j])
            {
                char t=ch1[j];
                ch1[j]=ch1[i];
                ch1[i]=t;
            }
        }
    }
    for (int i=0; ch2[i]; i++){
        for (int j = i+1; ch2[j]; j++)
        {
            if (ch2[i]>ch2[j])
            {
                char t=ch2[j];
                ch2[j]=ch2[i];
                ch2[i]=t;
            }
            
        }
        
    }
    
    for (int i = 0; ch1[i]; i++)
    {
        if (ch1[i]==ch2[i])
        {
            anagram=1;
        }
        else {anagram=0; break;}
    }
    
    if (anagram==1)
    {
        printf("this are anagram String");
    }
    else printf("this are not anagram String");
    return 0;
}
