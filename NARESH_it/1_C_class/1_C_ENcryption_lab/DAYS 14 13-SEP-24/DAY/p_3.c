/**
 * @Author: Dastan Alam
 * @Date:   2024-09-13 11:30:59 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-13 11:35:05 AM   11:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 3 :
// =======
// 
// Write a C program that reads an integer from the user and prints the count of digits in the given number. 
// The program should handle both positive and negative numbers.
// 
// Example :
// 
// Sample input1  : 12348
// Sample output1 : 5
// 
// 
// Sample input2  : -129
// Sample output2 : 3
// 
// Sample input3  : 0
// Sample output3 : 1
// 
// ============================================================
// 

int main(int argc, char const *argv[])
{
    int num=0,size=0;
    do
    {
        /* code */
        num/=10;
        size++;
    }while (num!=0);
    printf("the no of digit :%d",size);
    return 0;
}
