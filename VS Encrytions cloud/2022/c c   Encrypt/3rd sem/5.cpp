/**
 * @Author: Dastan_Alam
 * @Date:   12-08-2022 08:47:08 PM       20:47:08
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 14-08-2022 09:07:58 PM       21:07:58
 */
#include <stdio.h>
int main()
{
    /* Code for allowing only 10 students
    to enter their age and  their age must not be more than 10 yrs
    and not less than 3 yrs  otherwise
    the whole group of 10 students will be rejected*/
    int i,j=1,y=1, age;
    
    for (i = 1; i <= 10; i++)
    {
        printf("enter your age:");
        scanf("%d", &age);
        if (age <= 10)
        {
            if (age >= 3)
            {
                if (i == 1)
                {
                    printf("%dst student you have entered your age as:%d\n", y, age);
                    y++;
                    continue;
                }
                else if (i == 2)
                {
                    printf("%dnd student you have entered your age as:%d\n", y, age);
                    y++;
                    continue;
                }

                else if (i == 3)
                {
                    printf("%drd student you have entered your age as:%d\n", y, age);
                    y++;
                    continue;
                }
                else 
                {
                    printf("%dth student you have entered your age as:%d\n", y, age);
                    y++;
                    continue;
                }
            }
            else
            {
                printf("Sorry,your group has been rejected,You're under the age limit.");
                break;
            }
        }
        else
        {
            printf("Sorry,your group has been rejected,You're over the age limit.");
            break;
        }
    }
    return 0;
}