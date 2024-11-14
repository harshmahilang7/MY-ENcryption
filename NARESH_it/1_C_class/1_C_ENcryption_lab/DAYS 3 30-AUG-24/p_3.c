/**
 * @Author: Dastan Alam
 * @Date:   2024-08-30 06:11:17 PM   18:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-30 06:33:50 PM   18:08
 */

// Que 3 : Write a 'C' program to take the number of seconds and convert into (H:M:S)
// -------

// Sample input  : int seconds = 3665

// Sample Output : 1 hour 1 minute and 5 second
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int seconds;
    printf("enter the sec");
    scanf("%d",&seconds);
    int hr=seconds/60/60;
    int min=seconds/60%60;
    int sec=seconds%60;
    printf("%d:%d:%d\n",hr,min,sec);
    printf("%d hour:%d minute:%d second",hr,min,sec);
    return 0;
}
