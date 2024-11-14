/**
 * @Author: Dastan Alam
 * @Date:   2024-08-28 06:33:56 PM   18:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-28 06:35:00 PM   18:08
 */
// Que 6 :  Write a 'C' program to print sum of first and last digit of given any 3 digit number
// -------

// Sample input : int number = 123;

// Sample Output : 4

// Explanation : given number is = 123 . so the result is (1+3)=4
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main()
{
    int a=123;
    int b=a/100;
    int c=a%10;
    printf("given number is = %d . so the result is (%d+%d)=%d",a,b,c,(b+c));
    return 0;
}
