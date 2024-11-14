/**
 * @Author: Dastan Alam
 * @Date:   2024-09-07 01:38:33 PM   13:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-07 02:05:54 PM   14:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main() 
{ 
    // int a = 1, b = 4, c = 10; 
    // c = a = 10 == b + 6;
    // printf("%d %d %d", a, b, c);
    // return 0;
    { 
        int a = 1, b;
        // b = ++a + a++ + a++; 
        // printf("a=%d, b=%d\n", a, b); 
        a = 1;
        b = a++ + ++a ;
        //   1  + 3 
        printf("a=%d, b=%d", a, b); 
        return 0; 
    }
}