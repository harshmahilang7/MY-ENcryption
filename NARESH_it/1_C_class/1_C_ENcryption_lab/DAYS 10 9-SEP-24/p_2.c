/**
 * @Author: Dastan Alam
 * @Date:   2024-09-09 06:19:13 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-12 12:08:41 PM   12:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// TriangleIsEquilateralIsoscelesORScaleneTriangle
// Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.

//          Validity Check:
//          If all three sides are equal then the triangle is equilateral.
//          If exactly two sides are equal then the triangle is isosceles.
//          If all sides are different then the triangle is scalene.

// Sample input :  Enter the lengths of the three sides of the triangle:
//                 Side 1: 3
//                 Side 2: 3
//                 Side 3: 3
// Sample output : The triangle is equilateral.
// -------------------------------------------------

// Sample input :  Enter the lengths of the three sides of the triangle:
//                 Side 1: 5
//                 Side 2: 5
//                 Side 3: 8
// Sample output : The triangle is isosceles.
// -------------------------------------------------

// Sample input : Enter the lengths of the three sides of the triangle:
//                 Side 1: 3
//                 Side 2: 4
//                 Side 3: 5
// Sample output : The triangle is scalene.
// -------------------------------------------------

// Sample input : Enter the lengths of the three sides of the triangle:
//                 Side 1: 1
//                 Side 2: 2
//                 Side 3: 3
// Sample output : The triangle is not valid.
int main()
{
    int s1, s2, s3;
    printf("enter the side 1 side 2 side 3=");
    scanf("%d %d %d", &s1, &s2, &s3);
    if ((s1 + s2 > s3) && (s2 + s3 > s1) && (s1 + s3 > s2))
    {
        if (s1 == s2 == s3)
        {
            printf("The triangle is equilateral");
        }
        else if ((s1 == s2 && s1 != s3) || (s2 == s3 && s2 != s1) || (s1 == s3 && s1 != s2))
        // else if (s1!=s2!=s3)
        {
            printf("The triangle is isosceles");
        }
        else
        {
            printf("The triangle is scalene");
        }
    }
    else
    {
        printf("The triangle is not valid");
    }

    return 0;
}
