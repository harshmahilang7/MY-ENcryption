/**
 * @Author: Dastan Alam
 * @Date:   2024-08-29 07:28:05 PM   19:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-30 11:53:29 AM   11:08
 */

// Que 10 :  Write a 'C' program to reverse the given 3 digit number without using control statments.
// --------

// Sample input : int a = 123;
// Sample Output : reverse =  321

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// printing without saving 

// int main(int argc, char const *argv[])
// {
//     int a;
//     printf("enter the nmber");
//     scanf("%3d",&a);
//     printf("the number is %d\n",a);
//     printf("%d",a%10);
//     a=a/10;
//     printf("%d%d",a%10,a/10);
//     return 0;
// }

// printing with saving in one var 

int main(int argc, char const *argv[])
{
    int a;
    printf("enter the nmber");
    scanf("%3d",&a);
    printf("the number is %d\n",a);
    int c=(a%10)*100;
    a=a/10;
    c=c+(a%10)*10+a/10;
    printf("the number is %d",c);
    return 0;
}