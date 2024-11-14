/**
 * @Author: Dastan Alam
 * @Date:   2024-08-29 06:21:19 PM   18:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-29 06:24:20 PM   18:08
 */

// Que 2 :  Write a 'C' program to find next multiple of 10 of given 2 digit number only.
// --------

// Sample input : int a = 34;

// Sample Output : 40
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main()
{
    int a;
    printf("enter the number ");
    scanf("%d",&a);
    // printf("%d",a/10);
    printf("%d",((a/10+1)*10));
    return 0;
}
