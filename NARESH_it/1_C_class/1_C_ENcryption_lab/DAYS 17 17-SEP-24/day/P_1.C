/**
 * @Author: Dastan Alam
 * @Date:   2024-09-17 11:20:01 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-17 11:57:39 AM   11:09
 */
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdint.h>
// #include <string.h>

// Write a C program to find and print all Prime numbers within a given range of two integers, N1 and N2.
// The program should read N1 and N2 from the user and display all Prime numbers in this range.

// Sample input : N1 = 1 & N2 = 20
// Sample output : 2, 3, 5, 7, 11, 13, 17, 19

// int main(int argc, char const *argv[])
// {
//     int n, f, i;
//     for (int j = 1; j < 20; j++)
//     {
//     for (i = 2; i < j/2; i++)
//     {
//         if(j%i!=0) f=j;
//     }
//     printf("%d ",f);
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
   int i, num, n, count;
   printf("Enter the range: ");
   scanf("%d", &n);
   printf("The prime numbers in between the range 1 to %d:",n);
   for(num = 1;num<=n;num++){
      count = 0;
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            count++;
         break;
      }
   }
   if(count==0 && num!= 1)
      printf("%d ",num);
   }
   return 0;
}
