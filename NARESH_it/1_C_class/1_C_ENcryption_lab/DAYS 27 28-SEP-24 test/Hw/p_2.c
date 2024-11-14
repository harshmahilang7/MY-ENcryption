/**
 * @Author: Dastan Alam
 * @Date:   2024-09-29 10:50:38 PM   22:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-29 11:29:37 PM   23:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>

// Eg:2 1 am pr0Ud to be indlAN ==> I Am Proud To Be Indian.
int main(int argc, char const *argv[])
{
    char a[]="you are  so brr rutiful    swe             etheart";
    int size=printf("%s\n",a);
    for (int i = 0; i < size; i++)
    {
        if (i==0)a[i]=toupper(a[i]);
        else if (a[i]==' ')
        {
            if (a[i]==a[i+1])
            {
                continue;
            }
            else{a[i+1]=toupper(a[i+1]);i++;}
        }
        else a[i]=tolower(a[i]);
    }
    printf("%s",a);
    return 0;
}
