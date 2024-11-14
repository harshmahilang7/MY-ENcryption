/**
 * @Author: Dastan Alam
 * @Date:   2024-09-04 07:42:15 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-04 07:44:49 PM   19:09
 */
#include <stdio.h>

// EligibleForVoteOrNot [ Simple if ]
// Write a C program to read name and age of person and by age check the person is eligible for vote or not using simple (if) only.

// Sample input  : Enter your age: 16
// Sample output : Sorry Kishor you are not eligible to vote.


int main()
{
    int Age;
    char Name[30];
    printf("enter the Name=");
    scanf("%s",&Name);
    printf("enter the age=");
    scanf("%d",&Age);
    if (Age<=18)
    {
       printf("Sorry %s you are not eligible to vote",Name); 
    }
    if (Age>=18)
    {
       printf("Hi %s you are eligible to vote.",Name); 
    }
    return 0;
}
