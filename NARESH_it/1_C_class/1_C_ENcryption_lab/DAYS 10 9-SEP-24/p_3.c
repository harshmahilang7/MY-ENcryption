/**
 * @Author: Dastan Alam
 * @Date:   2024-09-09 06:40:40 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-10 10:51:20 AM   10:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// GradingManagement
// Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
// Calculate percentage and grade according to following:

// Percentage >= 90% : Grade A

// Percentage >= 80% : Grade B

// Percentage >= 70% : Grade C

// Percentage >= 60% : Grade D

// Percentage >= 40% : Grade E

// Percentage < 40% : Grade F

// Sample input :

// Enter marks of Physics: 85
// Enter marks of Chemistry: 78
// Enter marks of Biology: 92
// Enter marks of Mathematics: 88
// Enter marks of Computer: 95

// Sample output :

// Total Marks = 438.00/500
// Percentage = 87.60%
// Grade = B
int main(int argc, char const *argv[])
{
    float py, chem, bio, math, com;
    printf("marks of Physics: "); scanf("%f", &py);
    printf("marks of Chemistry: "); scanf("%f", &chem);
    printf("marks of Biology: "); scanf("%f", &bio);
    printf("marks of Mathematics: "); scanf("%f", &math);
    printf("marks of Computer: "); scanf("%f", &com);
    float t_m = py + chem + bio + math + com;
    printf("Total Marks =%.2f/500\n", t_m);
    float Per;
    Per = (t_m / 500) * 100;
    printf("Percentage=%.2f\n", Per);
    if (Per >= 90){ printf("Grade A"); }
    else if(Per >= 80) { printf("Grade B"); }
    else if(Per >= 70) { printf("Grade C"); }
    else if(Per >= 60) { printf("Grade D"); }
    else if(Per >= 40) { printf("Grade E"); }
    else { printf("Grade F"); }
    return 0;
}
