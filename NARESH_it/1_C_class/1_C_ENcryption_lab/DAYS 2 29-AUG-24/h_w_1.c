/**
 * @Author: Dastan Alam
 * @Date:   2024-08-29 04:02:29 PM   16:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-29 04:20:46 PM   16:08
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main()
{
    int total_no_of_days;
    printf("enter the no of days=");
    scanf("%d",&total_no_of_days);
    int years=total_no_of_days/365;
    int month=(total_no_of_days%365)/30;
    int week=((total_no_of_days%365)%30)/7;
    int days=(((total_no_of_days%365)%30)%7);
    printf("years=%d,Month=%d,Week=%d,Days=%d",years,month,week,days);
    return 0;
}
