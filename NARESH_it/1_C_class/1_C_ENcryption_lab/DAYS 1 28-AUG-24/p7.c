/**
 * @Author: Dastan Alam
 * @Date:   2024-08-28 06:35:47 PM   18:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-28 06:41:00 PM   18:08
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 7 : Write a C program to calculate and print the area of a square and rectangle.
// -------

// Sample input :
// Side of square is : 5
// Length and breadth of rectanngle is : 4 , 5

// Sample output :
// The area of the square with side 5 is: 25
// The area of the rectangle with length 4 and breadth 5 is: 20

int main()
{
    int Side_of_square=5;
    int Length_of_rectanngle=4;
    int breadth_of_rectanngle=5;
    
    printf("The area of the square with side %d is: %d\n",Side_of_square,Side_of_square*Side_of_square);
    printf("The area of the rectangle with length %d and breadth %d is: %d",Length_of_rectanngle,breadth_of_rectanngle,(breadth_of_rectanngle*Length_of_rectanngle));
    
    return 0;
}
