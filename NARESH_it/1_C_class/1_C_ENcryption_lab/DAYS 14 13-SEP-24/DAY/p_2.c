/**
 * @Author: Dastan Alam
 * @Date:   2024-09-13 11:18:42 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-13 12:11:43 PM   12:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 2 :
// =======

// Write a C program that reads a positive integer N from the user and calculates the sum of even and odd numbers between 1 and N using a while loop. 
// The program should then print the sum of even numbers and the sum of odd numbers.

// NOTE : If user entered negative input then print "Invalid Input" message.


// Example_1 :

// Sample input  : N = -10;

// Sample output : Invalid Input

// Example_2 :
// 
// Sample input  : N = 10;
// 
// Sample output : even sum => 2 + 4 + 6 + 8 + 10 = 30 
                // odd sum  => 1 + 3 + 5 + 7 + 9 = 25
int main(int argc, char const *argv[])
{
    int num,sum_even=0,sum_odd=0,c;
    printf("enter the number=");
    scanf("%d",&num);
    c=num;
    if (num<0)
    {
        printf("Invalid input");
    }
    else
    {
    while (num!=0)
    {
        if (num%2==0) sum_even+=num;
        else sum_odd+=num;
        num--;
    }
    printf("the sum of 1 to %d even number :%d\n",c,sum_even);
    printf("the sum of 1 to %d odd number :%d\n",c,sum_odd);
    }
 
    return 0;
}

// int main(int argc, char const *argv[])
// {
    // int num,sum_even=0,sum_odd=0,c;
    // printf("enter the number=");
    // scanf("%d",&num);
    // c=num;
    // while (num>=0)
    // {
        // if (num%2==0)
        // {
        //    
            // sum_even+=num;
        // }
        // else
        // {
            // sum_odd+=num;
        // }
        // num--;
    // }
    // printf("the sum of 1 to %d even number :%d\n",c,sum_even);
    // printf("the sum of 1 to %d odd number :%d\n",c,sum_odd);
    // 
    // printf("invalid");
    // return 0;
// 
// }
// 
