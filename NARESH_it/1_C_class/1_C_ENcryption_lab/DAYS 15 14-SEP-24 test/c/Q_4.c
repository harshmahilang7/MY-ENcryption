/**
 * @Author: Dastan Alam
 * @Date:   2024-09-14 06:47:52 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-14 06:54:55 PM   18:09
 */
#include <stdio.h>
// Question 4 :
// Write a simple C program that reads an integer from the user and prints the multiplication table 
// of the given number using a while loop :
// Example :
// Sample input : N = 5
// Sample output :
// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15
// 5 x 4 = 20
// .....
// .....
// 5 x 10 = 50
// =======================================================================================

int main(int argc, char const *argv[])
{
    int n,i=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d X %d = %d\n",n,i,n*i);
        i++;
    }
    return 0;
}
