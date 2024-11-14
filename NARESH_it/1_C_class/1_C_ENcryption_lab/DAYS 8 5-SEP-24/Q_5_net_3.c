/**
 * @Author: Dastan Alam
 * @Date:   2024-09-05 06:22:55 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-05 06:29:06 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// TriangleIsValidORNot
// Write a C program to input all sides of a triangle and check whether triangle is valid or not.
 
//           Validity Check:
//           The sum of side1 and side2 must be greater than side3.
//           The sum of side1 and side3 must be greater than side2.
//           The sum of side2 and side3 must be greater than side1.
//           If all three conditions are true, the program prints "The triangle is valid."
//           If any of the conditions are false, the program prints "The triangle is not valid."

// Sample input  : Enter the lengths of the three sides of the triangle:
//                 Side 1: 3
//                 Side 2: 4
//                 Side 3: 5

// Sample output : The triangle is valid.



// Sample input  : Enter the lengths of the three sides of the triangle:
//                 Side 1: 1
//                 Side 2: 2
//                 Side 3: 3

// Sample output : The triangle is not valid.

int main(int argc, char const *argv[])
{
    int s1,s2,s3;
    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side 1:");
    scanf("%d",&s1);
    printf("Side 2:");
    scanf("%d",&s2);
    printf("Side 3:");
    scanf("%d",&s3);
    
    if ((s1+s2)>s3&&(s1+s3)>s2&&(s3+s2)>s1)
    {
        printf("The triangle is valid.");
    }
    else
    printf("The triangle is not valid.");
    
    return 0;
}
