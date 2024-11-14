/**
 * @Author: Dastan Alam
 * @Date:   2024-09-11 06:46:51 PM   18:09
 * @Last Modified by:   Dastan Alam
//  * @Last Modified time: 2024-09-12 07:11:59 PM   19:09
//  */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// 
// Banking
// Develop below program using switch case)
// 
// Write a C program that will read a float and a character from console. The character could be d for deposit or w for withdrawal.
// 
// Starting with a Minimum balance of 2000.
// 
// 
// 
// *Ask the user to initialize the minimum balance and don't allow 0 and -ve values if it is 0 or -ve then print "Ammount Can't be stored".
// 
// 
// 
// *If the user want deposit operation then ask how much ammount he want to deposit and add that ammount
// 
//  with balance and print the balance.
// 
// *if the user want withdrwal operation then ask how much ammount he want to withdrwal and substract that 
// 
//  ammount from the balance and print the balance.
// 
// 
// 
// [Note: If the deposit ammount is negetive or 0 print "Invalid ammount".
// 
    // If the withdrawl ammount is negetive , 0 or greater than balance then print "Invalid ammount"]
// 
// 
// 
// Hints:
// 
// -------
// 
// Declare variables for the amount in float, balance in float and transaction code in char types.
// 
// 
// 
// Test the transaction code, if ‘d’ it is deposit. Test the ammount so that it is not negative.
// 
// If the balance is not negative or positive sum-up
// 
// the balance.
// 
// balance = balance + amount;
// 
// Test the transaction code for withdrawal, ‘w’. If the transaction code is ‘w’
// 
// Minus the withdrawn amount to update the
// 
// balance.
// 
// balance = balance - amount;
// 
// And print the balance.

int main(int argc, char const *argv[])
{
    float amount,balance;
    float dipo=0;
    char transaction;
    pay:
    printf("Enter the initial balance:");
    scanf("%f",&balance);
    if (balance<2000.00) 
    {
        printf("min 2000 rs must\n");
        goto pay;
    }
    transaction:
    printf("Enter transaction type (d for deposit, w for withdrawal):");
    scanf(" %c",&transaction);
    switch (transaction)
    {
    case 'w': case 'W':
        withdrawal:
        printf("Enter the amount to Withdrawal:");
        scanf(" %f",&dipo);
        if (dipo>balance)
        {
            printf("balance Insufficient.\n");
            goto withdrawal;
        }
        balance = balance - dipo;
        printf("the balance= %.2f",balance);
        break;
    case 'D': case 'd':
        printf("Enter the amount to deposit:");
        scanf(" %f",&dipo);
        balance = balance + dipo;
        printf("the balance= %.2f",balance);
        break;
    default:
    printf("invalid only acept w and d");
    goto transaction;
        break;
    }
    return 0;
}
