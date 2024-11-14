/**
 * @Author: Dastan Alam
 * @Date:   2024-10-06 05:09:03 PM   17:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-06 05:32:35 PM   17:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 3 :
// =======

// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. 
// The digits are ordered from most significant to least significant in left-to-right order. 
// The large integer does not contain any leading 0's.Increment the large integer by one and return the resulting array of digits.


// Sample input: digits = [1,2,3]
// Sample output: [1,2,4]
// Explanation: The array represents the integer 123.
// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].


// Sample input: digits = [9,9,9]
// Sample output: [1,0,0,0]
// Explanation: The array represents the integer 999.
// Incrementing by one gives 999 + 1 = 1000.
// Thus, the result should be [1,0,0,0].


// Sample input: digits = [4,3,2,1]
// Sample output: [4,3,2,2]
// Explanation: The array represents the integer 4321.
// Incrementing by one gives 4321 + 1 = 4322.
// Thus, the result should be [4,3,2,2].

// ============================
int main(int argc, char const *argv[])
{
    int a[]={5,4,2};
    int size=sizeof(a)/sizeof(int);
    int sum=0;
    int f=0;
    for (int i = 0; i <size; i++)
    {
        sum=sum*10+a[i];
    }
    sum=sum+1;
    int num=sum;
    while (sum!=0)
    {
        f++;
        sum/=10;
    }
    int n=f-1;
    while (num!=0)
    {
        a[n]=num%10;
        num/=10;
        n--;
        // a[n--]=num%10; it will also work but remove n--;
    }
    
    for (int i = 0; i < f; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    
    return 0;
}
