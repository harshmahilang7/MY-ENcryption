/**
 * @Author: Dastan Alam
 * @Date:   2024-08-27 07:00:21 PM   19:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-28 11:08:26 AM   11:08
 */
// WAP swap 2 number without 3rd var
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10;
    int b=20;
    printf("a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping\n");
    printf("a=%d and b=%d\n",a,b);
    return 0;
}