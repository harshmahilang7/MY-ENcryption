/**
 * @Author: Dastan Alam
 * @Date:   2024-09-11 06:05:52 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-11 06:39:42 PM   18:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Using switch statement write a C Program to take the value from the user as input marks of five subjects Physics, Chemistry, Biology, Mathematics, and Computer. 
// Calculate percentage and grade according to the following : 
// Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F
// Using switch statement.


// [Note:-Take All the values as Integer]


int main(int argc, char const *argv[])
{
    int m,p,ch,b,c;
    printf("enter the five subject mark\n");
    printf("enter the marks of maths="); scanf("%d",&m);
    printf("enter the marks of physic="); scanf("%d",&p);
    printf("enter the marks of chemistry="); scanf("%d",&ch);
    printf("enter the marks of biology="); scanf("%d",&b);
    printf("enter the marks of computer="); scanf("%d",&c);
    int per;
    per=(m+p+ch+b+c)/5;
    // per=70;
    switch (per>=90)
    {
    case 1:
        printf("Grade A");
        break;
    default:
        switch (per>=80)
        {
        case 1:
            printf("Grade B");
            break;
        
        default:
            switch (per>=70)
            {
            case 1:
                printf("Grade C");
                break;
            
            default:
                switch (per>=60)
                {
                case 1:
                    printf("Grade D");
                    break;
                
                default:
                    switch (per>=40)
                    {
                    case 1:
                        printf("Grade E");
                        break;
                    
                    default:
                        switch (per<40)
                        {
                        case 1:
                            printf("Grade F");
                            break;
                        
                        default:
                            printf("invalid");
                            break;
                        }
                        break;
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
    return 0;
}
