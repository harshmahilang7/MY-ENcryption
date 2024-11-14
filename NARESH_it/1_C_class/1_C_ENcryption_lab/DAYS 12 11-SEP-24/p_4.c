/**
 * @Author: Dastan Alam
 * @Date:   2024-09-11 07:06:40 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-11 07:16:34 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Write a C program to take user Id as 1001 and Pasword as 1010. Ask the user to enter his id, if the id is valid

// then ask the user to enter his password ,if the password is correct then print the name of the user, otherwise

// the program will print incorrect Passoword and if the Id doesnot exits, the program will print Incorrect Id.

// develop this program by using Switch case.

int main(int argc, char const *argv[])
{
    int id;
    int pass;
    printf("Enter the id:");
    scanf(" %d", &id);
    switch (id)
    {
    case 1001:
        printf("Enter the Password:");
        scanf("%d",&pass);
        switch (pass)
        {
        case 1010:
            printf("HARSH MAHILANG");
            break;
        
        default:
        printf("the PASSWORD is INvalid");
            break;
        }
        break;
    
    default:
    printf("the id is INvalid");
        break;
    }
    return 0;
}
