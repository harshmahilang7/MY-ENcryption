// Que 4 :
// =======

// Write a C program to check is the String contains any vowel or not.

// Sample input  : Enter a String : Apple
// Sample output  : This String contains vowel.

// Sample input : Enter a String : Rhythm
// Sample output  : There is no vowel present in this String.

// ================================

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(){
    char a[100];
    int i,v,c,n,s;
    v=c=n=s=0;
    printf("enter the string");
    scanf("%s",a);
    for (int i = 0; a[i]; i++)
    {
        if (a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
        {
            if (a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u') {v++; break;}
            else c++; 
        }  
    }
    if (v==1)
    {
        puts("This String contains vowel.");
    }
    else puts("There is no vowel present in this String.");          
    return 0;

}
