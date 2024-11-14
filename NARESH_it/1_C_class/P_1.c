/**
 * @Author: Dastan Alam
 * @Date:   2024-10-14 09:36:59 AM   09:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-14 09:59:32 AM   09:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int rev(int a)
{
    static int rem=0;
    static int sum=0;
    if (a==0)
    {
        return sum;
    }
    rem=a%10;
    sum=sum*10+rem;
    a=a/10;
    return rev(a);
}

int main(int argc, char const *argv[])
{
    int a=123;
    printf("%d",rev(a));
    return 0;
}
