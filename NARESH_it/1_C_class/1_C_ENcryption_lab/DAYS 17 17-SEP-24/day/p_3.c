/**
 * @Author: Dastan Alam
 * @Date:   2024-09-17 12:18:13 PM   12:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-28 12:37:21 AM   00:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 3 :
// =======

// Write a C program to find and print all Strong numbers within a given range of two integers, N1 and N2. 
// The program should read N1 and N2 from the user and display all Strong numbers in this range. 

// A strong number is a number in which the sum of the factorials of its digits is equal to the number itself. 
// For example:
// 145 is a strong number because 1!+4!+5!=145.

// Sample input  : N1 = 1 & N2 = 100000
// Sample output :
// Strong numbers between 1 and 100000 are:
// 1
// 2
// 145
// 40585


// #include<stdio.h>  
// int main()    
// {    
//     for (long J = 1; J <= 200 ; J++)
// {
//         long i,fact=1,number=J;   
//         for(i=1;i<=number;i++)
//         {    
//             fact=fact*i;    
//         }    
//   printf("Factorial of %ld is: %ld\n",number,fact);
//     if (number==fact)
//     {
//         printf("%ld\n",number);
//     }
// }return 0;   
// }

int main(){
    int num=40585,save=0;
    while(num!=0)
    {
        int rev=num%10;
        int sum=1;
        while(rev!=0)
        {
        sum=sum*rev;
        rev--;
        }
        num/=10;
        save+=sum;
    }
    printf("%d ",save);
}