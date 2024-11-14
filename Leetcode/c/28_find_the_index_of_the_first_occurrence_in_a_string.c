/**
 * @Author: Dastan Alam
 * @Date:   2024-10-27 11:13:45 PM   23:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-29 09:29:56 PM   21:10
 */
// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/?source=submission-noac
// 28. Find the Index of the First Occurrence in a String
// Attempted
// Easy
// Topics
// Companies
// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

// Example 1:

// input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.
// Example 2:

// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we return -1.

// Constraints:

// 1 <= haystack.length, needle.length <= 104
// haystack and needle consist of only lowercase English characters.

// Seen this question in a real interview before?
// 1/5
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// int strStr(char *haystack, char *needle)
// {
//     int c = 0;
//     int b_size;
//     int i;
//     for (b_size = 0; needle[b_size]; b_size++);

    
//     for (i = 0; haystack[i]; i++)
//     {
//         if (haystack[i] == needle[i])
//         {
//             c++;
//         }
        
//     }
//     // printf("%d,%d",c,b_size);
//     if (c == (b_size))
//     {
//         return i-c;
//     }
//     else
//     {
//         return -1;
//     }
// }

int strStr(char *haystack, char *needle)
{
    int c = 0;
    int b_size;
    int i;
    for (b_size = 0; needle[b_size]; b_size++);
    
    for (int i = 0; i < ; i++)
    {
        /* code */
    }
    
    
}


int main(int argc, char const *argv[])
{
    char first[] = "hello";
    char sec[] = "ll";
    printf("%d", strStr(first, sec));
    return 0;
}
