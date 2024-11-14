/**
 * @Author: Dastan Alam
 * @Date:   2024-09-21 10:26:02 AM   10:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-21 10:50:45 AM   10:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// inserting a new element in specified position of array.
int main(int argc, char const *argv[])
{
    int a[10]={0,1,2,3,4,9,6,7,8,5};
    int ele=5;
    for (int i = 0; i < 10; i++)
    {
        if (a[i]==ele)
        {
            printf("%d",i);
            break;
            
        }
        else {printf("not found"); break;}
    }
    
    return 0;
}
