/**
 * @Author: Dastan Alam
 * @Date:   2024-08-30 06:05:01 PM   18:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-30 07:03:46 PM   19:08
 */
// Que 2 : Write a 'C' program to take the number of days and convert into (days:months:years)
// -------
// 
// Sample input  : int days = 500
// 
// Sample Output :  1 year 4 month and 15 days. 
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int days;
    printf("enter the days");
    scanf("%d",&days);
    int y=days/365;
    int m=days%365/30;
    // int w=days%365%30/7;
    // int d=days%365%30%7;
    int d=days%365%30;
    printf("%d year %d month and %d days. ",y,m,d);    
    return 0;
}
