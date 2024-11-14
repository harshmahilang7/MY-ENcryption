/**
 * @Author: Dastan Alam
 * @Date:   2024-10-07 06:29:48 PM   18:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-07 07:24:17 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 2 :
// ========
// 
// Write a C program to convert all the character to upper case from a given index to end index. If the given index is not available then print Index is not available.
// 
// Sample input  :
// Enter a String : I am a student
// Enter the starting index number : 4
// Enter the ending index number : 13
// 
// Sample  output : I am A STUDENT
// 
// =========================
int main(int argc, char const *argv[])
{
    
    char a[100];
    printf("Enter a String");
    gets(a);
    printf("Enter the starting index number:");
    int s;scanf("%d",&s);
    printf("Enter the ending index number :");
    int e;scanf("%d",&e);
    
    for (int i = s; i<=e; i++) if (a[i]>='a'&&a[i]<='z') a[i]=a[i]-32; 
    printf("%s",a);
    return 0;
}
