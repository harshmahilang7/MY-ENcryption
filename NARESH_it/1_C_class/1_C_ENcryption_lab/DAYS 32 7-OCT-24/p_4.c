/**
 * @Author: Dastan Alam
 * @Date:   2024-10-07 07:08:24 PM   19:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-07 07:11:16 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 4 :
// =======

// Write a C program to remove given character from a String.

// Sample input : 
// Enter a String : Bookstore
// Enter the character you want to remove : o

// Sample output : Resulting String is : Bkstre

int main(int argc, char const *argv[])
{
    char a[]="Bookstore";
    for (int i = 0; a[i]; i++)
    {
        for (int j = 0; a[j]; j++)
        {
            if (a[j]=='o')
            {
                char temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
        
    }
    printf("%s",a);
    return 0;
}
