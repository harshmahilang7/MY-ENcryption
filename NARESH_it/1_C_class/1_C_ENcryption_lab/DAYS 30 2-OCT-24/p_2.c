// Que 2 :
// =======

// Write a C program to count the number of alphabet present in a given String .

// Sample input  : Apple

// Sample output  : The count of alphabet is : 5

// ================================


#include <stdio.h>
int main()
{
    char a[100];
    int i=0;
    printf("enter the string");
    gets(a);
    puts(a);
    do
    {
        i++;
    }while (a[i]!='\0');
    printf("the string content have %d",i);
    return 0;
}