/**
 * @Author: Dastan Alam
 * @Date:   2024-08-29 06:23:36 PM   18:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-29 06:54:29 PM   18:08
 */

// Que 3 :   Without using control statments Write a C program to determine the next or previous multiple of 10 for a given two-digit number. 
// --------  
//           The program should follow these rules:
//           If the last digit of the given number is greater than or equal to 5, the program should print the next multiple of 10.
//           If the last digit of the given number is less than 5, the program should print the previous multiple of 10..


// Sample Input1  : int a = 34;
// Sample Output1 : 30 

// Sample Input2  : int  a = 25;
// Output2 : 30

// Sample Input3  : int a = 86;
// Sample Output3 : 90
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main()
{
    int a;
    printf("enter the number ");
    scanf("%d",&a);
    // printf("%d",a%10);
    // printf("%d",a%10);
    a%10<5 && printf("%d",((a/10)*10)) || printf("%d",((a/10+1)*10));
    return 0;
}
