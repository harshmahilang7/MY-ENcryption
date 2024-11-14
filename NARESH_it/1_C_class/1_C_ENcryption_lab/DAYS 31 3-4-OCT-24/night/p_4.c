/**
 * @Author: Dastan Alam
 * @Date:   2024-10-03 06:49:21 PM   18:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-03 07:31:17 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char a[100]="100";
    char b[100]="15";
    // int i=(int)a[1];
    int x,y;
    // sscanf(&a,"%d",&i);  only char to int

    x=atoi(a);
    y=atoi(b);
    printf("%d",x*y);
    return 0;
}
