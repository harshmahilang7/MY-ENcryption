/**
 * @Author: Dastan Alam
 * @Date:   2024-09-13 12:18:33 PM   12:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-13 12:28:25 PM   12:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// find the position of the given number

int main(int argc, char const *argv[])
{
    /* code */
    long num ;int size,s_num,f=0;
    printf("enter n value");scanf("%d",&num);
    printf("enter the search number:"); scanf("%d",&s_num);
    size=printf("%ld",num);
    printf("\r");
    if (num<0) size--;
    while (num!=0)
    {
        if (num%10==s_num) printf("%d is in %d position\n",s_num,size,f=1);
        size--;
        num/=10;
    }
    if (f==0)
    {
        printf("%d is not found\n",s_num);
    }
    
    
    return 0;
}
