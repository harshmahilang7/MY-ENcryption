/**
 * @Author: Dastan Alam
 * @Date:   2024-08-29 06:05:10 PM   18:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-29 06:23:09 PM   18:08
 */

// Que 1 :  Write a 'C' program to find previous multiple of 10 of given 2 digit number only.
// -------

// Sample input : int a = 26;

// Sample Output : 20
                        
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
    printf("%d",((a/10)*10));
    return 0;
}
