/**
 * @Author: Dastan Alam
 * @Date:   2024-10-02 06:48:57 PM   18:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-03 12:10:38 PM   12:10
 */
// ue 3 :
// =======

// Write a C program to count the Count the vowel, Consonant, Digit and Special Character in a given String .

// Sample input : 
// Enter a String : Nareshit@123

// Sample output  :
// Vowel count is : 3
// Consonant count is : 5
// Digit count is : 3
// Special Character count is : 1

// ================================

#include <stdio.h>
int main()
{
    char a[100];
    int i,v,c,n,s;
    v=c=n=s=0;
    printf("enter the string");
    // gets(a);
    // puts(a);
    scanf("%s",a);
    
    for (int i = 0; a[i]; i++)
    {
        if (a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
        {
            if (a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u') v++;
            else c++; 
        }
        else if(a[i]>='0'&&a[i]<='9') n++;
        else s++;
    }
    printf("Vowel count is : %d\n",v);
    printf("Consonant count is : %d\n",c);
    printf("Digit count is : %d\n",n);
    printf("Special Character count is : %d\n",s);
    return 0;
}
