/**
 * @Author: Dastan Alam
 * @Date:   2024-09-11 07:19:57 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-11 07:30:50 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Write a C program that will ask for a person’s name and his/her game score. Then it will ask for a second person’s name and score. The program will print the winner’s name and also print by how many 

// points that person won by comparing the scores. Develop this program by using switch case.

int main(int argc, char const *argv[])
{
    int f_score,s_score;
    char first_name[10],sec_name[10];
    printf("enter the first person name:");
    scanf(" %s",first_name);
    printf("enter the first person score:");
    scanf(" %d",&f_score); 
    printf("enter the second person name:");
    scanf(" %s",sec_name);
    printf("enter the first person score:");
    scanf(" %d",&s_score);
    switch (s_score>f_score)
    {
    case 1:
        printf("the wins is second person\n");
        printf("the winner name: %s\n",sec_name);
        printf("the score is: %d won by %d\n",s_score,s_score-f_score);
        break;
    
    default:
        printf("the wins is first person \n");
        printf("the winner name : %s\n",first_name);
        printf("the score is: %d won by %d \n",f_score,f_score-s_score);
        break;
    }
    return 0;
}
