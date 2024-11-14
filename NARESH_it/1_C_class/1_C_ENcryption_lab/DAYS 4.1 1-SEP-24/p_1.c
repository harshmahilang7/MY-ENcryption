/**
 * @Author: Dastan Alam
 * @Date:   2024-09-01 06:39:54 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-02 07:35:42 PM   19:09
 */
// WAP swap 4 number with 4 var

#include <stdio.h>
// #include <stdlib.h>
// #include <stdint.h>
// #include <string.h>


int main()
{
    int a=10;
    int b=20;
    int c=30;
    int d=40;
    
    // int a=40;
    // int b=30;
    // int c=20;
    // int d=10;
    
    int temp=d;
    d=a;
    a=temp;

    temp=c;
    c=b;
    b=temp;
    
    printf("%d,%d,%d,%d",a,b,c,d);
    return 0;
}
