/**
 * @Author: Dastan Alam
 * @Date:   2024-09-02 06:16:16 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-02 07:15:51 PM   19:09
 */

// Que 1 :
// ========

// Write a C program using the ternary operator to calculate the electricity bill for a given number of units consumed by a customer.
// For the first 100 units, the rate is Rs. 3.00 per unit.
// For any additional units beyond 100, the rate is Rs. 4.50 per unit.

// Example 1: Units consumed less than or equal to 100
// Sample Input: units consumed : 75
// Sample Output: The total electricity bill is: Rs. 225.00
        
// Example 2: Units consumed more than 100
// Sample Input: units consumed: 150
// Sample Output: The total electricity bill is: Rs. 525.00
        
// Example 3: Units consumed exactly 0
// Sample Input: units consumed: 0
// Sample Output: The total electricity bill is: Rs. 0.00

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    float units_consumed;
    printf("enter the units consumed: ");
    scanf("%f",&units_consumed);
    (units_consumed<=100)?printf("The total electricity bill is:%.2f",units_consumed*3):printf("The total electricity bill is:%.2f",(float)(100*3)+(float)(units_consumed-100)*4.5);
    return 0;
}
