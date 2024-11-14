/**
 * @Author: Dastan Alam
 * @Date:   2024-09-14 06:55:00 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-14 07:00:17 PM   19:09
 */
#include <stdio.h>


// Question 3 :
// Write a C program that takes an integer input from the user and calculates the sum of its digits :
// The program should repeatedly extract each digit from the number and add it to the total sum until 
// all digits have been processed.
// Sample input : 1234
// Sample output : The sum of the digits is: 10
// Sample input : 567
// Sample output : The sum of the digits is: 18
// =======================================================================================

int main()
{
    int n,rev,sum=0;
    printf("enter the number:");scanf("%d",&n);
    while (n!=0)
    {
        rev=n%10;
        sum=sum+rev;
        n/=10;
    }
    printf("The sum of the digits is: %d",sum); 
    return 0;
}
