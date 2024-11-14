/**
 * @Author: Dastan Alam
 * @Date:   2024-09-12 09:50:22 AM   09:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-12 10:05:37 AM   10:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

// armstrong number
int main(int argc, char const *argv[])
{
    int number,am=0,r=0,po=0;
    scanf("%d",&number);
    int c=number;
    po=printf("%d",number);
    do
    {
        r=number%10;
        am=am+ pow(r,po);
        number/=10;
    } while (number!=0);
    if (am==c) printf("armstrong");
    else printf("not a armstong number");
    return 0;
}
