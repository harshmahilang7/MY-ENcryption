/**
 * @Author: Dastan Alam
 * @Date:   2024-09-10 10:10:21 PM   22:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-12 12:19:49 PM   12:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// find the first and last  value 

// int main(int argc, char const *argv[])
// {
//     long a,c;
//     printf("enter the number =");scanf("%ld",&a);
//     c=a;
//     int size=0;
//     int last_digit=a%10;
//     printf("last digit = %d\n",last_digit);
//     do
//     {
//         size++;
//         a=a/10;
//     } while (a!=0);
//     // printf("no of digit = %d\n",size);
//     for (int i = 0; i < size-1; i++)
//     {
//         c=c/10;
//     }
//     printf("first digit = %d\n",c);

//     return 0;
// }

int main()
    {
        long n;
        printf("enter the number"); scanf("%ld",&n);
        printf("the last digit is: %ld\n",n%10);
        // if (n>9||n<-9) n=n/10;
        while (n>9||n<-9) 
        n=n/10;
        printf("the first number is: %ld",n);
        return 0;
    }

