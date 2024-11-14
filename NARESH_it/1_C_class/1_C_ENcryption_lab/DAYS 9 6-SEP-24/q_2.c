/**
 * @Author: Dastan Alam
 * @Date:   2024-09-06 07:26:48 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-06 07:30:12 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Que 2 :
// ======= 

// Write a 'C' program to take the number of seconds and convert into (H:M:S)

// Sample input  : int seconds = 3665

// Sample Output : 1 hour 1 minute and 5 second

int main()
{
    int  seconds = 3665;
    int hr,min,sec;
    hr=seconds/60/60;
    min=seconds/60%60;
    sec=seconds%60%60;
    printf("%d hour %d miniute %d second",hr,min,sec);
    return 0;
}
