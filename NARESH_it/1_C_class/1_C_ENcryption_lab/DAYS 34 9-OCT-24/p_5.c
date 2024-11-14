/**
 * @Author: Dastan Alam
 * @Date:   2024-10-10 12:11:35 PM   12:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-14 06:43:02 PM   18:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 5 :
// =======

// Using pointer and function Write a C program to check a phrase is a palindrome if, 
// after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, 
// it reads the same forward and backward. Alphanumeric characters include letters and numbers. Given a string s, 
// return true if it is a palindrome, or false otherwise.

// Example 1 :
// Sample input : "A man, a plan, a canal: Panama"
// Sample output: true
// Explanation : "amanaplanacanalpanama" is a palindrome.


// Example 2 :
// Sample input: "race a car"
// Sample output: false
// Explanation: "raceacar" is not a palindrome.


int palindrome(char *ch)
{
    int size=0;
    int val=0;
    for (int i = 0; ch[i]; i++)
    {
        size++;
    }
    for (int i = 0,j=size-1; ch[i]; j--,i++)
    {
        if (ch[j]==ch[i]) val=1;
        else val=0;
        
    }
    return val;
    
    
}
char *convert_alphanum(char *ch)

{
    int size=0;
    // size=sizeof(ch); why not work 
    // printf("%d",size);
    for (int i = 0; ch[i]; i++)
    
    {
        size++;
    }
    
    char *b = (char *)malloc((size + 1));  // explain 
    
    
    int c=0;
    for (int i = 0; ch[i]; i++)
    {
        if(ch[i]>='a'&&ch[i]<='z'||(ch[i] >= '0' && ch[i] <= '9'))
        {
            b[c]=ch[i];
            c++;
        }
    }
    b[c] = '\0'; 
    return b;
    
}
void isLower(char *ch){
    for (int i = 0;ch[i];i++)
    {
        if (ch[i]>='A'&&ch[i]<='Z')
        {
            ch[i]=ch[i]+32;
        }
    }
}
int main(int argc, char const *argv[])
{
    char a[]="race a car";
    // int size=sizeof(a)/sizeof(char);
    // printf("size %d\n",size);
    isLower(a);
    char* converted=convert_alphanum(a);
    
    if (palindrome(converted)==1)
    {
        printf("true");
    }
    else printf("false");
    
    return 0;
}
