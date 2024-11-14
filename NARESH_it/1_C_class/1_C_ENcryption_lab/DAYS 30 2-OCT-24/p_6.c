// Que 6 :
// =======

// Write a c program to check the String is Palindrome  or Not .

// Sample input : madam

// Sample output : madam is a palindrome

// ================================

#include <stdio.h>
int main()
{
    char a[100],b[100];
    int i,j,f=0;
    printf("enter the string");
    scanf("%s",a);
    for (i = 0; a[i]; i++)
    // printf("%d",i);
    for (b[i--]='\0',j=0; i>=0 ; i--,j++)
    {
        b[j]=a[i];
    }
    puts(a);
    puts(b);
    for (int z = 0; a[z]; z++)
    {
        if (a[z]==b[z])
        {
            f=1;
        }
        else {f=0;break;}
    }
    if (f==1)
    {
       printf("%s is a palindrome",a);
    }
    else printf("%s is not a palindrome");
    
    
    return 0;
}