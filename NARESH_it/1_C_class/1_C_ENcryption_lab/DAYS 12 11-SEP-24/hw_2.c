/**
 * @Author: Dastan Alam
 * @Date:   2024-09-12 10:05:42 AM   10:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-12 10:53:27 AM   10:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

// give number is 102 print one zero two

int main(int argc, char const *argv[])
{
    int n,r=0,rev=0,nr;
    printf("enter the number:");
    scanf("%d",&n);
    printf("the number is:");
    int size=printf("%d",n);
    printf("\n");
    // printf("size=%d\n",size);
    size=size-1;
    while (n!=0)
    {
        r=n%10;
        rev=rev+r*pow(10,size);
        nr=rev%10;
        size--;
        n/=10;
    }
    do
    {
        int or=rev%10;
        switch (or)
        {
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
        case 0:
            printf("zero ");
            break;
        default:
            printf("invalid ");
            break;
        }
        rev/=10;
    } while (rev!=0);
   
    
    return 0;
}
