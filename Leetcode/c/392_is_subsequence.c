// // /**
// //  * @Author: Dastan Alam
// //  * @Date:   2024-10-28 12:49:05 AM   00:10
// //  * @Last Modified by:   Dastan Alam
// //  * @Last Modified time: 2024-10-28 01:47:54 AM   01:10
// //  */
// // 392_is_subsequence
// // // Attempted
// // // Easy
// // // Topics
// // // Companies
// // // Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

// // // A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 

// // // Example 1:

// // // Input: s = "abc", t = "ahbgdc"
// // // Output: true
// // // Example 2:

// // // Input: s = "axc", t = "ahbgdc"
// // // Output: false
 

// // // Constraints:

// // // 0 <= s.length <= 100
// // // 0 <= t.length <= 104
// // // s and t consist only of lowercase English letters.
 

// // // Follow up: Suppose there are lots of incoming s, say s1, s2, ..., sk where k >= 109, and you want to check one by one to see if t has its subsequence. In this scenario, how would you change your code?

// // #include <stdio.h>
// // #include <stdlib.h>
// // #include <stdint.h>
// // #include <string.h>
// // #include <stdbool.h>

// // bool isSubsequence(char* s, char* t) {
// //     int s_size=0;
// //     int c=0;
// //     int in=0;
// //     int last=0;
// //     int j;
// //     for(s_size;s[s_size];s_size++);
// //     for(int i=0; t[i];i++)
// //     {
// //         for(j=0;t[j];j++)
// //         {
// //             if(t[i]==s[j])
// //             {
// //                 j=i;
// //                 c++;                
// //             }
// //         }
// //     }
    
// //     printf("%d",c);
// //     if(c==s_size)
// //     {
// //         return true;
// //     }
// //     else return false;
// // }
// // int main(int argc, char const *argv[])
// // {
// //     char s[] = "acb";
// //     char t[] = "ahbgdc";
// //     if (isSubsequence(s, t)) {
// //         printf("'%s' is a subsequence of '%s'\n", s, t);
// //     } else {
// //         printf("'%s' is NOT a subsequence of '%s'\n", s, t);
// //     }
// //     return 0;
// // }
// /**
//  * @Author: Dastan Alam
//  * @Date:   2024-10-28 12:49:05 AM   00:10
//  * @Last Modified by:   Dastan Alam
//  * @Last Modified time: 2024-10-28 01:46:18 AM   01:10
//  */
// // 392_is_subsequence
// // Attempted
// // Easy
// // Topics
// // Companies
// // Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

// // A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 

// // Example 1:

// // Input: s = "abc", t = "ahbgdc"
// // Output: true
// // Example 2:

// // Input: s = "axc", t = "ahbgdc"
// // Output: false
 

// // Constraints:

// // 0 <= s.length <= 100
// // 0 <= t.length <= 104
// // s and t consist only of lowercase English letters.
 

// // Follow up: Suppose there are lots of incoming s, say s1, s2, ..., sk where k >= 109, and you want to check one by one to see if t has its subsequence. In this scenario, how would you change your code?

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdint.h>
// #include <string.h>
// #include <stdbool.h>

// bool isSubsequence(char* s, char* t) {
//     int s_size=0;
//     int c=0;
//     int in=0;
//     int last=0;
//     int j;
//     for(s_size;s[s_size];s_size++);
//     for(int i=0; t[i];i++)
//     {
//         for(j=0;t[j];j++)
//         {
//             if(t[i]==s[j])
//             {
//                 j=i;
//                 c++;                
//             }
//         }
//     }
    
//     printf("%d",c);
//     if(c==s_size)
//     {
//         return true;
//     }
//     else return false;
// }
// int main(int argc, char const *argv[])
// {
//     char s[] = "acb";
//     char t[] = "ahbgdc";
//     if (isSubsequence(s, t)) {
//         printf("'%s' is a subsequence of '%s'\n", s, t);
//     } else {
//         printf("'%s' is NOT a subsequence of '%s'\n", s, t);
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdbool.h>

bool isSubsequence(char* s, char* t) {
    int i = 0, j = 0;
    while (s[i] && t[j]) {
        if (s[i] == t[j]) {
            i++;  // Move to the next character in 's'
        }
        j++;  // Move to the next character in 't'
    }
    return s[i] == '\0';  // If all characters in 's' were found in 't' in order
}

int main(int argc, char const *argv[])
{
    char s[] = "acb";
    char t[] = "ahbgdc";
    if (isSubsequence(s, t)) {
        printf("'%s' is a subsequence of '%s'\n", s, t);
    } else {
        printf("'%s' is NOT a subsequence of '%s'\n", s, t);
    }
    return 0;
}
