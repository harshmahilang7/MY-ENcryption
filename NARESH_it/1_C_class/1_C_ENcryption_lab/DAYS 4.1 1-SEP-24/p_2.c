/**
 * @Author: Dastan Alam
 * @Date:   2024-09-01 06:59:42 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-01 07:02:27 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// WAP swap 4 number without 4 var

int main(int argc, char const *argv[])
{
    int a=10;
    int b=20;
    int c=30;
    int d=40;

    a=a+d;
    d=a-d;
    a=a-d;

    b=b+c;
    c=b-c;
    b=b-c;
        
    printf("%d,%d,%d,%d",a,b,c,d);
    return 0;
}
