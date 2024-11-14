// Que 5 :
// =======

// Write a C program to sort the string data and print it.

// Sample input : Enter a String : apple

// Sample output  : After Sorting the String is : aelpp

// ================================

#include <stdio.h>
int main()
{
    char a[100];
    int i,v,c,n,s;
    v=c=n=s=0;
    printf("enter the string");
    scanf("%s",a);
    for (int i = 0; i<5 ; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
        if (a[i]>a[j])
        {
            char temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
        
    }
    puts(a);
    return 0;
}