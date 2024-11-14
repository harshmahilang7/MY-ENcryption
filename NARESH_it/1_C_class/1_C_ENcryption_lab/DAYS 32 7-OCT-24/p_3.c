/**
 * @Author: Dastan Alam
 * @Date:   2024-10-07 06:44:53 PM   18:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-07 07:35:41 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 3 :
// =======

// Write a C program to convert each word first alphabet to Upper case.

// Sample input  : 
// Enter a String : i am a student of Nareshit

// Sample output  :  I Am A Student Of Nareshit

// =========================

int main(int argc, char const *argv[])
{
    char a[]="i am a Student of Nareshit";
    for (int i = 0; a[i]; i++)
    {
        if (i==0&&a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        else if (a[i]==' '&&a[i+1]>='a'&&a[i+1]<='z')
        {
            a[i+1]=a[i+1]-32;
        }
    }
    printf("%s",a);
    return 0;
}
