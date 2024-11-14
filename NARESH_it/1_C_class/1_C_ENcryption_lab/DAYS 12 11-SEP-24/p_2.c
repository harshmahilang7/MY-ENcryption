/**
 * @Author: Dastan Alam
 * @Date:   2024-09-11 06:27:08 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-11 06:44:55 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// accept id from user and display department.
// Write a C program to accept id from user and display department.

// Id: 11 to 15 is Software department

//   16 to 20 is Developer department

//   21 to 23 is Management department
int main(int argc, char const *argv[])
{
    int i;
    scanf("%d",&i);
    switch (i>=21&&i<=23)
    {
    case 1:
        printf("Management department");
        break;
    
    default:
        switch (i>=16&&i<=20)
        {
        case 1:
            printf("Developer department");
            break;
        
        default:
            switch (i>=11&&i<=15)
            {
            case 1:
                printf("Software department");
                break;
            
            default:
                printf("ivalid department");
                break;
            }
            break;
        }
        break;
    }
    return 0;
}
