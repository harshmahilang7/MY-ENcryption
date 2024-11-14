/**
 * @Author: Dastan Alam
 * @Date:   2024-08-27 07:10:11 PM   19:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-28 11:08:50 AM   11:08
 */
// WAP add 2 number without + operater 
// input a=10 b=20; output= 30
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=50;
    int b=20;
    // int c=-b-a;
    // c=-c;
    // printf("a=%d and b=%d and sum of a and b is c=%d",a,b,c);
    printf("a=%d and b=%d and sum of a and b is c=%d",a,b,a-(-b));
    return 0;
    
}