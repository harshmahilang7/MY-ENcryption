/**
 * @Author: Dastan Alam
 * @Date:   2024-09-02 06:59:35 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-02 07:50:45 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 4 :
// =======
// Write a Cprogram to print sum of N natural numbers without using loops.

// Sample input : int n = 10
// Sample output : 55

// int main(int argc, char const *argv[])
// {
//     int s=0;
//     int save=0;
//     int n;
//     printf("input the last digit=");
//     scanf("%d",&n);
    
//     start:
//     if (s<n)
//     {
//         s++;
//         save=s+save;
//         goto start;
//     }
    
//     printf("%d",save);
//     return 0;
// }

int main(int argc, char const *argv[])
{
    int n;
    printf("input the last digit=");
    scanf("%d",&n);
    int sum=n*(n+1)/2;
    printf("%d",sum);
    return 0;
}