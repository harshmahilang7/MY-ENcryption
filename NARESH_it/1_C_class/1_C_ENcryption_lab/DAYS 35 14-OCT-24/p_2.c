/**
 * @Author: Dastan Alam
 * @Date:   2024-10-14 10:05:54 AM   10:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-14 10:35:15 AM   10:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// int power (int a,int p)
// {
    
//     return result;
// }

int main(int argc, char const *argv[])
{
    int a=2;
    int p=8;
    int num=a*a;
    int result=0;
    int half_p;
    half_p=p/2;
    if (num%2==0)
    {
        while (half_p!=0)
        {
            result+=num*num;
            half_p--;
        }
    }
    else
    {
        while (half_p!=0)
        {
            result+=num*num;
            half_p--;
        }
        result+=num*num;
    }
    printf("%d",result);
    return 0;
}
