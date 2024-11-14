/**
 * @Author: Dastan Alam
 * @Date:   2024-10-14 12:02:04 PM   12:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-17 07:14:10 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 4 :
// ======

// Write a C program to check given String is balanced paraenthesis or not.

// Example 1 :
// -----------
// Sample input : {[()]}
// 			   {[()]}
// 				[]{}
// 				{}[]
// Sample output : balanced paraenthesis 

// Example 2 :
// -----------
// Sample input : (([({})])
// Sample output : not a balanced paraenthesis
char old_check(char * ch)
{
    int flag=0;
    int i=0,j=0;
    for (i = 0; ch[i]; i++);
    int copy_size=i;
    i=i-1;
    char rev[copy_size];
    for (j,i; ch[j];j++,i--)
    {
        rev[j]=ch[i];
    }
    rev[copy_size]='\0';
    // printf("%s ",rev);
    for (int k = 0; ch[k]; k++)
    {
        for (int o = 0; rev[o]; o++)
        {
            if(ch[k]==rev[o])
            {
                flag++;
            }
            
        }
        
    }
    // printf("%d",flag);
    // printf("%d",copy_size);
    if (flag==copy_size+1)
    {
        printf("balanced paraenthesis ");
    }
    else printf("not balanced paraenthesis ");
    
    
    
}

int main(int argc, char const *argv[])
{
    char str[]="{[()]}";
    // int size=sizeof(str);
    old_check(str);
    return 0;
}
