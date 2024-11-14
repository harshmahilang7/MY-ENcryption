/**
 * @Author: Dastan Alam
 * @Date:   2024-08-29 04:20:57 PM   16:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-29 06:45:59 PM   18:08
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int c_id=1001;
    char name[]="DASTAN_ALAM";
    int quantity=2;
    int rate_of_item=200;
    int total=rate_of_item*quantity;
    printf("Coustumer id is %d\n",c_id);
    printf("Name is %s\n",name);
    printf("Quantity is %d\n",quantity);
    printf("Rate of item is %d\n",rate_of_item);
    printf("total=%d\n",total);
    int dis=((float)35/(float)100)*(float)total;
    printf("discont=%d\n",dis);
    printf("the ammont have to is %d",total-dis);  
    return 0;
}
