/**
 * @Author: Dastan Alam
 * @Date:   2024-09-29 11:33:25 PM   23:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-29 11:41:36 PM   23:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>
// Ranam Roudram Rudhiram  R R R
// Kabhi Kushi Kabhi Ghum KKKG
int main(int argc, char const *argv[])
{
    char a[]="Kabhi Kushi   Kabhi ghum";
    int size=printf("%s\n",a);
    for (int i = 0; i < size; i++)
    {
        if (i==0)printf("%c ",toupper(a[i]));
        else if (a[i]==' ')
        {
            if (a[i]==a[i+1])
            {
                continue;
            }
            else{printf("%c ",toupper(a[i+1]));i++;}
        }
    }
    // printf("\n%s",a);
    return 0;
}
