/**
 * @Author: Dastan Alam
 * @Date:   2024-09-03 06:11:40 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-03 07:34:58 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 4;
    a += b % a;
    printf("%d",a);
    return 0;
}
