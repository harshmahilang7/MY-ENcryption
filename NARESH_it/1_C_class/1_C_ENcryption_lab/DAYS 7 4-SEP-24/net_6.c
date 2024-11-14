/**
 * @Author: Dastan Alam
 * @Date:   2024-09-04 07:29:14 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-04 07:31:37 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Write a C program to read name and age of person and by age check the person is eligible for vote or not using if-else.



// Sample input  : Enter your name: Kishor
//                 Enter your age: 16
// Sample output : Sorry Kishor you are not eligible to vote.

int main()
{
    int Age;
    char Name[30];
    // char Name[]={}; it is working char Name[]="harsh";
    printf("enter the Name=");
    scanf("%s",&Name);
    printf("enter the age=");
    scanf("%d",&Age);
    // printf("%s %d",Name,Age);
    if (Age<=18)
    printf("Sorry %s you are not eligible to vote",Name);
    else
    printf("Hi %s you are eligible to vote.",Name); 
    return 0;
}
