/**
 * @Author: Dastan Alam
 * @Date:   2024-09-03 07:12:48 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-03 07:19:42 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Write a program in C to input number of years, months, weeks,and days.Find and display number of total days.


int main()
{
    int tdays=0;
    int y,m,w,d;
    printf("enter the year=");
    scanf("%d",&y);
    printf("enter the month=");
    scanf("%d",&m);
    printf("enter the week=");
    scanf("%d",&w);
    printf("enter the days=");
    scanf("%d",&d);
    tdays=(y*365)+(m*30)+(w*7)+d;
    printf("total days= %d",tdays);
    return 0;
}
