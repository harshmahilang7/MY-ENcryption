/**
 * @Author: Dastan Alam
 * @Date:   2024-10-08 12:11:21 PM   12:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-08 12:41:19 PM   12:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(int x) 
{
    // Step 1: Negative numbers are not palindromes
    if (x < 0) {
        return false;
        
    int n=x;
    int rem,sum=0;
    while (n!=0)
    {
       rem=n%10;
       sum=sum*10+rem;
       n/=10;
    }
    if (sum==x)printf("true");
    else printf("flase");
    }

}
int main()
{
    isPalindrome(-121);
    return 0;
}
    // int x=-121;
    // int n=x;
    // int rem,sum=0;
    // while (n!=0)
    // {
    //    rem=n%10;
    //    sum=sum*10+rem;
    //    n/=10;
    // }
    
    // if (x>0)
    // {
    //     sum=sum+'-';
    // }
    // printf("%d",sum);
    
    // if (sum==x)printf("true");
    // else printf("flase");
    // return 0;




// #include <stdbool.h>

// bool isPalindrome(int x) {
//     // Step 1: Negative numbers are not palindromes
//     if (x < 0) {
//         return false;
//     }
    
//     // Step 2: Store the original value of x and reverse the number
//     int original = x;
//     int reversed_num = 0;

//     while (x > 0) {
//         int digit = x % 10;  // Get the last digit
//         if (reversed_num > (2147483647 - digit) / 10) { // Handle integer overflow
//             return false;
//         }
//         reversed_num = reversed_num * 10 + digit;  // Add the digit to the reversed number
//         x /= 10;  // Remove the last digit from x
//     }
    
//     // Step 3: Compare original number with reversed number
//     return original == reversed_num;
// }

// int main() {
//     int num = -121;  // You can test with any number
//     if (isPalindrome(num)) {
//         printf("%d is a palindrome\n", num);
//     } else {
//         printf("%d is not a palindrome\n", num);
//     }
    
//     return 0;
// }
