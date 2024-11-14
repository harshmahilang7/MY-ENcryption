/**
 * @Author: Dastan Alam
 * @Date:   2024-08-28 06:30:47 PM   18:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-28 07:01:27 PM   19:08
 */
// Que 5 :  Write a 'C' program to print sum of first and last digit of given any 2 digit number
// -------

// Sample input : int number = 23;

// Sample Output : 5

// Explanation : given number is = 23 . so the result is (2+3)=5
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main()
{
    int a=23;
    int b=a/10;
    int c=a%10;
    printf("given number is = %d . so the result is (%d+%d)=%d",a,b,c,(b+c));
    return 0;
}
