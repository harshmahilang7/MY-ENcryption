/**
 * @Author: Dastan Alam
 * @Date:   2024-10-31 06:26:13 PM   18:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-11-01 11:50:21 PM   23:11
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

//
// 12_integer_to_roman
// Medium
// Topics
// Companies
// Seven different symbols represent Roman numerals with the following values:
//
// Symbol	Value
// I	1
// V	5
// X	10
// L	50
// C	100
// D	500
// M	1000
// Roman numerals are formed by appending the conversions of decimal place values from highest to lowest. Converting a decimal place value into a Roman numeral has the following rules:
//
// If the value does not start with 4 or 9, select the symbol of the maximal value that can be subtracted from the input, append that symbol to the result, subtract its value, and convert the remainder to a Roman numeral.
// If the value starts with 4 or 9 use the subtractive form representing one symbol subtracted from the following symbol, for example, 4 is 1 (I) less than 5 (V): IV and 9 is 1 (I) less than 10 (X): IX. Only the following subtractive forms are used: 4 (IV), 9 (IX), 40 (XL), 90 (XC), 400 (CD) and 900 (CM).
// Only powers of 10 (I, X, C, M) can be appended consecutively at most 3 times to represent multiples of 10. You cannot append 5 (V), 50 (L), or 500 (D) multiple times. If you need to append a symbol 4 times use the subtractive form.
// Given an integer, convert it to a Roman numeral.
//
//
//
// Example 1:
//
// Input: num = 3749
//
// Output: "MMMDCCXLIX"
//
// Explanation:
//
// 3000 = MMM as 1000 (M) + 1000 (M) + 1000 (M)
//  700 = DCC as 500 (D) + 100 (C) + 100 (C)
//   40 = XL as 10 (X) less of 50 (L)
//    9 = IX as 1 (I) less of 10 (X)
// Note: 49 is not 1 (I) less of 50 (L) because the conversion is based on decimal places
// Example 2:
//
// Input: num = 58
//
// Output: "LVIII"
//
// Explanation:
//
// 50 = L
//  8 = VIII
// Example 3:
//
// Input: num = 1994
//
// Output: "MCMXCIV"
//
// Explanation:
//
// 1000 = M
//  900 = CM
//   90 = XC
//    4 = IV
//
//
// Constraints:
//
// 1 <= num <= 3999

char numtochar(int num)
{
    switch (num)
    {
    case 1:
        return 'I';
    // case 2:return 'II';
    // case 3:return 'III';
    // case 4:return 'IV';
    // case 5:return 'V';
    // case 6:return 'VI';
    // case 7:return 'VII';
    // case 8:return 'VIII';
    // case 9:return 'IX';
    case 10:
        return 'X';
    case 50:
        return 'L';
    case 100:
        return 'C';
    case 500:
        return 'D';
    case 1000:
        return 'M';
    default:
        return ' ';
    }
}

char singlechar(int SecNum, int firstNum, int arr[],int rom[],int c,int k)
{
        for (int i = SecNum; i < firstNum; i++)
        {
            if (c + 1 == arr[i])
            {
                rom[k++] = numtochar(1);
                rom[k++] = numtochar(c + 1);
            }
            else if ((c - 1) == arr[i])
            {
                rom[k++] = numtochar(c - 1);
                rom[k++] = numtochar(1);
            }
            else if ((c - 2) == arr[i])
            {
                rom[k++] = numtochar(c - 2);
                rom[k++] = numtochar(1);
                rom[k++] = numtochar(1);
            }
            else if ((c - 3) == arr[i])
            {
                rom[k++] = numtochar(c - 3);
                rom[k++] = numtochar(1);
                rom[k++] = numtochar(1);
                rom[k++] = numtochar(1);
            }
            else if ((c - 4) == arr[i])
            {
                rom[k++] = numtochar(c - 4);
                rom[k++] = numtochar(1);
                rom[k++] = numtochar((c - 4) / 2);
            }
        }
    }
}
char intToRoman(int num)
{
    int c = num;
    char rom[100];
    int size = 0;
    int k = 0;
    int sq = 0;
    int arr[] = {1, 5, 10, 50, 100, 500, 1000};
    size = sizeof(arr);
    if (c == 1 || c == 10 || c == 50 || c == 100 || c == 500 || c == 1000)
    {
        rom[k++] = numtochar(c);
    }
    else
    {
        for (sq = 0; sq < size; sq++)
        {
            if (num < arr[sq])
            {
                break;
            }
        }
        int firstNum = arr[sq];
        int SecNum = arr[sq - 1];
        singlechar(SecNum,firstNum,arr,rom,c,k)
    }
}

int main(int argc, char const *argv[])
{
    intToRoman(2);
    return 0;
}
