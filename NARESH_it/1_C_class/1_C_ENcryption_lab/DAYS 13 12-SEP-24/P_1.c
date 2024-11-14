/**
 * @Author: Dastan Alam
 * @Date:   2024-09-12 06:11:24 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-12 06:23:28 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 1 : 
// =======

// Using While loop Write a C program that reads two integers, N1 and N2, from the user. The program should print all the numbers from N1 to N2 (inclusive) in a single line, 
// separated by commas. 

// Example:

// Sample input : N1 = 1 , N2 = 20

// Sample output : 1,2,3,4,5,6,7,8......20

int main(int argc, char const *argv[])
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    while (n1!=n2)
    {
        printf("%d,",n1);
        if (n1>n2) --n1;
        else ++n1;
    }
    printf("%d",n2);
    return 0;
}
