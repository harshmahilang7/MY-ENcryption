/**
 * @Author: Dastan Alam
 * @Date:   2024-09-05 09:38:50 PM   21:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-05 09:58:11 PM   21:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char const *argv[])

{
    // int x = 3;
    // int y = 2;
    // //      3   * 4 *  1  - 1 
    // int z = x++ * x * --y - y--;
    //     // 3   *  3   *  1 -1  
    //             //    4 ,0, 11
    // printf("%d %d %d", x, y,z);

    int a=2;
    int c=++a + a++;
    printf("%d",c);
    return 0;
}