/**
 * @Author: Dastan Alam
 * @Date:   2024-09-13 07:18:24 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-13 10:20:56 PM   22:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 5 :
// =======
// Write a C program that converts a given integer into its corresponding word representation for each digit. 
// The program should take an integer as input and output each digit of the number in words, separated by spaces.
// Sample input  : 1256
// Sample output : one two five six
int main(int argc, char const *argv[])
{
    int n,rev=1,r=1,i;
    printf("enter the number");
    scanf("%d",&n);
    while (n!=0)
    {
        rev=n%10;
        r=r*10+rev;
        n/=10;
    }
    n=r;
    while (n!=1)
    {
        i=n%10;
        if(i==1) printf("one ");
        else if (i==2) printf("two ");
        else if (i==3) printf("three ");
        else if (i==4) printf("four ");
        else if (i==5) printf("five ");
        else if (i==6) printf("six ");
        else if (i==7) printf("seven ");
        else if (i==8) printf("eight ");
        else if (i==9) printf("nine ");
        else if (i==0) printf("zero ");
        else printf("invalid");
        n/=10;
    }
    
    return 0;
}
