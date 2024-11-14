/**
 * @Author: Dastan Alam
 * @Date:   2024-08-28 06:26:40 PM   18:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-28 06:42:12 PM   18:08
 */


// Que 4 :  Write a 'C' program to print Addition of any two positive numbers without using (+) operator.
// -------

// Sample input : int a = 10, b=20;

// Sample Output : Addition is 30    
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main()
{
    int a=10, b=20;
    printf("Two positive numbers without using (+) operator\n");
    printf("Addition is=%d",a-(-b));
    return 0;
}
