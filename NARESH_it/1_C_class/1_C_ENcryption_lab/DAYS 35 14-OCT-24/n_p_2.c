/**
 * @Author: Dastan Alam
 * @Date:   2024-10-14 10:58:12 AM   10:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-14 11:44:53 AM   11:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 2 :
// =======

// Write a C Program to Display All Characters Present in the Prime Position of a String.

// Sample input  : today is wednesday
// Sample output  : da sdey

// =========================

int isprime(int size,char *ch)
{
    int range=size;
    for (int i = 2; i <range; i++)
    {
        int prime=1;
        for (int j = 2; j <i; j++)
        {
            if (i%j==0)
            {
                prime=0;
                break;
            }  
        }
        if (prime==1)
        {
            printf("%c",ch[i]);
        }    
    }
}

int main(int argc, char const *argv[])
{
    char str[]="today is wednesday";
    int size=sizeof(str);
    // printf("%d",size);
    isprime(size,str);

    return 0;
}
