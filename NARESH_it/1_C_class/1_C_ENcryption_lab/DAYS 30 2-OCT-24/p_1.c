// Que 1 :
// =======

// Write a C program to print the reverse of a given String .

// Example :
// Sample input  : "Welcome"
// Sample output : emocleW 

// ===============
// =================
#include <stdio.h>
int main()
{
    char a[100];
    int i=5;
    printf("enter the string");
    gets(a);
    puts(a);
    do
    {
        printf("%c",a[i]);
        i--;
    }while (i>=0);
    
    return 0;
}