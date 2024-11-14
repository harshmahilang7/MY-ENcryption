/**
 * @Author: Dastan Alam
 * @Date:   2024-09-12 06:24:37 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-12 06:52:40 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 3 :
// =======

// Write a C program that reads a choice from the user and performs one of the following operations based on the choice:

// Case 1: Print all small letters from a to z.
// Case 2: Print all small letters from z to a in reverse order.
// Case 3: Print all capital letters from A to Z.
// Case 4: Print all capital letters from Z to A in reverse order.

// The program should use a switch statement to execute the proper case based on the user's choice, and use while loop to print the alphabets.
// If the user enters an invalid choice, the program should display an error message.

// Example:

// Sample input :

// Menu:
// 1. Print small letters from a to z
// 2. Print small letters from z to a
// 3. Print capital letters from A to Z
// 4. Print capital letters from Z to A

// Enter your choice (1-4): 2

// Sample output :  z y x w v u t s r q p o n m l k j i h g f e d c b a

int main(int argc, char const *argv[])
{
    /* code */
    int c;
    printf("\t\tMenu:\n");
    printf("1. Print small letters from a to z\n");
    printf("2. Print small letters from z to a\n");
    printf("3. Print capital letters from A to Z\n");
    printf("4. Print capital letters from Z to A\n");
    printf("Enter your choice (1-4):");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        /* code */
        char ch = 'a';
        while (ch != '{')
        {
            printf(" %c", ch);
            ch++;
        }
        break;
    case 2:
        ch = 'z';
        while (ch != '`')
        {
            printf(" %c", ch);
            ch--;
        }
        break;
    case 3:
        ch = 'A';
        while (ch != '[')
        {
            printf(" %c", ch);
            ch++;
        }
        break;
    case 4:
        ch = 'Z';
        while (ch !=64)
        {
            printf(" %c", ch);
            ch--;
        }
        break;
    default:
        printf("invalid");
        break;
    }
    return 0;
}
