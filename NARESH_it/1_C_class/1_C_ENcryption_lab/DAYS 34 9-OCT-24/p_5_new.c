/**
 * @Author: Dastan Alam
 * @Date:   2024-10-12 10:39:26 PM   22:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-12 10:39:28 PM   22:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

char *convert_alphanum(char *ch)
{
    int size = 0;
    
    // Calculate the length of the input string
    for (int i = 0; ch[i]; i++)
    {
        size++;
    }

    // Allocate memory for the new string dynamically
    char *b = (char *)malloc((size + 1) * sizeof(char)); // +1 for the null terminator

    if (b == NULL) // Check for memory allocation failure
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    int c = 0;

    // Copy only alphanumeric characters to the new string
    for (int i = 0; ch[i]; i++)
    {
        if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= '0' && ch[i] <= '9')) // Include numbers too
        {
            b[c] = ch[i];
            c++;
        }
    }

    b[c] = '\0'; // Null-terminate the string
    return b;
}

void isLower(char *ch)
{
    for (int i = 0; ch[i]; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ch[i] = ch[i] + 32; // Convert uppercase letters to lowercase
        }
    }
}

int isPalindrome(char *ch)
{
    int left = 0;
    int right = strlen(ch) - 1;

    while (left < right)
    {
        if (ch[left] != ch[right])
        {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }

    return 1; // Is a palindrome
}

int main(int argc, char const *argv[])
{
    char a[] = "A man, a plan, a canal: Panama";

    // Convert all uppercase letters to lowercase
    isLower(a);

    // Convert to alphanumeric only
    char *converted = convert_alphanum(a);

    // Check if the string is a palindrome
    if (isPalindrome(converted))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    // Free the allocated memory
    free(converted);

    return 0;
}
