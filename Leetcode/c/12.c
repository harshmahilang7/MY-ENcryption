/**
 * @Author: Dastan Alam
 * @Date:   2024-11-01 11:51:42 PM   23:11
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-11-02 12:42:31 AM   00:11
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* intToRoman(int num) 
{
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    char* result = (char*)malloc(20 * sizeof(char));
    result[0] = '\0'; 
    for (int i = 0; i < 13 && num > 0; i++) {
        for (; num >= values[i]; num -= values[i]) {
            strcat(result, symbols[i]);
        }
    }
    return result;
}

int main() {
    int number = 3749;
    char* roman = intToRoman(number);
    printf("The Roman numeral for %d is %s\n", number, roman);
    free(roman);  // Free the allocated memory
    return 0;
}
