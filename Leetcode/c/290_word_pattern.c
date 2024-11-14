/**
 * @Author: Dastan Alam
 * @Date:   2024-10-31 12:59:02 PM   12:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-31 01:04:47 PM   13:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// 290_word_pattern
// Attempted
// Easy
// Topics
// Companies
// Given a pattern and a string s, find if s follows the same pattern.
// 
// Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s. Specifically:
// 
// Each letter in pattern maps to exactly one unique word in s.
// Each unique word in s maps to exactly one letter in pattern.
// No two letters map to the same word, and no two words map to the same letter.
//  
// 
// Example 1:
// 
// Input: pattern = "abba", s = "dog cat cat dog"
// 
// Output: true
// 
// Explanation:
// 
// The bijection can be established as:
// 
// 'a' maps to "dog".
// 'b' maps to "cat".
// Example 2:
// 
// Input: pattern = "abba", s = "dog cat cat fish"
// 
// Output: false
// 
// Example 3:
// 
// Input: pattern = "aaaa", s = "dog cat cat dog"
// 
// Output: false
// 
//  
// 
// Constraints:
// 
// 1 <= pattern.length <= 300
// pattern contains only lower-case English letters.
// 1 <= s.length <= 3000
// s contains only lowercase English letters and spaces ' '.
// s does not contain any leading or trailing spaces.
// All the words in s are separated by a single space.
#include <stdbool.h>

bool wordPattern(char* pattern, char* s) {
    int startspace=0;
    char cp[3];
    
    for(int i=0;pattern[i];i++)
    {
        
        for(int j=0;s[j];j++)
        {
            if(s[j]==' ')
            {
                for(int k=startspace;k<=j;k++)
                {
                    cp[k]=s[k];
                }
                cp[j-1]='\0';
                startspace=j+1;
            }
        }
       if (==  cp)
        {
            return false;
        }
        else return true;
    }
    return 0;
}

int main() {
    char pattern[] = "abba";
    char s[] = "dog cat cat dog";
    
    if (wordPattern(pattern, s)) {
        printf("The string follows the pattern.\n");
    } else {
        printf("The string does not follow the pattern.\n");
    }
    
    return 0;
}